#pragma once
#include <iostream>
using namespace std;
/**
  @brief класс провер€ющий уничтожатс€ ли роботы на доске
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
      @brief функци€, заполн€юща€ массив вершинами сосед€ми,
      @param mas - исходна€ матрица смежности
      */
    void nVertex(int *mas);
    /**
      @brief функци€ провер€юща€ рекурсивно в какой компоненте св€зности
      сидит робот, так как после того как преобразовали матрицу она маогла разбитс€ на две.
      ѕровер€ет рекурсивно
      @param checkV массив, несущий информацию о пройденных уже вершинах
      */
    bool check2(int robot1, int robot2, int* checkV);
    /**
      @brief функци€ првер€юща€ уничтожатс€ ли роботы,
      возвращает да или нет
      */
    bool check();
private:
    int *masV, *robots;
    int num, size;
};
