#pragma once
#include <iostream>

using namespace std;
/**
  класс, реализующий сортировку по первым элементам
  столбцов
  */
class SortMas
{
public:
    /**
      @brief конструктор
      */
    SortMas();
    /**
      @brief функция, реализующая сортировку по первым элементам
      столбцов
      @param *mas указатель на сортируемый массив
      rows строки матрицы
      cols стобцы матрицы
      */
    void sort(int *mas, int rows, int cols);
};
