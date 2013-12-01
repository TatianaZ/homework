#pragma once
#include <iostream>
using namespace std;
/**
  @brief ������� �����
  */
class BaseStack
{
public:
    /**
      @brief �������, ����������� � ���� �������
      @param newData �������, ������� ����������� � ����
      */
    virtual void push(int newData) = 0;
    /**
      @brief �������, ������� ������� �� ����� �������
      @return �������, ��������� ����������� � ����
      */
    virtual int pop() = 0;
    /**
      @brief �������, ��������� �� ����� ���������� �����
      */
    virtual void showAll() = 0;
    /**
      @brief ������� ����������� ������ �� ����
      @return 1 �� ������
      0 ������
      */
    virtual bool checkSize() = 0;
};
