#pragma once
#include "list.h"

    /**
    @brief ���������� ������
    @param *prev ��������� �� ���������� �������
    *next ��������� �� ��������� �������
    */
class DoublyLinkedList : public Base
{
public:
    /**
    @brief �����������
    */
    DoublyLinkedList();
    /**
    @brief ������� �������� �� ������
    @param newValue �������� ������ �������� � ������
    */
    DoublyLinkedList(int newValue);
    /**
    @brief ������� ���������� �������� � ������
    @param newValue �������� ��������, ������� ���� �������� � ������
    */
    void add(int newValue);
    /**
    @brief ������� ������ �������� � ������
    @param valueSearch �������� ��������, ��� ������
    */
    bool search(int valueSearch);
    /**
    @brief ������� �� ����� �������� ������
    */
    void showAll();
    /**
    @brief ������� �������� �� ������
    @param valueDelete �������� ��������, ������� ����� �������
    */
    void deleteFromList(int valueDelete);
    /**
    @brief ������� �������� ���� ��������� �� ������
    */
    void deleteAll();
    /**
    ������� ���������� ������� ������
    */
    int getValue();

public:
    DoublyLinkedList *prev;
    DoublyLinkedList *next;
};
