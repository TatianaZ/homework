#pragma once
#include "bublesort.h"
/**
  @brief �����, ���������� ���������� ������� �����
  */
class ShellSort : public BaseSort
{
public:
    /**
      �����������
      */
    ShellSort();
    /**
      @brief �������, ����������� ����������
      @param *mas ��������� �� ������, � ������� �����
      �������� ����������
      size ������ �������
      */
    void sort(int *mas, int size);
};
