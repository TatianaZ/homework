#pragma once
#include <QObject>
/**
  класс, содержищий функции для поведения героя
  */
class Hero : public QObject
{
    Q_OBJECT
public:
    explicit Hero(QObject *);
    /**
      @brief функция обновления параметров для героя
      */
    void heroStart(){
        emit cloverChange(clover);
        emit goldChange(gold);
    }
    /**
      @brief функция для собирания клевера
      */
    void takeClover(){
        clover++;
        emit cloverChange(clover);
    }
    /**
      @brief функция для подхила героя
      */
    void useClover(){
        if (clover){
            clover--;
            hp = 50;
            emit cloverChange(clover);
        }
    }
    /**
      @brief функция для собирания золота
      */
    void takeGold(){
        gold++;
        emit goldChange(gold);
    }
    /**
      @brief функция для траты золота
      */
    void useGold(){
        if (gold){
            gold--;
            emit goldChange(gold);
        }
    }
    /**
      @brief функция для получения урона героем
      @param damage - урон, получаемый героем
      */
    void takeDamage(int damage){
        hp -= damage;
        if (hp <= 0){
            emit heroDie();
        }
    }
    /**
      @brief функция для урона героем
      возвращает урон
      */
    int action(){
        return dps;
    }
    /**
      @brief функция для доступа к инициативе
      возвращает инициативу героя
      */
    int takeLead(){
        return lead;
    }
    /**
      @brief функция для доступа к инициативе кролика
      */
    int takeRabbitLead(){
        return rabbitLead;
    }
    /**
      @brief функция для урона кроликом
      */
    int rabbitAction(){
        return rabbitDps;
    }
    /**
      @brief функция для доступа к хп героя
      */
    int heroHp(){
        return hp;
    }

signals:
    void cloverChange(int);
    void goldChange(int);
    void heroDie();
    void heroIsLive();

public slots:

private:
    int gold;
    int clover;
    int hp;
    int dps;
    int lead;
    int rabbitLead, rabbitDps;
};
