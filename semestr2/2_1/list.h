#ifndef LIST_H
#define LIST_H
#include "base.h"
#include <iostream>
using namespace std;

class List : public Base
{
public:
    List ();
    List(int newValue);

    void add(int newValue);
    bool search(int valueSearch);
    void showAll();
    void deleteFromList(int valueDelete);
    void deleteAll();

public:
    List *next;
};

#endif // LIST_H
