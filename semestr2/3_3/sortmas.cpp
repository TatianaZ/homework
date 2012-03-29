#include "sortmas.h"

SortMas::SortMas()
{
}

void SortMas::sort(int *mas, int rows, int cols)
{
    int temp;
    for (int col = 0; col < cols; col++)
    {
        for (int j = 0; j < rows; j++)
        {
            for (int k = 0; k < rows - j - 1; k++)
            {
                if (*(mas + col + k * cols) > *(mas + col + (k + 1) * cols))
                {
                    temp = *(mas + col + (k + 1) * cols);
                    *(mas + col + (k + 1) * cols) = *(mas + col + k * cols);
                    *(mas + col + k * cols) = temp;
                }
            }

        }
    }
}
