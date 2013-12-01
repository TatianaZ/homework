#pragma once
#include "hashfunction.h"
#include "list.h"
/**
  класс хеш таблицы
  */
class HashTable
{
public:
    /**
      конструктор
      */
    HashTable();
    /**
      функция добавления в таблицу
      */
    void addToTable(int key);
    /**
      удаление из теблицы
      */
    void deleteFromTable(int key);
    /**
      поиск в теблице
      возвращает 1 или 0
      */
    bool searchInTable(int key);
    /**
      выводит статистику хеш таблицы
      */
    void statistic();
    /**
      перехеширует таблицу
      */
    void rehash(int capacityNew);
    /**
      меняет хеш функцию
      */
    void setNewHashFunction(HashFunction *funHash);

private:
    List *hashtable;
    int size;
    int capacity;
    double loadfactor;
    HashFunction *hashFunction;
};
