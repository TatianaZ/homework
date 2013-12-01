#pragma once
#include <QtCore/QObject>
#include <QtTest/QtTest>
#include "expression.h"

class TestCalculate : public QObject
{
    Q_OBJECT
public:
    explicit TestCalculate(QObject *parent = 0):QObject(parent){}
private slots:
    void init()
    {
        string str = "(* 2 (+ 27 33))";
        expression = new Expression(str);
    }
    void cleanup()
    {
        delete expression;
    }
    void testExperession()
    {
        QVERIFY(expression->calculate() == 120);
    }

private:
    Base *expression;
};
