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
    Q_PROPERTY(int kwh          MEMBER m_kwh          NOTIFY s_kwh)
    Q_PROPERTY(int displaykwh   MEMBER m_displaykwh   NOTIFY s_displaykwh)
    Q_PROPERTY(int displayRange    MEMBER m_displayRange    NOTIFY s_displayRange)
    Q_PROPERTY(int currentGear     MEMBER m_currentGear     NOTIFY s_currentGear)
    Q_PROPERTY(bool engineTemp     MEMBER m_engineTemp      NOTIFY s_engineTemp)
    Q_PROPERTY(bool voltage      MEMBER m_voltage       NOTIFY s_voltage)
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
    void processPacket(const QByteArray &packet);

signals:
    void s_rpm();
    void s_displayRpm();
    void s_kph();
    void s_displayKph();
    void s_displayKpl();
    void s_kwh();
    void s_displaykwh();
    void s_displayRange();
    void s_currentGear();
    void s_engineTemp();
    void s_voltage();
    void s_tireangle();

private:
    int m_rpm = 0;
    int m_displayRpm = 0;
    int m_kph = 0;
    int m_displayKph = 0;
    int m_displayKpl = 0;
    int m_kwh = 0;
    int m_displaykwh = 0;
    int m_displayRange = 0;
    int m_currentGear = 1;
    bool m_engineTemp = false;
    bool m_voltage = false;
    int m_tireangle = 0;

    Serial *m_serial; // Serial communication object
};

#endif // BACKEND_H
