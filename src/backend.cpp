#include "backend.h"
#include <QQmlComponent>
#include <QQmlProperty>
#include <QDebug>

Backend::Backend(QObject *parent)
    : QObject(parent),
    m_serialPort(new QSerialPort(this))
{
    QObject::connect(this, &Backend::s_displayKph, this, &Backend::demoSlot);

    // Setup the serial port
    m_serialPort->setPortName("/dev/tty0"); // Adjust the port name as necessary
    m_serialPort->setBaudRate(QSerialPort::Baud9600);
    m_serialPort->setDataBits(QSerialPort::Data8);
    m_serialPort->setParity(QSerialPort::NoParity);
    m_serialPort->setStopBits(QSerialPort::OneStop);
    m_serialPort->setFlowControl(QSerialPort::NoFlowControl);

    connect(m_serialPort, &QSerialPort::readyRead, this, &Backend::readSerialData);

    if (!m_serialPort->open(QIODevice::ReadWrite)) {
        qWarning() << "Failed to open port" << m_serialPort->portName() << ", error:" << m_serialPort->errorString();
    }
}

void Backend::readSerialData()
{
    while (m_serialPort->canReadLine()) {
        QByteArray data = m_serialPort->readLine();
        processSerialData(data);
    }
}

void Backend::processSerialData(const QByteArray &data)
{
    // Example data processing, assuming data format is "kph:100,rpm:2000,fuel:50"
    QList<QByteArray> dataList = data.split(',');

    for (const QByteArray &entry : dataList) {
        QList<QByteArray> keyValue = entry.split(':');
        if (keyValue.size() == 2) {
            QString key = keyValue[0].trimmed();
            int value = keyValue[1].trimmed().toInt();

            if (key == "kph") {
                m_kph = value;
                emit s_kph();
            } else if (key == "rpm") {
                m_rpm = value;
                emit s_rpm();
            } else if (key == "fuel") {
                m_liters = value;
                emit s_liters();
            }
        }
    }
}

void Backend::updateSpeed()
{
    m_displayKph = m_kph;
    emit s_displayKph();
}

void Backend::updateRpm()
{
    m_displayRpm = m_rpm;
    emit s_displayRpm();
}

void Backend::updateFuel()
{
    m_displayLiters = m_liters;
    emit s_displayLiters();
}

void Backend::updateMisc()
{
    m_currentGear = 3;
    m_engineTemp = true;
    m_fuelLevel = true;

    emit s_currentGear();
    emit s_engineTemp();
    emit s_fuelLevel();
}

void Backend::writeToSerial(const QString &data)
{
    if (m_serialPort->isOpen() && m_serialPort->isWritable()) {
        m_serialPort->write(data.toUtf8());
    } else {
        qWarning() << "Serial port not open or not writable";
    }
}

void Backend::demoSlot()
{
    qInfo() << "demo Slot activated";
}
