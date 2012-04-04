#ifndef BASE_H
#define BASE_H

class Base
{
public:
    Base();

    virtual void add(int newValue) = 0;
    virtual bool search(int valueSearch) = 0;
    virtual void showAll() = 0;
    virtual void deleteFromList(int valueDelete) = 0;
    virtual void deleteAll() = 0;

public:
    int value;
};

#endif // BASE_H
