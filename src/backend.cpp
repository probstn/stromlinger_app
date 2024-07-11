#include "backend.h"
#include <QQmlComponent>
#include <QQmlProperty>
#include <QDebug>

Backend::Backend(QObject *parent)
    : QObject(parent)
{
    QObject::connect(this, &Backend::s_displayKph, this, &Backend::demoSlot); //here we connect the signalSpeed to the demoSlot to demonstrate how slots get activated if connected signals get emitted
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
    m_liters = m_displayLiters*10;
    m_displayRange = 100;

    emit s_liters();
    emit s_displayLiters();
    emit s_displayRange();
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

