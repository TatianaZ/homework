#pragma once
#include "basestack.h"
#include <limits.h>
/**
  @brief стек, реализованный массивом
  @param size размер стека
  stack стек
  */
class ArrayStack : public BaseStack
{
public:
    /**
      @brief конструктор
      */
    ArrayStack();
    /**
      @brief функци€, добавл€юща€ в стек элемент
      @param newData элемент, который добавл€етс€ в стек
      */
    void push(int newData);
    /**
      @brief функци€, котора€ достает из стека элемент
      @return элемент, последний добавленный в стек
      */
    int pop();
    /**
      @brief функци€, вывод€ща€ на экран содержимое стека
      */
    void showAll();
    /**
      @brief функци€ провер€юща€ пустой ли стек
      @return 1 не пустой
      0 пустой
      */
    bool checkSize();
private:
    int stack[100];
    int size;
};
