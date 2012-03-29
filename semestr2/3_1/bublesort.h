#ifndef BUBLESORT_H
#define BUBLESORT_H
#include "basesort.h"
#include <iostream>

using namespace std;

class BubleSort : public BaseSort
{
public:
    BubleSort();
    void sort(int *mas, int size);
};

#endif // BUBLESORT_H
