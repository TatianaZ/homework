#pragma once
/**
  класс реализующий интерфейс сортировщика
  */
class BaseSort
{
public:
    /**
      @brief функция, реализующая сортировку
      @param *mas указатель на массив, в котором нужно
      провести сортировку
      size размер массива
      */
    virtual void sort(int *mas, int size) = 0;
};
