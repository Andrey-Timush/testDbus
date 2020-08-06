#ifndef SET_H
#define SET_H
#include <QObject>
#include <QString>

class set : public QObject
{
    Q_OBJECT
public:
    set();
public slots:
    Q_SCRIPTABLE QString setBMW(QString string);
    Q_SCRIPTABLE bool setBMW1();


};

#endif // SET_H
