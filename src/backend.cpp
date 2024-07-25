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
    TIREANGLE,
};

void Backend::processPacket(uint8_t* packet, uint8_t length)
{
    if(packet[1] == 0x00) {
        m_rpmDial = (packet[MSB_RPM] << 8) | packet[LSB_RPM];
        emit s_rpmDial();
        m_rpmText = QString::number((packet[MSB_RPM] << 8) | packet[LSB_RPM]);
        emit s_rpmText();
        m_voltageText = QString::number((packet[MSB_VBAT] << 8) | packet[LSB_VBAT]);
        emit s_voltageText();
        m_ampText = QString::number((packet[MSB_MOTORCURR] << 8) | packet[LSB_MOTORCURR]);
        emit s_ampText();
        m_ampDial = (packet[MSB_MOTORCURR] << 8) | packet[LSB_MOTORCURR];
        emit s_ampDial();
        m_errorCode = 0xFFFF;
        emit s_errorCode();
    } else if(packet[1] == 0x01) {
        //qDebug() << "Got message 2";

    } else if(packet[1] == 0x02) {
        //qDebug() << "Got message 3";
        m_speedDial = packet[SPEED];
        emit s_speedDial();
        m_speedText = QString::number(packet[SPEED]);
        emit s_speedText();
        m_tireAngle = packet[TIREANGLE] - 45;
        emit s_tireAngle();
    }
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
