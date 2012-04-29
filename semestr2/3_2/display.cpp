#include "display.h"

Display::Display():mas(NULL)
{
    n = 0;
}
Display::~Display()
{
    delete mas;
}

void Display::createMas(int *masOriginal, int size)
{
    mas = new int[size*size];
    int num1 = size/2;
    int num2 = num1;
    int i = 0;
    int j = num1 + 1;
    int k = num1 + 1;
    int j2 = num1 - 1;
    int k2 = num1 - 1;
    n = size*size;

    while (i < size*size)
    {
        mas[i] = *(masOriginal + num1*size + num2);
        for (; num1 < j; num1++)
        {
            mas[i] = *(masOriginal + num1*size + num2);
            i++;
            if (i == size * size )
            {
                return;
            }
        }
        for (;num2 < k; num2++)
        {
            mas[i] = *(masOriginal + num1*size + num2);
            i++;
            if (i == size * size )
            {
                return ;
            }
        }
        for (; num1 > j2; num1--)
        {
            mas[i] = *(masOriginal + num1*size + num2);
            i++;
            if (i == size * size )
            {
                return ;
            }
        }
        for (; num2 > k2; num2--)
        {
            mas[i] = *(masOriginal + num1*size + num2);
            i++;
            if (i == size * size )
            {
                return ;
            }
        }
        j += 1;
        k += 1;
        j2 -= 1;
        k2 -= 1;
    }
}
