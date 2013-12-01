#pragma once
#include <QtCore/QObject>
#include <QtTest/QtTest>
#include "compare.h"

class TestCompare : public QObject
{
    Q_OBJECT
public:
    explicit TestCompare(QObject *parent = 0):QObject(parent){}

private slots:
    void init()
    {
        compare = new Compare<int>();
    }
    void cleanup()
    {
        delete compare;
    }
    void testCompareElements()
    {
        int element1 = 4;
        int element2 = 5;
        QVERIFY(compare->compareElements(element1, element2));
    }

private:
    Compare<int> *compare;
};
