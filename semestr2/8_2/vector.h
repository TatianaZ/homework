#pragma once
#include <math.h>
/**
  класс вектор в size мерном пространстве
  @param coordinats[size] - массив координат
  */
template <typename T, int size>
class Vector
{
public:
    /**
      конструктор
      */
    Vector()
    {
        for (int i = 0; i < size; i++)
        {
            coordinats[i] = 0;
        }
    }
    Vector(T *coordinatsNew)
    {
        for (int i = 0; i < size; i++)
        {
            coordinats[i] = coordinatsNew[i];
        }
    }
    /**
      конструктор копирования
      */
    Vector(const Vector& vector)
    {
        for (int i = 0; i < size; i++)
        {
            coordinats[i] = vector.coordinats[i];
        }
    }
    /**
      сложение двух векторов
      */
    void plus(Vector *vector)
    {
        for (int i = 0; i < size; i++)
        {
            coordinats[i] += vector->coordinats[i];
        }
    }
    /**
      разность двух векторов
      */
    void minus(Vector *vector)
    {
        for (int i = 0; i < size; i++)
        {
            coordinats[i] -= vector->coordinats[i];
        }
    }
    /**
      скалярное умножение
      */
    T multipleVector(Vector *vector)
    {
        T multiple = 0;
        for (int i = 0; i < size; i++)
        {
            multiple += coordinats[i] * vector->coordinats[i];
        }
        return multiple;
    }
    /**
      проверка на нулевой вектор
      @return 1 если нулевой
      0 если ненулевой
      */
    bool ifZeroVector()
    {
        for (int i = 0; i < size; i++)
        {
            if (coordinats[i] != 0)
            {
                return 0;
            }
        }
        return 1;
    }
    /**
      длинна вектора
      */
    double lenght()
    {
        double tempLenght = 0;
        for (int i = 0; i < size; i++)
        {
            tempLenght += coordinats[i] * coordinats[i];
        }
        return sqrt(tempLenght);
    }
    /**
      функция, дающая вектору координаты
      */
    void setVectorCoordinats(T *coordinatsNew)
    {
        for (int i = 0; i < size; i++)
        {
            coordinats[i] = coordinatsNew[i];
        }
    }

private:
    T coordinats[size];
};
