#include "doublylinkedlist.h"

DoublyLinkedList::DoublyLinkedList()
{
    value = 0;
    next = NULL;
    prev = NULL;
}
DoublyLinkedList::DoublyLinkedList(int newValue)
{
    value = newValue;
    next = NULL;
    prev = NULL;
}
void DoublyLinkedList::add(int newValue)
{
    if (next == NULL)
    {
        this->next = new DoublyLinkedList(newValue);
        this->next->prev = this;
    }
    else
    {
        this->next->add(newValue);
    }
}
bool DoublyLinkedList::search(int valueSearch)
{
    DoublyLinkedList *temp;
    temp = this;
    while (temp != NULL)
    {
        if (temp->value == valueSearch)
        {
            return 1;
        }
        temp = temp->next;
    }
    return 0;
}

void DoublyLinkedList::showAll()
{
    DoublyLinkedList *temp;
    temp = this;
    if (temp->next == NULL)
    {
        cout << " Empty \n";
    }
    while (temp->next != NULL)
    {
        temp = temp->next;
        cout << temp->value << " ";

    }
    cout << "\n -------- \n";
    while (temp->prev != NULL)
    {
        cout << temp->value << " ";
        temp = temp->prev;
    }
    cout << "\n";
}
void DoublyLinkedList::deleteFromList(int valueDelete)
{
    if (!search(valueDelete))
    {
        return;
    }
    DoublyLinkedList *temp1, *temp2;

    temp1 = this;
    if (temp1->value == valueDelete) // head
    {
        temp2 = temp1;
        temp1 = temp1->next;
        temp1->prev = NULL;
        delete temp2;
        return;
    }
    temp1 = temp1->next;
    while (temp1->value != valueDelete)
    {
        temp1 = temp1->next;
    }
    if (temp1->next == NULL) // tail
    {
        temp2 = temp1;
        temp1 = temp1->prev;
        temp1->next = NULL;
        delete temp2;
    }
    else
    {
        temp2 = temp1;
        temp1 = temp1->prev;
        temp1->next = temp2->next;
        temp2->next->prev = temp1;
        delete temp2;
    }
}
void DoublyLinkedList::deleteAll()
{
    DoublyLinkedList *temp, *temp2;

    temp = this->next;
    while (temp != NULL)
    {
        temp2 = temp;
        temp = temp->next;
        delete temp2;
    }
    this->next = NULL;
}
