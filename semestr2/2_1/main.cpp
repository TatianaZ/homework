#include "doublylinkedlist.h"
int main()
{
    Base *a = new List();
    Base *b = new DoublyLinkedList();

    a->add(2);
    a->add(3);
    a->add(6);
    a->add(4);
    a->add(8);
    a->add(5);
    a->add(0);
    a->showAll();
    a->deleteFromList(0);
    a->showAll();
    a->deleteFromList(8);
    a->showAll();
    a->deleteFromList(2);
    a->showAll();
    a->deleteAll();
    a->showAll();
    delete a;

    cout << "\n";
    b->add(22);
    b->add(33);
    b->add(55);
    b->add(66);
    b->add(99);
    b->add(44);
    b->showAll();
    b->deleteFromList(44);
    b->showAll();
    b->deleteFromList(55);
    b->showAll();
    b->deleteFromList(22);
    b->showAll();
    b->deleteAll();
    b->showAll();
    delete b;

    return 0;
}
