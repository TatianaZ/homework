#pragma once
#include "basestack.h"
#include <limits.h>
/**
  @brief ����, ������������� ��������
  @param size ������ �����
  stack ����
  */
class ArrayStack : public BaseStack
{
public:
    /**
      @brief �����������
      */
    ArrayStack();
    /**
      @brief �������, ����������� � ���� �������
      @param newData �������, ������� ����������� � ����
      */
    void push(int newData);
    /**
      @brief �������, ������� ������� �� ����� �������
      @return �������, ��������� ����������� � ����
      */
    int pop();
    /**
      @brief �������, ��������� �� ����� ���������� �����
      */
    void showAll();
    /**
      @brief ������� ����������� ������ �� ����
      @return 1 �� ������
      0 ������
      */
    bool checkSize();
private:
    int stack[100];
    int size;
};
