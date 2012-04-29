#pragma once
#include "sortmas.h"
#include <QtCore/QObject>
#include <QtTest/QtTest>

class TestSorting : public QObject
{
    Q_OBJECT
public:
    explicit TestSorting(QObject *parent = 0):QObject(parent){}
private slots:
    void init()
    {
        sorting = new SortMas();
    }
    void cleanup()
    {
        delete sorting;
    }
    void testSorting()
    {
        int mas[3][3] = {
            {40, 41, 42},
            {30, 31, 32},
            {20, 21, 22},
        };
        sorting->sort(&mas[0][0], 3, 3);
        QVERIFY(mas[0][0] == 20);
        QVERIFY(mas[1][0] == 30);
        QVERIFY(mas[2][0] == 40);
        QVERIFY(mas[0][1] == 21);
        QVERIFY(mas[1][1] == 31);
        QVERIFY(mas[2][1] == 41);
        QVERIFY(mas[0][2] == 22);
        QVERIFY(mas[1][2] == 32);
        QVERIFY(mas[2][2] == 42);
    }

private:
    SortMas *sorting;
};
