#pragma once
    /**
    @brief ������� �����
    */
class Base
{
public:
    /**
    @brief ������� ���������� � ������
    @param newValue ��������, ������� ����� �������� � ������
    */
    virtual void add(int newValue) = 0;
    /**
    @brief ������� ������ � ������
    @param valueSearch ��������, ������� �������� � ������ ���� ���������
    @return 1 ���� ����, 0 ���� ����
    */
    virtual bool search(int valueSearch) = 0;
    /**
    @brief ������� ��������� ������ �� �����
    */
    virtual void showAll() = 0;
    /**
    @brief ������� �������� �� ������
    @param valueDelete ��������, ������� ����� ������� �� ������
    */
    virtual void deleteFromList(int valueDelete) = 0;
    /**
    @brief ������� �������� ���� ���������
    */
    virtual void deleteAll() = 0;
    /**
    ������� ���������� ������� ������
    */
    virtual int getValue() = 0;

public:
    int value;
};
