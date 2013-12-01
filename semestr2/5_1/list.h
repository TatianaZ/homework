#pragma once
#include <iostream>
using namespace std;
    /**
    @brief односвязный список
    @param *next указатель на следующий элемент
    */
class List
{
public:
    /**
    @brief конструктор
    */
    List ();
    /**
    @brief конструктор
    @param newValue новый элемент списка
    */
    List(int newValue);
    /**
    @brief функция добавления элемента в список
    @param newValue значение, которое нужно добавить в список
    */
    void add(int newValue);
    /**
    @brief функция поиска в списке
    @param valueSearch значение, наличие которого в списке надо проверить
    @return 1 если есть, 0 если нету
    */
    bool search(int valueSearch);
    /**
    @brief функция вывода элементов списка на экран
    */
    void showAll();
    /**
    @brief функция удаления элемента изх списка
    @param valueDelete значение, котолрое из списка удалить нужно
    */
    void deleteFromList(int valueDelete);
    /**
    @brief функция удаления элементов из списка
    */
    void deleteAll();
    /**
    функция возвращает элемент списка
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
