#pragma once
#include "base.h"
/**
  класс, описывающий число
  */
class Digit : public Base
{
public:
    /**
      конструктор
      @param str сторока с выражением
      */
    Digit(string& str);
    /**
      @brief функция вычисления
      @return  число
      */
    double calculate();
    /**
      @brief функция вывода на экран числа
      */
    void show();
private:
    int value;
};
