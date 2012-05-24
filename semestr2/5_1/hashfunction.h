#pragma once
/**
  ����� ��� �������. ������������, ���� � ���������� ���� �������
  ����� �����, �� ����� ������ ��� ������� ����� ���������� ����� ������
  */
class HashFunction
{
public:
    virtual int hash(int key) = 0;
};

class HashFunction1 : public HashFunction
{
    int hash(int key)
    {
        return key % 13;
    }
};
class HashFunction2 : public HashFunction
{
    int hash(int key)
    {
        return key % 43;
    }
};
