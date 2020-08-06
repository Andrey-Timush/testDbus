#include <QCoreApplication>
#include <QDBusInterface>
#include <QtDBus>
#include <QDBusConnection>
#include <QDBusReply>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    QDBusInterface iface("org.qwerty", "/", "", QDBusConnection::sessionBus());
    QDBusReply<QString> reply = iface.call("setBMW", "Mercedes");

    QDBusReply<bool> reply2 = iface.call("setBMW1");
    if (reply2.isValid()){
        qDebug() << "valid";
    }

    return a.exec();
}
