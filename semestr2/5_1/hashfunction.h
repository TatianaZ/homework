#pragma once
/**
  класс хеш функции. теоретически, если в клиентском коде имеетс€
  такой класс, то можно мен€ть хеш функции мен€€ наследники этого класса
  */
class HashFunction
{
public:
    virtual int hash(int key) = 0;
};

class HashFunction1 : public HashFunction
{
    int hash(int key)
    {
        return key % 13;
    }
};
class HashFunction2 : public HashFunction
{
    int hash(int key)
    {
        return key % 43;
    }
};
