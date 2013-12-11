#pragma once
#include <QObject>

//события
#define BATS 1
#define CLOVER 2
#define CHEST 3
#define BUSH 4
#define NOTHING 0
/**
  класс, реализующий построение карты, содержит также
  функции перемещения по карте
  */
class Map : public QObject
{
    Q_OBJECT

public:
    explicit Map(QObject *);
    /**
      @brief функция для перемещения влево
      */
    void goLeft();
    /**
      @brief функция для перемещения вправо
      */
    void goRight();
    /**
      @brief функция для перемещения вверх
      */
    void goUp();
    /**
      @brief функция для перемещения вниз
      */
    void goDown();
    /**
      @brief функция для обновления карты после совершения ивента
      */
    void takeEvent();
    /**
      @brief функция для обновления информации, нужной для
      обновления карты
      */
    void mapSet();
    /**
      @brief функция для заполнения массива текстурами
      @return массив для текстур
      */
    int* levelTexture();
    /**
      @brief функция для заполения массива ячеек прохождения
      @return массива для ячеек прохождения
      */
    int* levelPath();
    /**
      @brief функция для заполнения массива для событий
      @return массив для ивентов
      */
    int* levelEvent();
    ~Map();

signals:
    /**
      сигналы для обновления карты
      */
    void hasMap0_0Changed(int);
    void hasMap0_1Changed(int);
    void hasMap0_2Changed(int);
    void hasMap1_0Changed(int);
    void hasMap1_1Changed(int);
    void hasMap1_2Changed(int);
    void hasMap2_0Changed(int);
    void hasMap2_1Changed(int);
    void hasMap2_2Changed(int);

    void hasMap0_0ChangedEvent(int);
    void hasMap0_1ChangedEvent(int);
    void hasMap0_2ChangedEvent(int);
    void hasMap1_0ChangedEvent(int);
    void hasMap1_1ChangedEvent(int);
    void hasMap1_2ChangedEvent(int);
    void hasMap2_0ChangedEvent(int);
    void hasMap2_1ChangedEvent(int);
    void hasMap2_2ChangedEvent(int);

private:
    int _map0_0, _map0_1, _map0_2;
    int _map1_0, _map1_1, _map1_2;
    int _map2_0, _map2_1, _map2_2;

    int _map0_0event, _map0_1event, _map0_2event;
    int _map1_0event, _map1_1event, _map1_2event;
    int _map2_0event, _map2_1event, _map2_2event;

    int *map1Path;
    int *map1Event;
    int *map1T;
    int _x, level, size;
};
