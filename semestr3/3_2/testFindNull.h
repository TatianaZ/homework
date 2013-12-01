#pragma once
#include <QtCore/QObject>
#include <QtTest/QtTest>
#include "findnull.h"

class testFindNull : public QObject
{
    Q_OBJECT
public:
    explicit testFindNull(QObject *parent = 0):QObject(parent){}
private slots:
    void init()
    {
        p1 = new int[3];
        p2 = new int*[3];
        for (int i = 0; i < 3; i ++)
        {
            p2[i] = new int [3];
        }
        for (int k = 0; k < 3; k ++)
        {
            for (int j = 0; j < 3; j ++)
            {
                p2[k][j] = 0;
            }
            p1[k] = 0;
        }
    }
    void cleanup()
    {
        for (int i = 0; i < 3; i ++)
        {
            delete [] p2[i];
        }
        delete [] p2;
        delete [] p1;
    }
    void testFindNullMas()
    {
        findNull fN;
        QVERIFY(fN.findNullMas(p1, 3) == 3);
        QVERIFY(fN.findNullMas(p2, 3, 3) == 9);
    }

private:
    int **p2, *p1;
};
