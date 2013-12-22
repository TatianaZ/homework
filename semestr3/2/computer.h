#pragma once
#include "os.h"
#include <stdio.h>
#include <stdlib.h>
/**
  @brief класс отвечающий за компьютер
  @param infected  - инфецирован ли он
         os его ОС
  */
class Computer
{
public:
    Computer();
    Computer(int _os, int _infected);

    bool isInfected(){
        return infected;
    }
    /**
      @brief функция, отвечающая за заражени якомпьютера вирусом
      */
    void tryInfecting(){
        if (infected) return;
        if (rand() % 100 >= os->getVirusChance()){
            infected = true;
        }
    }

    ~Computer(){
        delete os;
    }
    /**
      @brief функция, выводит информацию о компьютере на экране
      */
    void status();

private:
    bool infected;
    Os *os;
};

