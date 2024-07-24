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

signals:
    void packetReceived(uint8_t* data, uint8_t length);

private slots:
    void dataReady();

private:
    QSerialPort *m_serialPort;
};

uint16_t crc16(const uint8_t *data, size_t length);

#endif // SERIAL_H
