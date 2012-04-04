#ifndef DOUBLYLINKEDLIST_H
#define DOUBLYLINKEDLIST_H
#include "list.h"

class DoublyLinkedList : public Base
{
public:
    DoublyLinkedList();
    DoublyLinkedList(int newValue);

    void add(int newValue);
    bool search(int valueSearch);
    void showAll();
    void deleteFromList(int valueDelete);
    void deleteAll();

public:
    DoublyLinkedList *prev;
    DoublyLinkedList *next;
};

#endif // DOUBLYLINKEDLIST_H
