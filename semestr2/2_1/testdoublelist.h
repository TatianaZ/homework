#pragma once
#include <QtCore/QObject>
#include <QtTest/QtTest>

#include "doublylinkedlist.h"

class TestDoubleList : public QObject
{
    Q_OBJECT
public:
    explicit TestDoubleList(QObject *parent = 0):QObject(parent){}

private slots:
    void init()
    {
        listDoublyinked = new DoublyLinkedList();
    }
    void cleanup()
    {
        delete listDoublyinked;
    }
    void testAddToDoublyLinkedList()
    {
        listDoublyinked->add(3);
        QVERIFY(listDoublyinked->getValue() == 3);
    }
    void testDeleteFromDoublyLinkedList()
    {
        listDoublyinked->add(1);
        listDoublyinked->add(2);
        listDoublyinked->add(3);
        listDoublyinked->add(4);
        listDoublyinked->add(5);
        listDoublyinked->add(6);
        listDoublyinked->deleteFromList(6);
        listDoublyinked->deleteFromList(3);
        listDoublyinked->deleteFromList(1);
        QVERIFY(listDoublyinked->search(2));
        QVERIFY(listDoublyinked->search(4));
        QVERIFY(listDoublyinked->search(5));
    }
private:

    Base *listDoublyinked;
};
