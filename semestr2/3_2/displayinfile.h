#pragma once
#include "displaymas.h"
#include <stdio.h>
/**
  @brief �����, ����������� ����� ������� �� ������
  � ��������� ������� � ����
  */
class DisplayInFile : public Display
{
public:
    /**
      @brief �����������
      */
    DisplayInFile();
    /**
      @brief ����������
      */
    ~DisplayInFile();
    /**
      @brief ������� ������ ������� � ����
      */
    void display();
};
