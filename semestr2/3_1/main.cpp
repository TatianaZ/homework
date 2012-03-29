#include "shellsort.h"

int main()
{
    int mas[] = {5, 2, 6, 8, 9, 0, 11};
    int mas2[] = {5, 2, 6, 8, 9, 0, 11};

    BaseSort *sort1 = new BubleSort();
    BaseSort *sort2 = new ShellSort();

    sort1->sort(mas, 7);
    sort2->sort(mas2, 7);
    for (int i = 0; i < 7; i++)
    {
        cout << mas [i]<<" ";
    }
    for (int i = 0; i < 7; i++)
    {
        cout << mas2 [i]<<" ";
    }
    return 0;
}

