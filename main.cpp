#include <QCoreApplication>

#include <gtcpclient.h>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    GTcpClient client;

    client.performConnection();

    client.writeSlot("Hi There!");

    return a.exec();
}
