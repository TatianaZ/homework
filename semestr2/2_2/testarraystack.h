#pragma once
#include <QtCore/QObject>
#include <QtTest/QtTest>
#include "calculate.h"

class TestArrayStack : public QObject
{
    Q_OBJECT
public:
    explicit TestArrayStack(QObject *parent = 0):QObject(parent){}
    
private slots:
    void init()
    {
        arrayStack = new ArrayStack();
    }
    void cleanup()
    {
        delete arrayStack;
    }
    void testPop()
    {
       arrayStack->push(3);
       QVERIFY(arrayStack->pop() == 3);
    }
    void testPopFromEmptyStack()
    {
        QVERIFY(arrayStack->pop() == INT_MIN);
    }
    void testEmptyStack()
    {
        QVERIFY(arrayStack->checkSize() == 0);
    }
    void testPush()
    {
        arrayStack->push(7);
        QVERIFY(arrayStack->checkSize() == 1);
    }
private:
    BaseStack *arrayStack;

};
