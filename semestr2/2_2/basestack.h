#pragma once
#include <iostream>
using namespace std;
/**
  @brief базовый класс
  */
class BaseStack
{
public:
    /**
      @brief функци€, добавл€юща€ в стек элемент
      @param newData элемент, который добавл€етс€ в стек
      */
    virtual void push(int newData) = 0;
    /**
      @brief функци€, котора€ достает из стека элемент
      @return элемент, последний добавленный в стек
      */
    virtual int pop() = 0;
    /**
      @brief функци€, вывод€ща€ на экран содержимое стека
      */
    virtual void showAll() = 0;
    /**
      @brief функци€ провер€юща€ пустой ли стек
      @return 1 не пустой
      0 пустой
      */
    virtual bool checkSize() = 0;
};
