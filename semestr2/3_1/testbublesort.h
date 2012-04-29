#pragma once
#include <QtCore/QObject>
#include <QtTest/QtTest>
#include "shellsort.h"

class TestBubleSort : public QObject
{
    Q_OBJECT
public:
    explicit TestBubleSort(QObject *parent = 0):QObject(parent){}
private slots:
    void init()
    {
        sorting = new BubleSort();
    }
    void testSorting()
    {
        int array[] ={10, 4, 2, 1};
        sorting->sort(array, 4);
        QVERIFY(array[0] == 1);
        QVERIFY(array[1] == 2);
        QVERIFY(array[2] == 4);
        QVERIFY(array[3] == 10);
    }
    void cleanup()
    {
        delete sorting;
    }
private:
    BaseSort *sorting;
};
