#pragma once
/**
  класс, содержищий функции нахождения количества нулевых
  элементов для двумерного и одномерного массивов
  */
class findNull{
public:
    /**
      @brief функция для поиска количества нулевых элементов в
      одномерном массиве
      @param *mas указатель на массив
      n размерность одномерного масива
      @return количество нулевых элементов
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
      @brief функция для поиска количества нулевых элементов в
      двумерном массиве
      @param *mas указатель на массив
      n, m размерность одномерного масива
      @return количество нулевых элементов

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
