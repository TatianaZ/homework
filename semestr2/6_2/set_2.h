#pragma once
#include <iostream>
/**
  @brief класс множество
  элементы организованны в видем списка
  @param element элемент множества
  *next указатель на следующий элемент
  */
template <typename T>
class Set
{
public:
    /**
      @brief конструктор
      */
    Set():next(NULL){}
    /**
      @brief конструктор
      @param newElement новый элемент, добавл€емый в множество
      */
    Set(T newElement):next(NULL)
    {
        element = newElement;
    }
    /**
      @brief функци€ добавлени€ элемента
      @param newElement новый элемент, добавл€емый в множество
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
      @brief функци€, удал€юща€ элемент из множества
      @param delEltment элемент, удал€емый из множества
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
      @brief функци€, объедин€юща€ два множества
      @param newSet множество, с который объедин€ют
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
      @brief функци€, осуществл€юща€ пересечекние множеств
      @param anotherSet множество, с которым пересекаетс€
      */
    void crossingSet(Set *anotherSet);
    /**
      @brief функци€, провер€юща€ принадлежность множеству
      @param elementSearch элемент, который провер€етс€
      @return 1 принадлежит
      0 не принадлежит
    */
    bool ownershipSet(T elementSearch);
    /**
      @brief функци€, провер€юща€ пустоту множества
      @return 1 пусто
      0 не пусто
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

