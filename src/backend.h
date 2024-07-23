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
    Q_PROPERTY(QString rpmText MEMBER m_rpmText NOTIFY s_rpmText)
    Q_PROPERTY(double rpmDial MEMBER m_rpmDial NOTIFY s_rpmDial)
    Q_PROPERTY(QString speedText MEMBER m_speedText NOTIFY s_speedText)
    Q_PROPERTY(double speedDial MEMBER m_speedDial NOTIFY s_speedDial)
    Q_PROPERTY(QString consumptionText MEMBER m_consumptionText NOTIFY s_consumptionText)
    Q_PROPERTY(QString voltageText MEMBER m_voltageText NOTIFY s_voltageText)
    Q_PROPERTY(double voltageDial MEMBER m_voltageDial NOTIFY s_voltageDial)
    Q_PROPERTY(QString rangeText MEMBER m_rangeText NOTIFY s_rangeText)
    Q_PROPERTY(bool motorTemp MEMBER m_motorTemp NOTIFY s_motorTemp)
    Q_PROPERTY(bool escTemp MEMBER m_escTemp NOTIFY s_escTemp)
    Q_PROPERTY(int tireAngle MEMBER m_tireAngle NOTIFY s_tireAngle)

public:
    explicit Backend(QObject *parent = nullptr);

    Q_INVOKABLE void writeSerialData(const QString &data);
    Q_INVOKABLE void sendLeft();
    Q_INVOKABLE void sendRight();
    Q_INVOKABLE void sendCenter();

public slots:
    void demoSlot();
    void processPacket(const QByteArray &packet);

signals:
    void s_rpmText();
    void s_rpmDial();
    void s_speedText();
    void s_speedDial();
    void s_kphText();
    void s_kphDial();
    void s_consumptionText();
    void s_voltageText();
    void s_voltageDial();
    void s_rangeText();
    void s_motorTemp();
    void s_escTemp();
    void s_tireAngle();

private:
    QString m_rpmText = "0000";
    double m_rpmDial = 000;
    QString m_speedText = "00";
    double m_speedDial = 000;
    QString m_consumptionText = "00.0";
    QString m_voltageText = "00";
    double m_voltageDial = 000;
    QString m_rangeText = "00.0";
    bool m_motorTemp = 000;
    bool m_escTemp = 000;
    int m_tireAngle = 000;

    Serial *m_serial; // Serial communication object
};

#endif // BACKEND_H
