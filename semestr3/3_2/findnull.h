#pragma once
/**
  �����, ���������� ������� ���������� ���������� �������
  ��������� ��� ���������� � ����������� ��������
  */
class findNull{
public:
    /**
      @brief ������� ��� ������ ���������� ������� ��������� �
      ���������� �������
      @param *mas ��������� �� ������
      n ����������� ����������� ������
      @return ���������� ������� ���������
      */
    int findNullMas(int* mas, int n)
    {
        int sum = 0;
        for (int i = 0; i < n; i++)
        {
            if (!*(mas + i))
            {
                sum ++;
            }
        }
        return sum;
    }
    /**
      @brief ������� ��� ������ ���������� ������� ��������� �
      ��������� �������
      @param *mas ��������� �� ������
      n, m ����������� ����������� ������
      @return ���������� ������� ���������

      */
    int findNullMas(int **mas, int n, int m)
    {
        int sum = 0;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                if (!mas[i][j])
                {
                    sum ++;
                }
            }
        }
        return sum;
    }
};
