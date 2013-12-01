#pragma once
#include <iostream>

using namespace std;
/**
  @brief ����� ��������� �� ���� �����
*/
class Pair
{
public:
    Pair();
    /**
      @brief
      �����������, ������� ��������� 2 �����, ����� �������������������
      �������� ������
    */
    Pair(double newNumber1, double newNumber2);
    /**
      @brief ��������� ���� ����� �� �����
      @param num ����� �� ������� ����� ����������
    */
    void multipleNumbers(double num);
    /**
      @brief ������� �������� ���� �����
      @param newPair ������ ���� �����, � ������� ������������
      ��������
    */
    void plusNumbers(Pair *newPair);
    /**
      @brief ������� ������ �� ����� ���� �����
    */
    void showPair();
    /**
      @brief ������� ������������� ���� �����
      @param newNumber1 �������������� ������ �����
      newNumber2 �������������� ������ �����
    */
    void setNumbers(double newNumber1, double newNumber2);

    double number1;
    double number2;
};
