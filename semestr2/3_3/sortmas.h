#pragma once
#include <iostream>

using namespace std;
/**
  �����, ����������� ���������� �� ������ ���������
  ��������
  */
class SortMas
{
public:
    /**
      @brief �����������
      */
    SortMas();
    /**
      @brief �������, ����������� ���������� �� ������ ���������
      ��������
      @param *mas ��������� �� ����������� ������
      rows ������ �������
      cols ������ �������
      */
    void sort(int *mas, int rows, int cols);
};
