#ifndef SHELLSORT_H
#define SHELLSORT_H
#include "bublesort.h"

class ShellSort : public BaseSort
{
public:
    ShellSort();
    void sort(int *mas, int size);
};

#endif // SHELLSORT_H
