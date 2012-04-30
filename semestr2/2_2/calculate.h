#pragma once
#include "linkedstack.h"
/**
  @brief класс, реализйющий калькулятор
  */
enum Actions {nothing, actionPlus, actionMinus, actionMultiple, actionDivision};
class Calculate
{
public:
    /**
      @brief конструктор
      */
    Calculate();
    /**
      @brief функция, реализующая подсчет
      @param *stack указатель на стек
      *str строку, которую надо подсчитать
      size длинна строки
      @return результат
      */
    int queueCalculate(BaseStack *stack, char *str, int size);
};
