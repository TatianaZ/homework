#include "hashtable.h"

HashTable::HashTable()
{
    capacity = 16;
    size = 0;
    loadfactor = 0;
    hashFunction = new HashFunction1();
    hashtable = new List[capacity];
}

void HashTable::addToTable(int key)
{
    if (searchInTable(key))
    {
        return;
    }
    int tempKey = hashFunction->hash(key) % capacity;
    hashtable[tempKey].add(key);
    size++;
}

void HashTable::deleteFromTable(int key)
{
    if (searchInTable(key))
    {
        int tempKey = hashFunction->hash(key) % capacity;
        hashtable[tempKey].deleteFromList(key);
        size--;
    }
}

bool HashTable::searchInTable(int key)
{
    int tempKey = hashFunction->hash(key) % capacity;
    if (hashtable[tempKey].search(key))
    {
        return 1;
    }
    return 0;
}

void HashTable::rehash(int capacityNew)
{
    List *temp = new List[capacityNew];
    int hash;
    for (int i = 0; i < capacity; i++)
    {
        List *tempList = &hashtable[i];
        for (int j = 0; j < hashtable[i].getLenght(); j++)
        {
            hash = (hashFunction->hash(tempList->getValue())) % capacityNew;
            temp[hash].add(hashtable[i].getValue());
            tempList = tempList->getNext();
        }
    }
    capacity = capacityNew;
    delete[] hashtable;
    hashtable = temp;
}
void HashTable::setNewHashFunction(HashFunction *funHash)
{
    delete hashFunction;
    hashFunction = funHash;

    if (size == 0)
    {
        return;
    }
    int capacityNew = capacity / 0.5;
    rehash(capacityNew);
}

void HashTable::statistic()
{
    int hashElement = 0;
    int maxLenght = hashtable[0].getLenght();
    for (int i = 0; i < capacity; i++)
    {
        if (hashtable[i].getLenght() > 0)
        {
            hashElement++;
        }
        if (hashtable[i].getLenght() > maxLenght)
        {
            maxLenght = hashtable[i].getLenght();
        }
    }
    cout << "Size " << size << endl << "load factor " << (double)(size / capacity) << endl
         << "not empty cells " << hashElement << endl << "maximum lenght " << maxLenght << endl;
}
