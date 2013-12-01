#pragma once
#include <iostream>
#include "display.h"

using namespace std;
/**
  @brief �����, ��������� ����� ������� �� ��������
  @param  *mas ��������� �� ����� ������
  n - ������ �������
  */

class Display
{
public:
    /**
      @brief �����������
      */
    Display();
    /**
      @brief ����������
      */
    ~Display();
    /**
      @brief
      @param *masOriginal ��������� �� ��������� ������
      size ������ �������
      */
    void createMas(int *masOriginal, int size);
    /**
      @brief ������� ������ ������ �������
      */
    virtual void display() = 0;

public:
    int *mas;
    int n;
};
