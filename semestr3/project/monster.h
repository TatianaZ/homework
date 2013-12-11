#pragma once
#include <QObject>
/**
  �����, ����������� ��������� ����
  */
class Monster : public QObject
{
    Q_OBJECT
public:
    explicit Monster(QObject *parent = 0){}
    /**
      @brief ������� ��� ����� ����
      @param dps - ���� ����
      */
    int action(){
        return dps;
    }
    /**
      @brief ������� ��� ��������� ����� �����
      @param _damage - ����, ���������� �����
      */
    void takeDamage(int _damage);
    /**
      @brief ������� ��� ������� � ����������, ���������� ��
      ���������� ����
      @return lead - ���������� ����
      */
    int takeLead(){
        return lead;
    }
    /**
      @brief ������� ��� ������� � ����������, ���������� �� �������� ����
      @return hp - �������� ����
      */
    int mobHp(){
        return hp;
    }

signals:
    void mobDie();
    void mobIsLive();
public slots:
protected:
    int hp;
    int dps;
    int lead;
};
class Bat : public Monster
{
public:
    Bat(){
        hp = 130; dps = 2; lead = 2;
    }
};
