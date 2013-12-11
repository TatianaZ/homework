#pragma once
#include <QObject>
#include "hero.h"
#include "monster.h"
#define HERO_ACTION 1
#define RABBIT_ACTION 2
#define MOB_ACTION 3
#define BAT 1
#define WIN 1
#define LOSE 0
/**
  класс, реализующий логику для боя
  */
class Combat : public QObject
{
    Q_OBJECT
public:
    explicit Combat(Hero *_hero){
        hero = _hero;
    }
    /**
      @brief функция для того, чтобы выставить нужные
      параметры в начале боя
      @param monsterName - тип моба, с которым сражаться
      */
    void startCombat(int monsterName);
    /**
      @brief функция для обновления параметров на экране
      во время боя
      */
    void combatRefresh()
    {
        emit cQueue1Change(lead[0]);
        emit cQueue2Change(lead[1]);
        emit cQueue3Change(lead[2]);
        emit takeMobHp(mob->mobHp());
        emit takeHeroHp(hero->heroHp());
    }
    /**
      @brief функция реализующая урон по герою
      */
    void mobAttack(){
        hero->takeDamage(mob->action());
        combatRefresh();
    }
    /**
      @brief функция реализующая атаку кроликом
      по мобу
      */
    void rabbitAttack(){
        mob->takeDamage(hero->rabbitAction());
        combatRefresh();
    }
    /**
      @brief функция реализующая атаку героя
      */
    void heroAttack(){
        mob->takeDamage(hero->action());
        combatRefresh();
    }
    /**
      @brief функция бурста героя за магическую монетку
      */
    void megaDamage(){
        hero->useGold();
        mob->takeDamage(hero->action() * 3);
        combatRefresh();
    }
    /**
      @brief функция обновления очереди боя
      */
    void combatQueue();
    /**
      @brief функция для создания очереди боя
      */
    void createLeadQueue();
    /**
      @brief функция восстановления герою здоровья
      за клевер
      */
    void heal(){
        hero->useClover();
        combatRefresh();
    }
    /**
      @brief функция очистки памяти при конце боя
      */
    void combatEnd(){
        delete mob;
    }

signals:
    /**
      сигнаны для обновления параметров
      */
    void cQueue1Change(int);
    void cQueue2Change(int);
    void cQueue3Change(int);
    void combatValue(int);
    void takeMobHp(int);
    void takeHeroHp(int);
    
public slots:
    /**
      слот для проигрыша
      */
    void pwns(){
        combatEnd();
        emit combatValue(LOSE);
    }
    /**
      слот для победы
      */
    void combatWin(){
        combatEnd();
        emit combatValue(WIN);
    }
    void nextAction(){
 /*       switch(combatQueue())
        {
        case HERO_ACTION: mob->takeDamage(hero->action());
                    break;
        case RABBIT_ACTION: mob->takeDamage(hero->rabbitAction());
            break;
        case MOB_ACTION: hero->takeDamage(mob->action());
            break;
        }*/
    }
    void mobHp(int hp){
        hpMob = hp;
    }

private:
    Hero *hero;
    Monster *mob;
    int cQueue1, cQueue2, cQueue3;
    int lead[3];
    int combatRezult;
    int hpMob;
};
