#pragma once
#include "pair.h"
#include <math.h>
/**
  @brief сласс комплексного числа, наследуемый
  от пары чиселе
*/
class ComplexNumber : public Pair
{
public:
    /**
      @brief конструктор
    */
    ComplexNumber();
    /**
      @brief конструктор, инициализирующий число
      @param newNumber1 значение a,
      newNumber2 значение при ib
    */
    ComplexNumber(double newNumber1, double newNumber2);
    /**
      @brief функция умножения двух комплексных чисел
      @param newNumber комплексное число, на которое умножается
    */
    void multipleComplexNumber(ComplexNumber *newNumber);
    /**
      @brief функция вычисления модуля комплексного числа
      @return возвращает модуль комплексного числа
    */
    double absComplexNumber();
};
