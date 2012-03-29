#ifndef DISPLAY_H
#define DISPLAY_H
#include <iostream>
#include "display.h"

using namespace std;
class Display
{
public:
    Display();
    ~Display();

    void createMas(int *masOriginal, int size);
    virtual void display() = 0;

public:
    int *mas;
    int n;
};

#endif // DISPLAY_H
