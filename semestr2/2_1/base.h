#pragma once
    /**
    @brief базовый класс
    */
class Base
{
public:
    /**
    @brief функция добавления в список
    @param newValue значение, которое нужно добавить в список
    */
    virtual void add(int newValue) = 0;
    /**
    @brief функция поиска в списке
    @param valueSearch значение, наличие которого в списке надо проверить
    @return 1 если есть, 0 если нету
    */
    virtual bool search(int valueSearch) = 0;
    /**
    @brief функция выводящая список на экран
    */
    virtual void showAll() = 0;
    /**
    @brief функция удаления из списка
    @param valueDelete значение, которое нужно удалить из списка
    */
    virtual void deleteFromList(int valueDelete) = 0;
    /**
    @brief функция удаления всех элементов
    */
    virtual void deleteAll() = 0;
    /**
    функция возвращает элемент списка
    */
    virtual int getValue() = 0;

public:
    int value;
};
