#pragma once
#include "base.h"
/**
  �����, ����������� �����
  */
class Digit : public Base
{
public:
    /**
      �����������
      @param str ������� � ����������
      */
    Digit(string& str);
    /**
      @brief ������� ����������
      @return  �����
      */
    double calculate();
    /**
      @brief ������� ������ �� ����� �����
      */
    void show();
private:
    int value;
};
