#pragma once
#include <iostream>
#include <string>

using namespace std;
/**
  базовый класс от которго наследуются
  числа и операции
  */
class Base
{
public:
    virtual double calculate() = 0;
    virtual void show() = 0;
};
