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
  �����, ����������� ������ ��� ���
  */
class Combat : public QObject
{
    Q_OBJECT
public:
    explicit Combat(Hero *_hero){
        hero = _hero;
    }
    /**
      @brief ������� ��� ����, ����� ��������� ������
      ��������� � ������ ���
      @param monsterName - ��� ����, � ������� ���������
      */
    void startCombat(int monsterName);
    /**
      @brief ������� ��� ���������� ���������� �� ������
      �� ����� ���
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
      @brief ������� ����������� ���� �� �����
      */
    void mobAttack(){
        hero->takeDamage(mob->action());
        combatRefresh();
    }
    /**
      @brief ������� ����������� ����� ��������
      �� ����
      */
    void rabbitAttack(){
        mob->takeDamage(hero->rabbitAction());
        combatRefresh();
    }
    /**
      @brief ������� ����������� ����� �����
      */
    void heroAttack(){
        mob->takeDamage(hero->action());
        combatRefresh();
    }
    /**
      @brief ������� ������ ����� �� ���������� �������
      */
    void megaDamage(){
        hero->useGold();
        mob->takeDamage(hero->action() * 3);
        combatRefresh();
    }
    /**
      @brief ������� ���������� ������� ���
      */
    void combatQueue();
    /**
      @brief ������� ��� �������� ������� ���
      */
    void createLeadQueue();
    /**
      @brief ������� �������������� ����� ��������
      �� ������
      */
    void heal(){
        hero->useClover();
        combatRefresh();
    }
    /**
      @brief ������� ������� ������ ��� ����� ���
      */
    void combatEnd(){
        delete mob;
    }

signals:
    /**
      ������� ��� ���������� ����������
      */
    void cQueue1Change(int);
    void cQueue2Change(int);
    void cQueue3Change(int);
    void combatValue(int);
    void takeMobHp(int);
    void takeHeroHp(int);
    
public slots:
    /**
      ���� ��� ���������
      */
    void pwns(){
        combatEnd();
        emit combatValue(LOSE);
    }
    /**
      ���� ��� ������
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
