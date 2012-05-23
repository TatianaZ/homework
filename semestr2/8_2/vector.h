#pragma once
#include <math.h>
/**
  ����� ������ � size ������ ������������
  @param coordinats[size] - ������ ���������
  */
template <typename T, int size>
class Vector
{
public:
    /**
      �����������
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
      ����������� �����������
      */
    Vector(const Vector& vector)
    {
        for (int i = 0; i < size; i++)
        {
            coordinats[i] = vector.coordinats[i];
        }
    }
    /**
      �������� ���� ��������
      */
    void plus(Vector *vector)
    {
        for (int i = 0; i < size; i++)
        {
            coordinats[i] += vector->coordinats[i];
        }
    }
    /**
      �������� ���� ��������
      */
    void minus(Vector *vector)
    {
        for (int i = 0; i < size; i++)
        {
            coordinats[i] -= vector->coordinats[i];
        }
    }
    /**
      ��������� ���������
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
      �������� �� ������� ������
      @return 1 ���� �������
      0 ���� ���������
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
      ������ �������
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
      �������, ������ ������� ����������
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
