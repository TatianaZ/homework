#pragma once
#include "list.h"

template <class T>
class Bag
{
public:
    Bag<T>():root(NULL), left(NULL), right(NULL){}
    Bag<T>(T element):left(NULL),right(NULL)
    {
        root = new List<T>(element);
    }

    void addToBag(T element)
    {
        if (root == NULL)
        {
            root = new List<T>();
            root->add(element);
            left = NULL;
            right = NULL;
            return;
        }
        if (element == root->getValue())
        {
            root->add(element);
            return;
        }
        if (element > root->getValue())
        {
            if (right == NULL)
            {
                right = new Bag<T>();
            }
            right->addToBag(element);
        }
        else
        {
            if (left == NULL)
            {
                left = new Bag<T>();
            }
            left->addToBag(element);
        }
    }

    bool emptyBag()
    {
        if (root == NULL)
        {
            return 1;
        }
        return 0;
    }
    bool ownershipBag(T element)
    {
        if (element == root->getValue())
        {
            return 1;
        }
        if (element > root->getValue())
        {
            if (right == NULL)
            {
                return 0;
            }
            return right->ownershipBag(element);
        }
        if (element < root->getValue())
        {
            Bag *temp = this;
            temp--; //left
            if (temp == NULL)
            {
                return 0;
            }
            return left->ownershipBag(element);
        }
        return 0;
    }
/**
  итератор для Bag, реализует пробег для этого класса
  для элементов описан свой итератор
  */
    class BagIterator
    {
        BagIterator(Bag<T>* bag)
        {
            cursor = bag;
        }
        List<T>* operator*() const
        {
            return cursor->root;
        }
        Bag<T>* operator++()
        {
            return right;
        }
        Bag<T>* operator--()
        {
            return left;
        }

    private:
        Bag<T> * cursor;
    };
private:
    List<T> *root;
    Bag<T> *left;
    Bag<T> *right;
};
