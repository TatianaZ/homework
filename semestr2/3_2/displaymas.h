#pragma once
#include "display.h"
/**
  @brief �����, ����������� ����� ������� �� ������
  � ��������� ������� �� �����
  */
class DisplayMas : public Display
{
public:
    /**
      @brief �����������
      */
    DisplayMas();
    /**
      @brief ����������
      */
    ~DisplayMas();
    /**
      @brief ������� ����� ������� �� �����
      */
    void display();
};
