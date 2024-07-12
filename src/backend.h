// backend.h
#ifndef BACKEND_H
#define BACKEND_H

#include <QObject>
#include <QtQml>
#include <QQmlApplicationEngine>
#include <QSerialPort>
#include "serial.h"

class Backend : public QObject
{
    Q_OBJECT
    QML_ELEMENT
    Q_PROPERTY(int rpm             MEMBER m_rpm             NOTIFY s_rpm)
    Q_PROPERTY(int displayRpm      MEMBER m_displayRpm      NOTIFY s_displayRpm)
    Q_PROPERTY(int kph             MEMBER m_kph             NOTIFY s_kph)
    Q_PROPERTY(int displayKph      MEMBER m_displayKph      NOTIFY s_displayKph)
    Q_PROPERTY(int displayKpl      MEMBER m_displayKpl      NOTIFY s_displayKpl)
    Q_PROPERTY(int liters          MEMBER m_liters          NOTIFY s_liters)
    Q_PROPERTY(int displayLiters   MEMBER m_displayLiters   NOTIFY s_displayLiters)
    Q_PROPERTY(int displayRange    MEMBER m_displayRange    NOTIFY s_displayRange)
    Q_PROPERTY(int currentGear     MEMBER m_currentGear     NOTIFY s_currentGear)
    Q_PROPERTY(bool engineTemp     MEMBER m_engineTemp      NOTIFY s_engineTemp)
    Q_PROPERTY(bool fuelLevel      MEMBER m_fuelLevel       NOTIFY s_fuelLevel)
    Q_PROPERTY(int tireangle       MEMBER m_tireangle       NOTIFY s_tireangle)

public:
    explicit Backend(QObject *parent = nullptr);

    Q_INVOKABLE void updateSpeed();
    Q_INVOKABLE void updateRpm();
    Q_INVOKABLE void updateFuel();
    Q_INVOKABLE void updateMisc();
    Q_INVOKABLE void updateTireAngle(int angle);

    Q_INVOKABLE void writeSerialData(const QString &data);
    Q_INVOKABLE void sendLeft();
    Q_INVOKABLE void sendRight();
    Q_INVOKABLE void sendCenter();

public slots:
    void demoSlot();
    void handleSerialData(const QByteArray &data);

signals:
    void s_rpm();
    void s_displayRpm();
    void s_kph();
    void s_displayKph();
    void s_displayKpl();
    void s_liters();
    void s_displayLiters();
    void s_displayRange();
    void s_currentGear();
    void s_engineTemp();
    void s_fuelLevel();
    void s_tireangle();

private:
    int m_rpm = 0;
    int m_displayRpm = 0;
    int m_kph = 0;
    int m_displayKph = 0;
    int m_displayKpl = 0;
    int m_liters = 0;
    int m_displayLiters = 0;
    int m_displayRange = 0;
    int m_currentGear = 1;
    bool m_engineTemp = false;
    bool m_fuelLevel = false;
    int m_tireangle = 0;

    Serial *m_serial; // Serial communication object
};

#endif // BACKEND_H
