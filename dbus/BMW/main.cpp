#include <QCoreApplication>
#include <QDBusConnection>
#include <QtDBus>
#include "set.h"
QString set::setBMW(QString string){
    string += " + BMW";
    qDebug() << "string = " << string;
    return string;

}

bool set::setBMW1(){
    QString string1 = "BMW the best";
    qDebug() << string1;
    return 1;
}



int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    set s;

    QDBusConnection::sessionBus().registerObject("/", &s, QDBusConnection::ExportAllSlots);
    if (QDBusConnection::sessionBus().registerService("org.qwerty")){
        qDebug() << "Service register!";
    }

//    QDBusConnection::sessionBus().registerObject("/", &s, QDBusConnection::ExportAllSlots);
//    if (QDBusConnection::sessionBus().registerService("org.qwerty1")){
//        qDebug() << "Service \"org.qwerty1\" register!";
//    }



    return a.exec();
}
