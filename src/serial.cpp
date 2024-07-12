#include "serial.h"
#include <QDebug>

Serial::Serial(QObject *parent)
    : QObject(parent),
    m_serialPort(new QSerialPort(this))
{
    connect(m_serialPort, &QSerialPort::readyRead, this, &Serial::handleReadyRead);
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

QByteArray Serial::readData()
{
    QByteArray data;
    if (m_serialPort->isReadable()) {
        data = m_serialPort->readAll();
    } else {
        qDebug() << "Serial port is not readable.";
    }
    return data;
}

void Serial::handleReadyRead()
{
    QByteArray data = m_serialPort->readAll();
    emit dataReceived(data);
}
