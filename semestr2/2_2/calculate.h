#pragma once
#include "linkedstack.h"
/**
  @brief �����, ����������� �����������
  */
enum Actions {nothing, actionPlus, actionMinus, actionMultiple, actionDivision};
class Calculate
{
public:
    /**
      @brief �����������
      */
    Calculate();
    /**
      @brief �������, ����������� �������
      @param *stack ��������� �� ����
      *str ������, ������� ���� ����������
      size ������ ������
      @return ���������
      */
    int queueCalculate(BaseStack *stack, char *str, int size);
};
