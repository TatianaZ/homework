#pragma once
#include <iostream>
#include <string>

using namespace std;
/**
  ������� ����� �� ������� �����������
  ����� � ��������
  */
class Base
{
public:
    virtual double calculate() = 0;
    virtual void show() = 0;
};
