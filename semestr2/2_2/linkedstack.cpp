#include "linkedstack.h"

LinkedStack::LinkedStack():next(NULL)
{
    value = 0;
}
LinkedStack::LinkedStack(int newData):next(NULL)
{
    value = newData;
}

void LinkedStack::push(int newData)
{
    if (next != NULL)
    {
        next->push(newData);
    }
    else
    {
        next = new LinkedStack(newData);
    }
}

int LinkedStack::pop()
{
    if (next == NULL)
    {
        cout << " Empty ";
        return INT_MIN;
    }
    int temp;
    LinkedStack *tempLink;
    tempLink = this;

    while (tempLink->next->next != NULL)
    {
        tempLink = tempLink->next;
    }

    temp = tempLink->next->value;
    delete tempLink->next;

    tempLink->next = NULL;
    return temp;
}

void LinkedStack::showAll()
{
    LinkedStack *temp;
    temp = next;

    if (temp == NULL)
    {
        cout << "Empty\n";
        return;
    }
    while (temp != NULL)
    {
        cout << temp->value << " ";
        temp = temp->next;
    }
    cout << "\n";
}
bool LinkedStack::checkSize()
{
    if (next == NULL)
    {
        return 0;
    }
    return 1;
}

