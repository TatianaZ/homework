#pragma once

#include <QtCore/QObject>
#include <QtTest/QtTest>
#include "vector.h"

class TestVector : public QObject
{
    Q_OBJECT
public:
    explicit TestVector(QObject *parent = 0):QObject(parent){}

private slots:
    void init()
    {
        vector = new Vector<int, 2>();
    }
    void cleanup()
    {
        delete vector;
    }
    void testLenght()
    {
        int coordinats[2] = {3, 4};
        vector->setVectorCoordinats(coordinats);
        QVERIFY(vector->lenght() == 5);
    }
    void testZeroVector()
    {
        QVERIFY(vector->ifZeroVector());
        int coordinats[2] = {3, 4};
        vector->setVectorCoordinats(coordinats);
        QVERIFY(!vector->ifZeroVector());
    }
    void testOperatons()
    {
        int coordinats[2] = {4, 0};
        vector->setVectorCoordinats(coordinats);
        int coordinats2[2] = {4, 4};
        Vector<int, 2> *vector2 = new Vector<int, 2>(coordinats2);
        vector->minus(vector2);
        QVERIFY(vector->lenght() == 4);
        vector->plus(vector2);
        QVERIFY(vector->lenght() == 4);
        QVERIFY(vector->multipleVector(vector2) == 16);
    }

private:
    Vector<int, 2> *vector;
};

