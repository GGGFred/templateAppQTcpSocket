#ifndef MYTCPCLIENT_H
#define MYTCPCLIENT_H

#include <QObject>
#include <QTcpSocket>

class MyTcpClient : public QObject
{
    Q_OBJECT
public:
    explicit MyTcpClient(QObject *parent = nullptr);

signals:

public slots:
    void readyRead();

private:
    QTcpSocket *socket;
};

#endif // MYTCPCLIENT_H
