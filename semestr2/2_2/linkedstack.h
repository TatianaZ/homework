#pragma once
#include "arraystack.h"
/**
  @brief ����, ������������� �������
  @param value �������
  *next ��������� �� ���������
  */
class LinkedStack : public BaseStack
{
public:
    /**
      @brief �����������
      */
    LinkedStack();
    /**
      @brief �����������
      @param newData
      */
    LinkedStack(int newData);
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
    int value;
    LinkedStack *next;
};

