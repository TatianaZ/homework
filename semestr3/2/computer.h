#pragma once
#include "os.h"
#include <stdio.h>
#include <stdlib.h>
/**
  @brief ����� ���������� �� ���������
  @param infected  - ����������� �� ��
         os ��� ��
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
      @brief �������, ���������� �� �������� ����������� �������
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
      @brief �������, ������� ���������� � ���������� �� ������
      */
    void status();

private:
    bool infected;
    Os *os;
};

