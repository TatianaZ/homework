#pragma once
#include <QtCore/QObject>
#include <QtTest/QtTest>
#include "calculate.h"

class TestCalculate : public QObject
{
    Q_OBJECT
public:
    explicit TestCalculate(QObject *parent = 0):QObject(parent){}

private slots:
    void init()
    {
        calculate = new Calculate();
    }
    void cleanup()
    {
        delete calculate;
    }
    void testCalculateFunctionWithArrayStack()
    {
        char a[] = "1 1 2 + 5 * +"; // 1 + (1 + 2) * 5 = 16
        BaseStack *stack = new ArrayStack();
        QVERIFY(calculate->queueCalculate(stack, a, 14) == 16);
    }
    void testCalculateFunctionWithLinkedStack()
    {
        char a[] = "1 1 2 + 5 * +"; // 1 + (1 + 2) * 5 = 16
        BaseStack *stack = new LinkedStack();
        QVERIFY(calculate->queueCalculate(stack, a, 14) == 16);
    }
private:
    Calculate *calculate;
};
