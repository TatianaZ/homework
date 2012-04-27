#pragma once
#include <iostream>

using namespace std;
/**
  @brief класс состоящий из пары чисел
*/
class Pair
{
public:
    Pair();
    /**
      @brief
      конструктор, который принимает 2 числа, чтобы проинициализировать
      элементы класса
    */
    Pair(double newNumber1, double newNumber2);
    /**
      @brief умножение пары чисел на число
      @param num число на которое числа умножаются
    */
    void multipleNumbers(double num);
    /**
      @brief функция сложения двух чисел
      @param newPair другая пара чисел, с которой складывается
      исходное
    */
    void plusNumbers(Pair *newPair);
    /**
      @brief функция вывода на экран пары чисел
    */
    void showPair();
    /**
      @brief функция инициализации пары чисел
      @param newNumber1 инициализирует первое число
      newNumber2 инициализирует второе число
    */
    void setNumbers(double newNumber1, double newNumber2);

    double number1;
    double number2;
};
