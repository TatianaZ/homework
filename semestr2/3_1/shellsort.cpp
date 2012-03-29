#include "shellsort.h"

ShellSort::ShellSort()
{
}
void ShellSort::sort(int *mas, int size)
{
   long d = size - 1;
   while (d > 0)
   {
       for(int j = 1; j < size; j += D)
       {
           for(int i = 0; i < size - j; i++)
           {
               if (*(mas + i) > *(mas + i + 1))
               {
                   *(mas + i) = *(mas + i) + *(mas +i+1);
                   *(mas +i + 1) = *(mas + i) - *(mas + i + 1);
                   *(mas + i) = *(mas + i) - *(mas + i + 1);
               }
           }
       }
       d = (d - 1)*0.5;
   }
}
