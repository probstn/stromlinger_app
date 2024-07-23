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
    QObject::connect(this, &Backend::s_kphText, this, &Backend::demoSlot); // Connect signal to slot

    // Connect serial data received signal to the handler slot
    connect(m_serial, &Serial::packetReceived, this, &Backend::processPacket);

    // Open serial port
    if (!m_serial->openSerialPort()) {
        qDebug() << "Failed to open serial port.";
    }
}

void Backend::demoSlot()
{
    //qInfo() << "demo Slot activated";
}

void Backend::writeSerialData(const QString &data)
{
    QByteArray byteArray = data.toUtf8();
    m_serial->writeData(byteArray);
}

enum ESC1 {
    LSB_RPM = 3,
    MSB_RPM,
    LSB_MOTORCURR,
    MSB_MOTORCURR,
    LSB_VBAT,
    MSB_VBAT,
    LSB_ERROR,
    MSB_ERROR,
};

enum ESC2 {
    THROTTLE = 3,
    CONTROLLER_TEMP,
    MOTOR_TEMP,
    RESERVED,
    CONTROLLER_STATUS,
    SWITCH_STATUS,
};

enum ESC3 {
    SPEED = 3,
};

void Backend::processPacket(const QByteArray &packet)
{
    if(packet[1] == 0x00) {
        //qDebug() << "Got message 1";
        //m_displayRpm = m_rpm = ((packet[MSB_RPM] << 8) | packet[LSB_RPM]);
        //m_voltage = ((packet[MSB_VBAT] << 8) | packet[LSB_VBAT]);
    } else if(packet[1] == 0x01) {
        //qDebug() << "Got message 2";

    } else if(packet[1] == 0x02) {
        //qDebug() << "Got message 3";
        //m_displayKph = m_kph = packet[SPEED];
    }

    // Handle the received data (e.g., update UI or process commands)
    emit s_kphText();
    emit s_rpmText();

    //updateTireAngle(50-receivedData.toInt());
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
