#include "list.h"

List::List(): next(NULL)
{
    value = 0;
}

List::List(T newValue)
{
    value = newValue;
    next = NULL;
}

void List::add(T newValue)
{
    if (next == NULL)
    {
        next = new List (newValue);
    }
    else
    {
        next->add(newValue);
    }
}
bool List::search(T valueSearch)
{
    List *temp;
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
void List::showAll()
{
    List *temp;
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
    cout << "\n";
}
void List::deleteFromList(T valueDelete)
{
    if (!search(valueDelete))
    {
        return;
    }
    List *temp1, *temp2;

    temp1 = this;

    if (temp1->next->value == valueDelete)    // head
    {
        temp2 = temp1->next;
        this->next = this->next->next;
        delete temp2;
        return;
    }
    temp1 = temp1->next;
    while (temp1->next->value != valueDelete)
    {
        temp1 = temp1->next;
    }
    if (temp1->next->next == NULL) // tail
    {
        temp2 = temp1->next;
        temp1->next = NULL;
        delete temp2;
    }
    else
    {
        temp2 = temp1->next;
        temp1->next = temp1->next->next;
        delete temp2;
    }
}
void List::deleteAll()
{
    List *temp, *temp2;
    temp = this->next;

    while (temp != NULL)
    {
        temp2 = temp;
        temp = temp->next;
        delete temp2;
    }
    this->next = NULL;
}
int List::getValue()
{
    return next->value;
}
