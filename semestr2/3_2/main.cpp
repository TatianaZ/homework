#include "displayinfile.h"

int main()
{
    int mas1[5][5] = {{0,1,2,3,4},
                      {10,11,12,13,14},
                      {20,21,22,23,24},
                      {30,31,32,33,34},
                      {40,41,42,43,44}
                     };
    Display *mas;
    int p;
    cout << " Для вывода на консоль нажмите 1, для вывода в файл нажмите любую другую";
    cin >> p;
    if (p == 1)
    {
        mas = new DisplayMas();
        mas->createMas(&mas1[0][0], 5);
        mas->display();
    }
    else {
        mas = new DisplayInFile();
        mas->createMas(&mas1[0][0], 5);
        mas->display();
    }
    delete mas;
  /*  mas = new DisplayMas();
    mas->createMas(&mas1[0][0], 5);
    mas->display();
    delete mas;

    Display *mas2;
    mas2 = new DisplayInFile();
    mas2->createMas(&mas1[0][0], 5);
    mas2->display();
    delete mas2;*/
    return 0;
}
