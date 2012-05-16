#pragma once
//#include <iostream>
#include <QtCore/QObject>
#include <QtTest/QtTest>
#include "set.h"

class SetTest : public QObject
{
    Q_OBJECT
public:
    explicit SetTest(QObject *parent = 0):QObject(parent){}
    
private slots:
    void init()
    {
        set = new Set<int>();
    }
    void cleanup()
    {
        delete set;
    }
    void testAddElement()
    {
        set->add(1);
        set->add(2);
        set->add(3);
        QVERIFY(set->ownershipSet(1) == 1);
        QVERIFY(set->ownershipSet(2) == 1);
        QVERIFY(set->ownershipSet(3) == 1);
    }
    void testDeleteFirstElement()
    {
        set->add(1);
        set->add(2);
        set->add(3);
        set->add(4);
        set->deleteElement(1);
        QVERIFY(!set->ownershipSet(1));
        QVERIFY(set->ownershipSet(2));
        QVERIFY(set->ownershipSet(3));
        QVERIFY(set->ownershipSet(4));
    }
    void testDeleteMiddleElement()
    {
        set->add(1);
        set->add(2);
        set->add(3);
        set->add(4);
        set->deleteElement(3);
        set->deleteElement(4);
        QVERIFY(set->ownershipSet(1));
        QVERIFY(set->ownershipSet(2));
        QVERIFY(!set->ownershipSet(3));
        QVERIFY(!set->ownershipSet(4));
    }
    void testDeleteLastElement()
    {
        set->add(1);
        set->add(2);
        set->add(3);
        set->add(4);
        set->deleteElement(4);
        QVERIFY(set->ownershipSet(1));
        QVERIFY(set->ownershipSet(2));
        QVERIFY(set->ownershipSet(3));
        QVERIFY(!set->ownershipSet(4));
    }
    void testDeleteAllElements()
    {
        set->add(1);
        set->add(2);
        set->add(3);
        set->add(4);
        set->deleteElement(1);
        set->deleteElement(2);
        set->deleteElement(3);
        set->deleteElement(4);
        QVERIFY(set->EmptySet());
    }
    void testUniteSet()
    {
        Set<int> *set2 = new Set<int>;
        set2->add(1);
        set2->add(2);
        set2->add(3);

        set->add(4);
        set->add(5);
        set->add(6);

        set->uniteSet(set2);
        QVERIFY(set->ownershipSet(1));
        QVERIFY(set->ownershipSet(2));
        QVERIFY(set->ownershipSet(3));
        QVERIFY(set->ownershipSet(4));
        QVERIFY(set->ownershipSet(5));
        QVERIFY(set->ownershipSet(6));
    }
    void testCrossingSet()
    {
        Set<int> *set2 = new Set<int>;
        set2->add(1);
        set2->add(2);
        set2->add(3);
        set2->add(7);

        set->add(1);
        set->add(2);
        set->add(4);
        set->add(5);
        set->add(6);

        set->crossingSet(set2);
        QVERIFY(set->ownershipSet(1));
        QVERIFY(set->ownershipSet(2));
        QVERIFY(!set->ownershipSet(7));
        QVERIFY(!set->ownershipSet(3));
        QVERIFY(!set->ownershipSet(4));
        QVERIFY(!set->ownershipSet(5));
        QVERIFY(!set->ownershipSet(6));
    }

private:
    Set<int> *set;
};
