#include "displaymas.h"

DisplayMas::DisplayMas()
{
    mas = NULL;
    n = 0;
}
 void DisplayMas::display()
 {
     for (int i = 0; i < n; i++)
     {
         cout << mas[i] << " ";
     }
 }
DisplayMas::~DisplayMas()
 {
     delete mas;
 }
