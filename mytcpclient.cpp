#include "mytcpclient.h"

#include <QDebug>

MyTcpClient::MyTcpClient(QObject *parent) : QObject(parent)
{
    socket = new QTcpSocket(this);

    socket->connectToHost("127.0.0.1",1234);

    connect(socket, SIGNAL(readyRead()),this,SLOT(readyRead()));

    socket->write("Hi there!");
}

void MyTcpClient::readyRead()
{
    QByteArray data = socket->readAll();
    qInfo() << "Data from server: " << data;
}
