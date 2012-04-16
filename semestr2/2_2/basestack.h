#ifndef BASESTACK_H
#define BASESTACK_H
#include <iostream>

using namespace std;

class BaseStack
{
public:
    virtual void push(int newData) = 0; // �������� � ����
    virtual int pop() = 0;              // ��������
    virtual void showAll() = 0;         // ���������� ����������
    virtual bool checkSize() = 0;       // ��������� �� ������ �� ����
};

#endif // BASESTACK_H
