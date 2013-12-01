#pragma once
#include <QtCore/QObject>
#include <QtTest/QtTest>
#include "complexnumber.h"

class ComplexNumbersClassTest : public QObject
{
    Q_OBJECT
public:
    explicit ComplexNumbersClassTest(QObject *parent = 0):QObject(parent){}
    
public slots:
    void init()
    {
        complexNumber = new ComplexNumber();
    }
    void cleanup()
    {
        delete complexNumber;
    }
    void testMultipleComplexNumbers()
    {
        complexNumber->setNumbers(1, 2);
        complexNumber->multipleNumbers(3);
        QVERIFY(complexNumber->number1 == 3);
        QVERIFY(complexNumber->number2 == 6);
    }
    void testPlusComplexNumbers()
    {
        complexNumber->setNumbers(1, 1);
        complexNumber->plusNumbers(complexNumber);
        QVERIFY(complexNumber->number1 == 2);
        QVERIFY(complexNumber->number2 == 2);
    }
    void testSetComplexNumbers()
    {
        complexNumber->setNumbers(1, 2);
        QVERIFY(complexNumber->number1 == 1);
        QVERIFY(complexNumber->number2 == 2);
    }
    void testMultipleComplexNumber()
    {
        complexNumber->setNumbers(1, 2);
        complexNumber->multipleComplexNumber(complexNumber);
        QVERIFY(complexNumber->number1 == -3);
        QVERIFY(complexNumber->number2 == 4);
    }
    void testAbsComplexNumber()
    {
        complexNumber->setNumbers(3, 4);
        QVERIFY(complexNumber->absComplexNumber() == 5);
    }
private:
    ComplexNumber *complexNumber;
    
};
