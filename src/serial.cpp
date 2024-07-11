#include "serial.h"
#include <QtSerialPort>
#include <QSerialPortInfo>
#include <QDebug>

Backend::Backend(QObject *parent)
    : QObject(parent)
{
}
