#pragma once
/**
  ����� ����������� ��������� ������������
  */
class BaseSort
{
public:
    /**
      @brief �������, ����������� ����������
      @param *mas ��������� �� ������, � ������� �����
      �������� ����������
      size ������ �������
      */
    virtual void sort(int *mas, int size) = 0;
};
