#pragma once
#include <iostream>
using namespace std;
/**
  @brief ����� ����������� ����������� �� ������ �� �����
  */
class Robot
{
public:
    Robot(int *_robots, int _size, int _num): size(_size), num(_num){
        robots = new int [num];
        for (int i = 0; i < num; i++){
            robots[i] = _robots[i];
        }
        masV = new int [size * size];

    }
    ~Robot(){
        delete [] robots;
        delete [] masV;
    }
    /**
      @brief �������, ����������� ������ ��������� ��������,
      @param mas - �������� ������� ���������
      */
    void nVertex(int *mas);
    /**
      @brief ������� ����������� ���������� � ����� ���������� ���������
      ����� �����, ��� ��� ����� ���� ��� ������������� ������� ��� ������ �������� �� ���.
      ��������� ����������
      @param checkV ������, ������� ���������� � ���������� ��� ��������
      */
    bool check2(int robot1, int robot2, int* checkV);
    /**
      @brief ������� ���������� ����������� �� ������,
      ���������� �� ��� ���
      */
    bool check();
private:
    int *masV, *robots;
    int num, size;
};
