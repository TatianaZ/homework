#pragma once
#include "basesort.h"
#include <iostream>

using namespace std;
/**
  @brief �����, ���������� ���������� ���������
  */
class BubleSort : public BaseSort
{
public:
    /**
      �����������
      */
    BubleSort();
    /**
      @brief �������, ����������� ����������
      @param *mas ��������� �� ������, � ������� �����
      �������� ����������
      size ������ �������
      */
    void sort(int *mas, int size);
};
