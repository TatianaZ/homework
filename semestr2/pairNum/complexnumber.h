#pragma once
#include "pair.h"
#include <math.h>
/**
  @brief ����� ������������ �����, �����������
  �� ���� ������
*/
class ComplexNumber : public Pair
{
public:
    /**
      @brief �����������
    */
    ComplexNumber();
    /**
      @brief �����������, ���������������� �����
      @param newNumber1 �������� a,
      newNumber2 �������� ��� ib
    */
    ComplexNumber(double newNumber1, double newNumber2);
    /**
      @brief ������� ��������� ���� ����������� �����
      @param newNumber ����������� �����, �� ������� ����������
    */
    void multipleComplexNumber(ComplexNumber *newNumber);
    /**
      @brief ������� ���������� ������ ������������ �����
      @return ���������� ������ ������������ �����
    */
    double absComplexNumber();
};
