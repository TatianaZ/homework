#pragma once
template <class T>
class Compare
{
public:
    /**
      @brief �����������
      */
    Compare()
    {}
    /**
      @brief ������� ����������� �������� �������� ������
      @param *element1, *element2 ��������, ������� ������������
      @return 1 ���� ������ ������� ������ �������
      0 �����
      */
    bool compareElements(T element1, T element2)
    {
        if (element1 < element2)
        {
            return 1;
        }
        return 0;
    }
};
