#pragma once
#include <iostream>
/**
  @brief ����� ���������
  �������� ������������� � ����� ������
  @param element ������� ���������
  *next ��������� �� ��������� �������
  */
template <typename T>
class Set
{
public:
    /**
      @brief �����������
      */
    Set():next(NULL){}
    /**
      @brief �����������
      @param newElement ����� �������, ����������� � ���������
      */
    Set(T newElement):next(NULL)
    {
        element = newElement;
    }
    /**
      @brief ������� ���������� ��������
      @param newElement ����� �������, ����������� � ���������
      */
    void add(T newElement)
    {
        Set *temp = this;
        while (temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = new Set<T>(newElement);
    }
    /**
      @brief �������, ��������� ������� �� ���������
      @param delEltment �������, ��������� �� ���������
      */
    void deleteElement(T delElement)
    {
        if (ownershipSet(delElement))
        {
            Set *temp = this->next;

            if (temp->element == delElement) //head
            {
                this->next = this->next->next;
                delete temp;
                return;
            }
            temp = temp->next;
            while (temp->next->element != delElement)
            {
                temp = temp->next;
            }
            if (temp->next->next == NULL) // tail
            {
                Set *temp2;
                temp2 = temp->next;
                temp->next = NULL;
                delete temp2;
            }
            else
            {
                Set *temp2;
                temp2 = temp->next;
                temp->next = temp->next->next;
                delete temp2;
            }
        }
    }
    /**
      @brief �������, ������������ ��� ���������
      @param newSet ���������, � ������� ����������
      */
    void uniteSet(Set *newSet)
    {
        while (newSet != NULL)
        {
            if (!ownershipSet(newSet->element))
            {
                add(newSet->element);
            }
            newSet = newSet->next;
        }
    }
    /**
      @brief �������, �������������� ������������ ��������
      @param anotherSet ���������, � ������� ������������
      */
    void crossingSet(Set *anotherSet);
    /**
      @brief �������, ����������� �������������� ���������
      @param elementSearch �������, ������� �����������
      @return 1 �����������
      0 �� �����������
    */
    bool ownershipSet(T elementSearch);
    /**
      @brief �������, ����������� ������� ���������
      @return 1 �����
      0 �� �����
      */
    bool EmptySet();
private:
    T element;
    Set *next;
};


template <typename T>
bool Set<T>::EmptySet()
{
    if (next == NULL)
    {
        return 1;
    }
    return 0;
}
template <typename T>
bool Set<T>::ownershipSet(T elementSearch)
{
    Set<T> *temp = this->next;
    while (temp != NULL)
    {
        if (temp->element == elementSearch)
        {
            return 1;
        }
        temp = temp->next;
    }
    return 0;
}

template <typename T>
void Set<T>::crossingSet(Set<T> *anotherSet)
{
    Set<T> *temp = this->next;
    while (temp != NULL)
    {
        if (!anotherSet->ownershipSet(temp->element))
        {
            deleteElement(temp->element);
        }
        temp = temp->next;
}

