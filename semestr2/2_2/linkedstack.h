#ifndef LINKEDSTACK_H
#define LINKEDSTACK_H
#include "masstack.h"

class LinkedStack : public BaseStack
{
public:
    LinkedStack();
    LinkedStack(int newData);
    void push(int newData);
    int pop();
    void showAll();
    bool checkSize();
private:
    int value;
    LinkedStack *next;
};

#endif // LINKEDSTACK_H
