#ifndef BASESTACK_H
#define BASESTACK_H
#include <iostream>

using namespace std;

class BaseStack
{
public:
    virtual void push(int newData) = 0; // толкнуть в стек
    virtual int pop() = 0;              // вытащить
    virtual void showAll() = 0;         // посмотреть содержимое
    virtual bool checkSize() = 0;       // проверить не постой ли стек
};

#endif // BASESTACK_H
