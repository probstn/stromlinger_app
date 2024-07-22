// backend.cpp
#include "backend.h"
#include "serial.h"
#include <QQmlComponent>
#include <QQmlProperty>
#include <QDebug>

Backend::Backend(QObject *parent)
    : QObject(parent),
    m_serial(new Serial(this))
{
    QObject::connect(this, &Backend::s_displayKph, this, &Backend::demoSlot); // Connect signal to slot

    // Connect serial data received signal to the handler slot
    connect(m_serial, &Serial::packetReceived, this, &Backend::processPacket);

    // Open serial port
    if (!m_serial->openSerialPort()) {
        qDebug() << "Failed to open serial port.";
    }
}

void Backend::updateSpeed()
{
    m_kph = m_displayKph = 100;
    m_displayKpl = 100;

    emit s_kph();
    emit s_displayKph();
    emit s_displayKpl();
}

void Backend::updateRpm()
{
    m_rpm = rand() % 1000;
    m_displayRpm = m_rpm * 10;

    emit s_rpm();
    emit s_displayRpm();
}

void Backend::updateFuel()
{
    m_displayKph = 100;
    m_kph = m_displayKph * 10;
    m_displayRange = 100;

    emit s_kph();
    emit s_displayKph();
    emit s_displayRange();
}

void Backend::updateTireAngle(int angle)
{
    m_tireangle = angle;
    emit s_tireangle();
}

void Backend::updateMisc()
{
    m_currentGear = 3;
    m_engineTemp = true;
    m_voltage = true;

    emit s_currentGear();
    emit s_engineTemp();
    emit s_voltage();
}

void Backend::demoSlot()
{
    qInfo() << "demo Slot activated";
}

void Backend::writeSerialData(const QString &data)
{
    QByteArray byteArray = data.toUtf8();
    m_serial->writeData(byteArray);
}

void Backend::processPacket(const QByteArray &packet)
{

    if(packet[1] == 0x00) {
        qDebug() << "Got message 1";
    } else if(packet[1] == 0x01) {
        qDebug() << "Got message 2";
    }
    /*
    QString receivedData = QString::fromUtf8(data);
    qDebug() << "Received serial data:" << receivedData;

    if(data[0] == 0x81) {
        qDebug() << "Got header";

        if(data[1] == 0x00) {
            qDebug() << "Got type ESC1";

        }
        else if(data[1] == 0x01) {
            qDebug() << "Got type ESC2";
            m_displayRpm = (data[4] << 8) & data[3];
            m_displayKph = (data[8] << 8) & data[7];
            emit s_displayRpm();
            emit s_displayKph();
        }
    }


    // Handle the received data (e.g., update UI or process commands)
    m_displayKph = receivedData.toInt();
    m_kph = receivedData.toInt() * 2;
    emit s_displayKph();
    emit s_kph();

    updateTireAngle(50-receivedData.toInt());
    */
    /*
    speed
    motor_rpm
    voltage
    ah
    */
}

void Backend::sendLeft()
{
    writeSerialData("1");
}

void Backend::sendRight()
{
    writeSerialData("2");
}

void Backend::sendCenter()
{
    writeSerialData("0");
}
