#pragma once
#include "digit.h"

/**
  @brief �����, ����������� ���������
  @param  *left ��������� �� ������ ��������
  *right ��������� �� ������ ��������
  operation ���������
*/
class Expression : public Base
{
public:
    /**
      �����������
      @param str �������� ������
      */
    Expression(string& str);
    /**
      @brief ������� ���������� �������� � ������ �������
      ���������
      @param str �������� ������
      @return ��������� �� ����� �������
      */
    Base* add(string& str);
    /**
      @brief ������� ���������� ���������
      @return ���������
      */
    double calculate();
    /**
      @brief ������� ������ ��������� �� �����
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
