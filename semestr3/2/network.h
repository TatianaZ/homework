#pragma once
#include "computer.h"
#define WINDOWS 1
#define LINUX 2
/**
  @brief �����, ����������� ������ ����
  */
class Network
{
public:
    Network(Computer **_computer, int* _network, int num) : computer(_computer),
        network(_network), numberComp(num), step(0){}
    /**
      @brief �������, ����������� ����� ������� �� ����
      */
    void virusAttack();
    int getStep(){
        return step;
    }
    /**
      @brief ������� ������ ����������� �� �����
      */
    void status();
    /**
      @brief ���������, ��� �� ��������� ����������
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

