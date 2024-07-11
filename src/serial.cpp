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



    m_serialPort->setPortName("/dev/ttyUSB1");
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
