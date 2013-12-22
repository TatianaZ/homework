#pragma once
#include "computer.h"
#define WINDOWS 1
#define LINUX 2
/**
  @brief класс, реализующий работу сети
  */
class Network
{
public:
    Network(Computer **_computer, int* _network, int num) : computer(_computer),
        network(_network), numberComp(num), step(0){}
    /**
      @brief функция, реализующая атаку вирусов на сеть
      */
    void virusAttack();
    int getStep(){
        return step;
    }
    /**
      @brief выводит статус компьютеров на экран
      */
    void status();
    /**
      @brief проверяет, все ли омпьютеры заразились
      */
    bool check();
    ~Network()
    {
        for(int i = 0; i < numberComp; i++){
            delete computer[i];
        }
    }

private:
    Computer **computer;
    int *network;
    int numberComp;
    int step;
};

