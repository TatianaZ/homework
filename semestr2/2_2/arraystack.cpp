#include "arraystack.h"

ArrayStack::ArrayStack()
{
    size = 0;
}
void ArrayStack::push(int newData)
{
    size++;
    stack[size ] = newData;
}

int ArrayStack::pop()
{
    if (size == 0)
    {
        return INT_MIN;
    }
    size--;
    return stack[size + 1];
}

void ArrayStack::showAll()
{
    if (size == 0)
    {
        cout << " Empty";
        return;
    }
    for (int i = 0; i < size; i++)
    {
        cout << stack[i] << " ";
    }
    cout << "\n";
}
bool ArrayStack::checkSize()
{
    if (size == 0)
    {
        return 0;
    }
    return 1;
}
