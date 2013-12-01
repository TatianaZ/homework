#pragma once
#include <QtCore/QObject>
#include <QtTest/QtTest>
#include "calculate.h"

class TestLinkedStack : public QObject
{
    Q_OBJECT
public:
    explicit TestLinkedStack(QObject *parent = 0):QObject(parent){}

private slots:
    void init()
    {
        linkedStack = new LinkedStack();
    }
    void cleanup()
    {
        delete linkedStack;
    }
    void testPop()
    {
       linkedStack->push(3);
       QVERIFY(linkedStack->pop() == 3);
    }
    void testPopFromEmptyStack()
    {
        QVERIFY(linkedStack->pop() == INT_MIN);
    }
    void testEmptyStack()
    {
        QVERIFY(linkedStack->checkSize() == 0);
    }
    void testPush()
    {
        linkedStack->push(7);
        QVERIFY(linkedStack->checkSize() == 1);
    }
private:
    BaseStack *linkedStack;

};
