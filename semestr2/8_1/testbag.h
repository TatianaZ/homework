#pragma once
#include <QtCore/QObject>
#include <QtTest/QtTest>

#include "bag.h"

class TestBag : public QObject
{
    Q_OBJECT
public:
    explicit TestBag(QObject *parent = 0):QObject(parent){}

private slots:
    void init()
    {
        bag = new Bag<int>();
    }
    void cleanup()
    {
        delete bag;
    }
    void testAddToBag()
    {
        bag->addToBag(2);
        bag->addToBag(1);
        bag->addToBag(3);
        QVERIFY(bag->ownershipBag(3));
        QVERIFY(bag->ownershipBag(2));
        QVERIFY(bag->ownershipBag(1));
    }
    void testEmptyBag()
    {
        QVERIFY(bag->emptyBag());
    }

private:
    Bag<int> *bag;
};

