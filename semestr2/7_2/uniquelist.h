#pragma once
#include "list.h"

/**
  @brief �����, ����������� ������, � ������� ����� ���� ������
  ��������������� ��������
  */
class UniqueList : public List
{
public:
    /**
      @brief ����������, ������� ��������� � ������, �����
      �������� ������� �������, �������� ��� � ������
      */
    class deleteNoExistElement{};
    /**
      @brief ����������, ������� ��������� � ������, �����
      �������� �������� �������, ������� ��� �� ������
      */
    class addNotUniqueElement{};
    /**
      @brief ���������� �������� � ������
      @param newValue �������, ������� �����������
      @throw addNotUniqueElement
      */
    void addUnique(int newValue);
    /**
      @brief �������� �������� �� ������
      @param deleteValue �������, ������� ����� ������� �� ������
      @throw deleteNoExistElement
      */
    void deleteElement(int deleteValue);
};
