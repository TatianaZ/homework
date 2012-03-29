#include <iostream>
#include "sortmas.h"

using namespace std;
int  main()
{
    int mas[6][5] = {
        {40, 41, 42, 43, 44},
        {30, 31, 32, 33, 34},
        {20, 21, 22, 23, 24},
        {10, 11, 12, 13, 14},
        {0, 1, 2, 3, 4},
        {66, 77, 22, 11, 55}
    };

    SortMas *sort = new SortMas();
    sort->sort(&mas[0][0], 6, 5);

    for (int i = 0; i < 6; i++)
    {
        for ( int j = 0; j < 5; j++)
        {
            cout << mas [i][j] << " ";
        }
        cout << "\n";
    }
    return 0;
}
