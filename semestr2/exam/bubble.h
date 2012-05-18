#pragma once
#include "list.h"
#include "compare.h"
template <class T>
/**
  @brief ����� ����������� ���������� ���������
  ������ �������� ������������ ����
  */
class Bubble
{
public:
    Bubble(){}
    /**
      @brief ������� ���������� ��������� ��������
      @param *objects ������ ��������
      *compare ������ ����������� �������� ��������
      */
    void sorting(List<T>* objects, Compare<T>* compare)
    {
        List<T> *temp1 = objects;
        int n = 0;
        while (temp1 != NULL)
        {
            temp1 = temp1->getNext();
            n++;
        }
        List<T> *temp = objects;
        List<T> *temp2 = objects;
        for (int i = 0; i < n - 2; i++)
        {
            temp = temp2;
            for (int j = 0; j < n - i - 2; j++)
            {
                if (compare->compareElements((temp->getValue()), (temp->getNext()->getValue())))
                {
                    temp->switchElements(temp, temp->getNext());
                }
                temp = temp->getNext();
            }
        }
    }
};

