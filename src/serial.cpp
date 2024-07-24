#include "serial.h"
#include <QDebug>

Serial::Serial(QObject *parent)
    : QObject(parent),
    m_serialPort(new QSerialPort(this))
{
    connect(m_serialPort, &QSerialPort::readyRead, this, &Serial::dataReady);
}

Serial::~Serial()
{
    closeSerialPort();
}

bool Serial::openSerialPort()
{
    /*
    qDebug() << "Number of available ports: " << QSerialPortInfo::availablePorts().length();
    foreach(const QSerialPortInfo &serialPortInfo, QSerialPortInfo::availablePorts()){
        qDebug() << "Has vendor ID: " << serialPortInfo.hasVendorIdentifier();
        if(serialPortInfo.hasVendorIdentifier()){
            qDebug() << "Vendor ID: " << serialPortInfo.vendorIdentifier();
        }
        qDebug() << "Has Product ID: " << serialPortInfo.hasProductIdentifier();
        if(serialPortInfo.hasProductIdentifier()){
            qDebug() << "Product ID: " << serialPortInfo.productIdentifier();
        }
    }
    */

    QList<QSerialPortInfo> availablePorts = QSerialPortInfo::availablePorts();
    QSerialPortInfo correctPort;
    bool deviceFound = false;
    int vendorId = 4292; //esp32 specific
    int productId = 60000; //esp32 specific

    // Search for the correct device
    for (const QSerialPortInfo &portInfo : availablePorts) {
        if (portInfo.hasVendorIdentifier() && portInfo.hasProductIdentifier()) {
            if (portInfo.vendorIdentifier() == vendorId && portInfo.productIdentifier() == productId) {
                correctPort = portInfo;
                deviceFound = true;
                break;
            }
        }
    }

    if (!deviceFound) {
        qDebug() << "Device not found.";
        return false;
    }

    //esp32 serial port available
    m_serialPort->setPortName(correctPort.portName()); //result as target port name
    m_serialPort->setBaudRate(QSerialPort::Baud115200);
    m_serialPort->setDataBits(QSerialPort::Data8);
    m_serialPort->setParity(QSerialPort::NoParity);
    m_serialPort->setStopBits(QSerialPort::OneStop);
    m_serialPort->setFlowControl(QSerialPort::NoFlowControl);

    if (m_serialPort->open(QIODevice::ReadWrite)) {
        qDebug() << "Serial port" << m_serialPort->portName() << "opened successfully.";
        return true;
    }
    qDebug() << "Failed to open serial port.";
    return false;
}

void Serial::closeSerialPort()
{
    if (m_serialPort->isOpen()) {
        m_serialPort->close();
    }
}

void Serial::writeData(const QByteArray &data)
{
    if (m_serialPort->isWritable()) {
        m_serialPort->write(data);
    } else {
        qDebug() << "Serial port is not writable.";
    }
}

uint8_t packet[13];
uint8_t data_index = 0;

enum packetState {
    HEADER = 0,
    TYPE = 1,
    LENGTH = 2,
    DATA = 3,
    CRC_MSB = 11,
    CRC_LSB = 12
};

packetState state;

void Serial::dataReady()
{
    QByteArray buffer;

    if (m_serialPort->isReadable()) {
        // Read all available data from the serial port
        buffer = m_serialPort->readAll();

        for(uint8_t b : buffer) {
            if(state == HEADER) {
                if(b == 0x81) {
                    //got header
                    //qDebug() <<"Got header!";
                    packet[HEADER] = b;
                    state = TYPE;
                }
            } else if (state == TYPE) {
                packet[TYPE] = b;
                state = LENGTH;
            } else if (state == LENGTH) {
                packet[LENGTH] = b;
                state = DATA;
            } else if (state == DATA) {
                //8 Databytes in Kelly messages
                packet[DATA + data_index] = b;
                data_index++;
                if(data_index > 7) {
                    data_index = 0;
                    state = CRC_MSB;
                }
            } else if (state == CRC_MSB) {
                packet[CRC_MSB] = b;
                state = CRC_LSB;
            }  else if (state == CRC_LSB) {
                packet[CRC_LSB] = b;
                state = HEADER;
                uint16_t packetCalculatedChecksum = crc16(packet, packet[2]-2);
                uint16_t packetReceivedChecksum = ((packet[CRC_MSB] << 8) | packet[CRC_LSB]);
                //qDebug() << packet[CRC_MSB] << packet[CRC_LSB] << ((checksum >> 8) & 0xFF) << (checksum & 0xFF);
                if(packetCalculatedChecksum == packetReceivedChecksum) {
                    emit packetReceived(packet, packet[LENGTH]);
                }
            }
        }
    } else {
        qDebug() << "Serial port is not readable.";
    }
}

// Function to calculate CRC16-CCITT
uint16_t crc16(const uint8_t *data, size_t length) {
    uint16_t crc = 0xFFFF;
    for (size_t i = 0; i < length; i++) {
        crc ^= (uint16_t)data[i] << 8;
        for (uint8_t j = 0; j < 8; j++) {
            if (crc & 0x8000) {
                crc = (crc << 1) ^ 0x1021;
            } else {
                crc = crc << 1;
            }
        }
    }
    return crc;
}
