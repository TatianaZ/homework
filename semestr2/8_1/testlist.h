#pragma once
#include <QtCore/QObject>
#include <QtTest/QtTest>

#include "list.h"

class TestList : public QObject
{
    Q_OBJECT
public:
    explicit TestList(QObject *parent = 0):QObject(parent){}
    
private slots:
    void init()
    {
        listLinked = new List<int>();
    }
    void cleanup()
    {
        delete listLinked;
    }
    void testAddToLinkedList()
    {
        listLinked->add(2);
        QVERIFY(listLinked->getValue() == 2);
    }
    void testDeleteFromLinkedList()
    {
        listLinked->add(1);
        listLinked->add(2);
        listLinked->add(3);
        listLinked->add(4);
        listLinked->add(5);
        listLinked->add(6);
        listLinked->deleteFromList(6);
        listLinked->deleteFromList(3);
        listLinked->deleteFromList(1);
        QVERIFY(listLinked->search(2));
        QVERIFY(listLinked->search(4));
        QVERIFY(listLinked->search(5));
    }
    void testGetNextElement()
    {
        listLinked->add(1);
        listLinked->add(2);
        List<int> *temp;
        temp = listLinked;
        QVERIFY(temp->getValue() == 1);
        QVERIFY(temp->getNext()->getValue() == 2);
    }


private:
    List<int> *listLinked;
};
