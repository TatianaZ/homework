#pragma once
#include "bublesort.h"
/**
  @brief класс, реализющий сортировку методом Шелла
  */
class ShellSort : public BaseSort
{
public:
    /**
      конструктор
      */
    ShellSort();
    /**
      @brief функция, реализующая сортировку
      @param *mas указатель на массив, в котором нужно
      провести сортировку
      size размер массива
      */
    void sort(int *mas, int size);
};
