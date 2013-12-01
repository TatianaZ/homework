#include "bublesort.h"

BubleSort::BubleSort()
{
}
void BubleSort::sort(int *mas, int n)
{
    int temp;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i; j++)
        {
            if (*(mas + j) > *(mas + j + 1))
            {
                temp = *(mas + j);
                *(mas + j) = *(mas + j + 1);
                *(mas + j + 1) = temp;
            }
        }
    }

}
