#pragma once
#include <iostream>
using namespace std;
    /**
    @brief ����������� ������
    @param *next ��������� �� ��������� �������
    */
class List
{
public:
    /**
    @brief �����������
    */
    List ();
    /**
    @brief �����������
    @param newValue ����� ������� ������
    */
    List(int newValue);
    /**
    @brief ������� ���������� �������� � ������
    @param newValue ��������, ������� ����� �������� � ������
    */
    void add(int newValue);
    /**
    @brief ������� ������ � ������
    @param valueSearch ��������, ������� �������� � ������ ���� ���������
    @return 1 ���� ����, 0 ���� ����
    */
    bool search(int valueSearch);
    /**
    @brief ������� ������ ��������� ������ �� �����
    */
    void showAll();
    /**
    @brief ������� �������� �������� ��� ������
    @param valueDelete ��������, �������� �� ������ ������� �����
    */
    void deleteFromList(int valueDelete);
    /**
    @brief ������� �������� ��������� �� ������
    */
    void deleteAll();
    /**
    ������� ���������� ������� ������
    */
    int getValue();
    int getLenght()
    {
        return lenght;
    }
    List * getNext()
    {
        return next;
    }

public:
    List *next;
    int lenght;
    int value;
};
