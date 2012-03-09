#ifndef ACTIONS_H
#define ACTIONS_H
#include<QObject>
#include<QString>
#include "actions.h"

class Actions:public QObject
{
    Q_OBJECT
public:
    Actions();
    void rezultV();
public slots:
    void getData1(int data);
    void getData2(int data);
    void getOp(int data);
signals:
    void newValue(QString r);
private:
    int data1;
    int data2;
    int op;
    int rezult;
};

#endif // DEISTVIA_H
