#pragma once
#include <QtCore/QObject>
#include <QtTest/QtTest>
#include "displayinfile.h"

class TestSorting : public QObject
{
    Q_OBJECT
public:
    explicit TestSorting(QObject *parent = 0):QObject(parent){}
private slots:
    void init()
    {
        display = new DisplayMas();
    }
    void cleanup()
    {
        delete display;
    }
    void testSorting()
    {
        int array[3][3] = { {7, 6, 5},
                            {8, 1, 4},
                            {9, 2, 3} };
        display->createMas(&array[0][0], 3);
        QVERIFY(display->mas[0] == 1);
        QVERIFY(display->mas[1] == 2);
        QVERIFY(display->mas[2] == 3);
        QVERIFY(display->mas[3] == 4);
        QVERIFY(display->mas[4] == 5);
        QVERIFY(display->mas[5] == 6);
        QVERIFY(display->mas[6] == 7);
        QVERIFY(display->mas[7] == 8);
        QVERIFY(display->mas[8] == 9);
    }

private:
    Display *display;
};
