#pragma once
#include "basesort.h"
#include <iostream>

using namespace std;
/**
  @brief класс, реализющий сортировку пузырьком
  */
class BubleSort : public BaseSort
{
public:
    /**
      конструктор
      */
    BubleSort();
    /**
      @brief функция, реализующая сортировку
      @param *mas указатель на массив, в котором нужно
      провести сортировку
      size размер массива
      */
    void sort(int *mas, int size);
};
