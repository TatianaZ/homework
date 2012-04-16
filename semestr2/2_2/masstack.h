#ifndef MASSTACK_H
#define MASSTACK_H
#include "basestack.h"
class MasStack : public BaseStack
{
public:
    MasStack();
    void push(int newData);
    int pop();
    void showAll();
    bool checkSize();
private:
    int *stack;
    int size;
};

#endif // MASSTACK_H
