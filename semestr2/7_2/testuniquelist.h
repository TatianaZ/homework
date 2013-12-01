#pragma once
#include <QtCore/QObject>
#include <QtTest/QtTest>
#include "uniquelist.h"
class TestUniqueList : public QObject
{
    Q_OBJECT
public:
    explicit TestUniqueList(QObject *parent = 0):QObject(parent){}
private slots:
    void init()
    {
        uniqueList = new UniqueList();
    }
    void cleanup()
    {
        delete uniqueList;
    }
    void testAddToUniqueLinkedList()
    {
        uniqueList->addUnique(2);
        QVERIFY(uniqueList->getValue() == 2);
    }
    void testDeleteFromUniqueLinkedList()
    {
        uniqueList->addUnique(1);
        uniqueList->addUnique(2);
        uniqueList->addUnique(3);
        uniqueList->addUnique(4);
        uniqueList->addUnique(5);
        uniqueList->addUnique(6);
        uniqueList->deleteElement(6);
        uniqueList->deleteElement(3);
        uniqueList->deleteElement(1);
        QVERIFY(uniqueList->search(2));
        QVERIFY(uniqueList->search(4));
        QVERIFY(uniqueList->search(5));
    }
    void testDeleteNoUniqueElement()
    {
        try{
            uniqueList->addUnique(1);
            uniqueList->addUnique(1);
        }
        catch (UniqueList::addNotUniqueElement)
        {
            QVERIFY(1);
        }
    }
    void testDeleteNoExistElement()
    {
        try
        {
            uniqueList->deleteElement(1);
        }
        catch (UniqueList::deleteNoExistElement)
        {
            QVERIFY(1);
        }
    }

private:
    UniqueList *uniqueList;
};

