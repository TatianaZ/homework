#pragma once
#include "arraystack.h"
/**
  @brief стек, реализованный списком
  @param value элемент
  *next указатель на следующий
  */
class LinkedStack : public BaseStack
{
public:
    /**
      @brief конструктор
      */
    LinkedStack();
    /**
      @brief конструктор
      @param newData
      */
    LinkedStack(int newData);
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
    int value;
    LinkedStack *next;
};

