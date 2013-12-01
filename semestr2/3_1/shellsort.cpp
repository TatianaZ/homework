#include "shellsort.h"

ShellSort::ShellSort()
{
}
void ShellSort::sort(int *mas, int size)
{
   long distance = size - 1;
   while (distance > 0)
   {
       for(int j = 1; j < size; j += distance)
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
       distance = (distance - 1)*0.5;
   }
}
