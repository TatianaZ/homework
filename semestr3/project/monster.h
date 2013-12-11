#pragma once
#include <QObject>
/**
  класс, реализующий поведения моба
  */
class Monster : public QObject
{
    Q_OBJECT
public:
    explicit Monster(QObject *parent = 0){}
    /**
      @brief функция для атаки моба
      @param dps - урон моба
      */
    int action(){
        return dps;
    }
    /**
      @brief функция для получения урона мобом
      @param _damage - урон, получаемый мобом
      */
    void takeDamage(int _damage);
    /**
      @brief функция для доступа к переменной, отвечающей за
      инициативу моба
      @return lead - инициатива моба
      */
    int takeLead(){
        return lead;
    }
    /**
      @brief функция для доступа к переменной, отвечающей за злоровье моба
      @return hp - здоровье моба
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
