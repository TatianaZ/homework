#pragma once
#include "base.h"
#include <iostream>
using namespace std;
    /**
    @brief ����������� ������
    @param *next ��������� �� ��������� �������
    */
class List : public Base
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

public:
    List *next;
};
