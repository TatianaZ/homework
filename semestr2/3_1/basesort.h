#ifndef BASESORT_H
#define BASESORT_H

class BaseSort
{
public:
    BaseSort();

    virtual void sort(int *mas, int size) = 0;
};

#endif // BASESORT_H
