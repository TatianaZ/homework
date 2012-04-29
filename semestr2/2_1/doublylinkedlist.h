#pragma once
#include "list.h"

    /**
    @brief двусвязный список
    @param *prev указатель на предыдущий элемент
    *next указатель на следующий элемент
    */
class DoublyLinkedList : public Base
{
public:
    /**
    @brief конструктор
    */
    DoublyLinkedList();
    /**
    @brief функция удаления из списка
    @param newValue значение нового элемента в списке
    */
    DoublyLinkedList(int newValue);
    /**
    @brief функция добавления элемента в список
    @param newValue значение эдемента, которое нажо добавить в список
    */
    void add(int newValue);
    /**
    @brief функция поиска элемента в списке
    @param valueSearch значение элемента, кое ищется
    */
    bool search(int valueSearch);
    /**
    @brief выводит на экран элементы списка
    */
    void showAll();
    /**
    @brief функция удаления из списка
    @param valueDelete значение элемента, которое нужно удалить
    */
    void deleteFromList(int valueDelete);
    /**
    @brief функция удаления всех элементов из списка
    */
    void deleteAll();
    /**
    функция возвращает элемент списка
    */
    int getValue();

public:
    DoublyLinkedList *prev;
    DoublyLinkedList *next;
};
