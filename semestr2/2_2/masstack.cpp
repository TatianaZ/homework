#include "masstack.h"

MasStack::MasStack()
{
    stack = NULL;
    size = 0;
}
void MasStack::push(int newData)
{
    if (size == 0)
    {
        stack = new int [1];
        size = 1;
        stack[0] = newData;
    }
    else
    {
        int *temp;
        temp = new int [size];
        for (int i = 0; i < size; i++)
        {
            temp[i] = stack[i];
        }
        delete stack;
        size++;
        stack = new int [size];
        for (int i = 0; i < size; i++)
        {
            stack[i] = temp[i];
        }
        stack[size - 1] = newData;
        delete temp;
    }
}

int MasStack::pop()
{
    if (size == 0)
    {
        cout << " Empty ";
        return 0;
    }
    int *temp;
    temp = new int [size - 1];
    for (int i = 0; i < size; i++)
    {
        *(temp + i) = *(stack + i);
    }
    int tempValue;
    tempValue = stack[size - 1];
    delete stack;
    size--;
    stack = new int [size];
    for (int j = 0; j < size; j++)
    {
        stack[j] = temp[j];
    }
    delete temp;
    return tempValue;
}

void MasStack::showAll()
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
bool MasStack::checkSize()
{
    if (size == 0)
    {
        return 0;
    }
    return 1;
}
