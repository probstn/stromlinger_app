#ifndef SERIAL_H
#define SERIAL_H

#include <QSerialPort>
#include <QSerialPortInfo>

class Serial : public QObject
{
    Q_OBJECT

public:
    explicit Serial(QObject *parent = nullptr);
    ~Serial();

    bool openSerialPort();
    void closeSerialPort();
    void writeData(const QByteArray &data);
    QByteArray readData();

signals:
    void dataReceived(const QByteArray &data);

private slots:
    void handleReadyRead();

private:
    QSerialPort *m_serialPort;
};

#endif // SERIAL_H
