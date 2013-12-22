#pragma once
#include <QtCore/QObject>
#include <QtTest/QtTest>
#include <QObject>
#include "network.h"
class TestNet : public QObject
{
    Q_OBJECT
public:
    explicit TestNet(QObject *parent = 0){}
private slots:
    void init()
    {
        comp[0] = new Computer(3, 1);
        comp[1] = new Computer(3, 0);
        comp[2] = new Computer(3, 0);
        comp[3] = new Computer(3, 0);
        int _net[16] = {
             0, 1, 0, 0,
             1, 0, 1, 0,
             0, 1, 0, 1,
             0, 0, 1, 0
        };
        for (int i = 0; i < 16; i++){
            net[i] = _net[i];
        }
        network = new Network(comp, net, 4);

    }
    void cleanup()
    {
        delete [] comp;
        delete network;
    }
    void testVirusAttack()
    {
       network->virusAttack();
       QVERIFY(network->getStep() == 1);
    }

private:
    Computer* comp[4];
    int net[16];
    Network *network; 
};
