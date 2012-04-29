#pragma once
#include <iostream>
#include "display.h"

using namespace std;
/**
  @brief класс, создающий обход массива из середины
  @param  *mas указатель на новый массив
  n - размер массива
  */

class Display
{
public:
    /**
      @brief конструктор
      */
    Display();
    /**
      @brief деструктор
      */
    ~Display();
    /**
      @brief
      @param *masOriginal указатель на начальный массив
      size размер массива
      */
    void createMas(int *masOriginal, int size);
    /**
      @brief функция вывода нового массива
      */
    virtual void display() = 0;

public:
    int *mas;
    int n;
};
