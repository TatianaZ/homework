#pragma once
#include <QObject>

//�������
#define BATS 1
#define CLOVER 2
#define CHEST 3
#define BUSH 4
#define NOTHING 0
/**
  �����, ����������� ���������� �����, �������� �����
  ������� ����������� �� �����
  */
class Map : public QObject
{
    Q_OBJECT

public:
    explicit Map(QObject *);
    /**
      @brief ������� ��� ����������� �����
      */
    void goLeft();
    /**
      @brief ������� ��� ����������� ������
      */
    void goRight();
    /**
      @brief ������� ��� ����������� �����
      */
    void goUp();
    /**
      @brief ������� ��� ����������� ����
      */
    void goDown();
    /**
      @brief ������� ��� ���������� ����� ����� ���������� ������
      */
    void takeEvent();
    /**
      @brief ������� ��� ���������� ����������, ������ ���
      ���������� �����
      */
    void mapSet();
    /**
      @brief ������� ��� ���������� ������� ����������
      @return ������ ��� �������
      */
    int* levelTexture();
    /**
      @brief ������� ��� ��������� ������� ����� �����������
      @return ������� ��� ����� �����������
      */
    int* levelPath();
    /**
      @brief ������� ��� ���������� ������� ��� �������
      @return ������ ��� �������
      */
    int* levelEvent();
    ~Map();

signals:
    /**
      ������� ��� ���������� �����
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
