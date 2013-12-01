#pragma once
#include <QtCore/QObject>
#include <QtTest/QtTest>

#include "bubble.h"
class TestBubble : public QObject
{
    Q_OBJECT
public:
    explicit TestBubble(QObject *parent = 0):QObject(parent){}

private slots:
    void init()
    {
        bubble = new Bubble<int>();
    }
    void cleanup()
    {
        delete bubble;
    }
    void testBubbleSort()
    {
        List<int> *newList;
        Compare<int> newCompare;
        newList = new List<int>();
        newList->add(6);
        newList->add(2);
        newList->add(4);
        newList->add(5);

        bubble->sorting(newList, &newCompare);
        QVERIFY(newList->getValue() == 6);
        QVERIFY(newList->getNext()->getValue() == 5);
        QVERIFY(newList->getNext()->getNext()->getValue() == 4);
        QVERIFY(newList->getNext()->getNext()->getNext()->getValue() == 2);
    }

private:
    Bubble<int> *bubble;
};
