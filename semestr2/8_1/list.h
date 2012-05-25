#pragma once
#include <iostream>
using namespace std;
    /**
    @brief односв€зный список
    @param *next указатель на следующий элемент
    */
template <class T>
class List
{
public:
    /**
    @brief конструктор
    */
    List ():next(NULL){}
    /**
    @brief конструктор
    @param newValue новый элемент списка
    */
    List(T newValue):next(NULL)
    {
        value = newValue;
    }

    /**
    @brief функци€ добавлени€ элемента в список
    @param newValue значение, которое нужно добавить в список
    */
    void add(T newValue)
    {
        if (next == NULL)
        {
            next = new List (newValue);
        }
        else
        {
            next->add(newValue);
        }
    }
    /**
    @brief функци€ поиска в списке
    @param valueSearch значение, наличие которого в списке надо проверить
    @return 1 если есть, 0 если нету
    */
    bool search(T valueSearch)
    {
        List *temp;
        temp = this;
        while (temp != NULL)
        {
            if (temp->value == valueSearch)
            {
                return 1;
            }
            temp = temp->next;
        }
        return 0;
    }
    /**
    @brief функци€ вывода элементов списка на экран
    */
    void showAll()
    {
        List *temp;
        temp = this;
        if (temp->next == NULL)
        {
            cout << " Empty \n";
        }
        while (temp->next != NULL)
        {
            temp = temp->next;
            cout << temp->value << " ";

        }
        cout << "\n";
    }
    /**
    @brief функци€ удалени€ элемента изх списка
    @param valueDelete значение, котолрое из списка удалить нужно
    */
    void deleteFromList(T valueDelete)
    {
        if (!search(valueDelete))
        {
            return;
        }
        List *temp1, *temp2;

        temp1 = this;

        if (temp1->next->value == valueDelete)    // head
        {
            temp2 = temp1->next;
            this->next = this->next->next;
            delete temp2;
            return;
        }
        temp1 = temp1->next;
        while (temp1->next->value != valueDelete)
        {
            temp1 = temp1->next;
        }
        if (temp1->next->next == NULL) // tail
        {
            temp2 = temp1->next;
            temp1->next = NULL;
            delete temp2;
        }
        else
        {
            temp2 = temp1->next;
            temp1->next = temp1->next->next;
            delete temp2;
        }
    }
    /**
    @brief функци€ удалени€ элементов из списка
    */
    void deleteAll()
    {
        List *temp, *temp2;
        temp = this->next;

        while (temp != NULL)
        {
            temp2 = temp;
            temp = temp->next;
            delete temp2;
        }
        this->next = NULL;
    }
    /**
    функци€ возвращает элемент списка
    */
    T getValue()
    {
        return next->value;
    }
    /**
      функци€ возвращает указаетль на следующий элемент
      */
    List* getNext()
    {
        List *temp = this;
        return temp++;
    }
    /**
      итератор дл€ списка, чтобы повтор€ющиес€ элементы в множестве можно было
      выдавать последовательно при пробеге итератора
      */
    class ListIterator
    {
    public:
        ListIterator(List<T>* list)
        {
            cursor = list;
        }
        const List<T>* list() const
        {
            return cursor;
        }
        ListIterator& operator++()
        {
            cursor = cursor->next;
            return *this;
        }
        const T& operator*() const
        {
            return cursor->value;
        }
        bool operator !=(const ListIterator& it) const
        {
            return cursor != it.list();
        }

    private:
        List<T>* cursor;
    };

public:
    List *next;
    T value;
};

