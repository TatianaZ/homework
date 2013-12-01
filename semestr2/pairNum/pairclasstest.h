#pragma once
#include <QtCore/QObject>
#include <QtTest/QtTest>
#include "complexnumber.h"



class PairClassTest : public QObject
{
    Q_OBJECT
public:
    explicit PairClassTest(QObject *parent = 0):QObject(parent){}

private slots:
    void init()
    {
        pair1 = new Pair();
    }
    void cleanup()
    {
        delete pair1;
    }
    void testMultipleNumbers()
    {
        pair1->setNumbers(1, 2);
        pair1->multipleNumbers(3);
        QVERIFY(pair1->number1 == 3);
        QVERIFY(pair1->number2 == 6);
    }
    void testPlusNumbers()
    {
        pair1->setNumbers(1, 1);
        pair1->plusNumbers(pair1);
        QVERIFY(pair1->number1 == 2);
        QVERIFY(pair1->number2 == 2);
    }
    void testSetNumbers()
    {
        pair1->setNumbers(1, 2);
        QVERIFY(pair1->number1 == 1);
        QVERIFY(pair1->number2 == 2);
    }

private:
    Pair *pair1;
};
