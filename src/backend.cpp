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
    connect(m_serial, &Serial::dataReceived, this, &Backend::handleSerialData);

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
    m_displayLiters = 100;
    m_liters = m_displayLiters * 10;
    m_displayRange = 100;

    emit s_liters();
    emit s_displayLiters();
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
    m_fuelLevel = true;

    emit s_currentGear();
    emit s_engineTemp();
    emit s_fuelLevel();
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

void Backend::handleSerialData(const QByteArray &data)
{
    QString receivedData = QString::fromUtf8(data);
    qDebug() << "Received serial data:" << receivedData;
    // Handle the received data (e.g., update UI or process commands)
    m_displayKph = receivedData.toInt();
    m_kph = receivedData.toInt() * 2;
    emit s_displayKph();
    emit s_kph();

    updateTireAngle(50-receivedData.toInt());

    /*
    speed
    motor_rpm
    voltage
    ah
    */
}
