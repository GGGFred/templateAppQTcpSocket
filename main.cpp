#include <QCoreApplication>

#include <mytcpclient.h>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    MyTcpClient client;

    return a.exec();
}
