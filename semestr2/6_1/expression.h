#pragma once
#include "digit.h"

/**
  @brief класс, описывающий выражение
  @param  *left указаетль на первый аргумент
  *right указатель на второй аргумент
  operation выражение
*/
class Expression : public Base
{
public:
    /**
      конструктор
      @param str входящая строка
      */
    Expression(string& str);
    /**
      @brief функция добавления элемента в дерево разбора
      выражения
      @param str входящая строка
      @return указатель на новый элемент
      */
    Base* add(string& str);
    /**
      @brief функция вычисления выражения
      @return результат
      */
    double calculate();
    /**
      @brief функция вывода выражения на экран
      */
    void show();
    ~Expression()
    {
        delete left;
        delete right;
    }

private:
    Base *left;
    Base *right;
    char operation;
};
