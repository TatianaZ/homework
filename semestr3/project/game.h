#pragma once
#include <QObject>
#include <QTime>
#include <windows.h>
#include "map.h"
#include "hero.h"
#include "combat.h"

#include <iostream>

#define UNKNOWN -1
using namespace std;
/**
  класс, собирающий информацию и функции со всех
  классов, чтобы потом было удобней вызывать их
  через qml
  */
class Game : public QObject{
    Q_OBJECT
public:
    /**
      макросы для того, чтобы изменения величин отображалось в qml файле
      */
    // для карты
    Q_PROPERTY(int map0_0 READ map0_0 WRITE takeMap0_0 NOTIFY hasMap0_0Changed)
    Q_PROPERTY(int map0_1 READ map0_1 WRITE takeMap0_1 NOTIFY hasMap0_1Changed)
    Q_PROPERTY(int map0_2 READ map0_2 WRITE takeMap0_2 NOTIFY hasMap0_1Changed)
    Q_PROPERTY(int map1_0 READ map1_0 WRITE takeMap1_0 NOTIFY hasMap1_0Changed)
    Q_PROPERTY(int map1_1 READ map1_1 WRITE takeMap1_1 NOTIFY hasMap1_1Changed)
    Q_PROPERTY(int map1_2 READ map1_2 WRITE takeMap1_2 NOTIFY hasMap1_2Changed)
    Q_PROPERTY(int map2_0 READ map2_0 WRITE takeMap2_0 NOTIFY hasMap2_0Changed)
    Q_PROPERTY(int map2_1 READ map2_1 WRITE takeMap2_1 NOTIFY hasMap2_1Changed)
    Q_PROPERTY(int map2_2 READ map2_2 WRITE takeMap2_2 NOTIFY hasMap2_2Changed)

    Q_PROPERTY(int map0_0event READ map0_0event WRITE takeEvent0_0 NOTIFY hasMap0_0ChangedEvent)
    Q_PROPERTY(int map0_1event READ map0_1event WRITE takeEvent0_1 NOTIFY hasMap0_1ChangedEvent)
    Q_PROPERTY(int map0_2event READ map0_2event WRITE takeEvent0_2 NOTIFY hasMap0_2ChangedEvent)
    Q_PROPERTY(int map1_0event READ map1_0event WRITE takeEvent1_0 NOTIFY hasMap1_0ChangedEvent)
    Q_PROPERTY(int map1_1event READ map1_1event WRITE takeEvent1_1 NOTIFY hasMap1_0ChangedEvent)
    Q_PROPERTY(int map1_2event READ map1_2event WRITE takeEvent1_2 NOTIFY hasMap1_2ChangedEvent)
    Q_PROPERTY(int map2_0event READ map2_0event WRITE takeEvent2_0 NOTIFY hasMap2_0ChangedEvent)
    Q_PROPERTY(int map2_1event READ map2_1event WRITE takeEvent2_1 NOTIFY hasMap2_1ChangedEvent)
    Q_PROPERTY(int map2_2event READ map2_2event WRITE takeEvent2_2 NOTIFY hasMap2_2ChangedEvent)

    //для боя
    Q_PROPERTY(int gold READ gold WRITE setGold NOTIFY hasGoldChanged)
    Q_PROPERTY(int clover READ clover WRITE setClover NOTIFY hasCloverChanged)
    Q_PROPERTY(int hpHero READ hpHero WRITE setHpHero NOTIFY hasHeroHpChange)
    Q_PROPERTY(int hpMob READ hpMob WRITE setHpMob NOTIFY hasMobHpChange())
    Q_PROPERTY(int cQueue1 READ cQueue1 WRITE setCQueue1 NOTIFY hasCQueue1Changed)
    Q_PROPERTY(int cQueue2 READ cQueue2 WRITE setCQueue2 NOTIFY hasCQueue2Changed)
    Q_PROPERTY(int cQueue3 READ cQueue3 WRITE setCQueue3 NOTIFY hasCQueue3Changed)
    Q_PROPERTY(int combatRez READ combatRez WRITE setCombatRez NOTIFY hasCombatRezChanged)

    explicit Game(QObject *parent = 0){}
    ~Game(){
     //   delete map;
    //    delete hero;
    }
    /**
      @brief функция для обновления экрана боя
      */
    void combatRefresh();
    /**
      @brief функция для обновления карты
      */
    void mapRefresh();
    /**
      @brief функция выставления параметров
      для начала игры
      */
    Q_INVOKABLE void startGame();
    /**
      @brief функция для освобождения памяти
      при выходе
      */
    Q_INVOKABLE void end(){
        delete map;
        delete combat;
    }
    /**
      @brief функция для вызова лечения
      */
    Q_INVOKABLE void heal(){
        combat->heal();
        combatRefresh();
    }
    /**
      @brief функция для бурста
      */
    Q_INVOKABLE void megaDamage(){
        combat->megaDamage();
        combatRefresh();
    }
    /**
      @brief функция для очищения экрана
      после совершения ивента
      */
    Q_INVOKABLE void takeEvent(){
        map->takeEvent();
        _mapEvent1_1 = 0;
        emit hasMap1_1ChangedEvent();
    }
    /**
      @brief функция обновления очереди боя
      */
    Q_INVOKABLE void combatQueue(){
        combat->combatQueue();
        combatRefresh();
    }
    /**
      @brief функция для атаки моба
      */
    Q_INVOKABLE void mobAttack(){
        combat->mobAttack();
        combatRefresh();
    }
    /**
      @brief функция для атаки героя
      */
    Q_INVOKABLE void heroAttack(){
        combat->heroAttack();
        combatRefresh();
    }
    /**
      @brief функция для атаки кролика
      */
    Q_INVOKABLE void rabbitAttack(){
        combat->rabbitAttack();
        combatRefresh();
    }
    /**
      @brief функция для начала боя
      */
    Q_INVOKABLE void startCombat(){
        combat->startCombat(_mapEvent1_1);
        combatRefresh();
    }
    /**
      @brief функция для перемещения влево по карте
      */
    Q_INVOKABLE void goLeft(){
        map->goLeft();
        mapRefresh();
    }
    /**
      @brief функция для перемещения вправо по карте
      */
    Q_INVOKABLE void goRight(){
        map->goRight();
        mapRefresh();
    }
    /**
      @brief функция для перемещения вверх
      */
    Q_INVOKABLE void goUp(){
        map->goUp();
        mapRefresh();
    }
    /**
      @brief функция для перемещения вниз
      */
    Q_INVOKABLE void goDown(){
        map->goDown();
        mapRefresh();
    }
    /**
      @brief функция для собирания золота
      */
    Q_INVOKABLE void takeGold(){
        hero->takeGold();
        emit hasGoldChanged();
    }
    /**
      @brief функция для собирания клевера
      */
    Q_INVOKABLE void takeClover(){
        hero->takeClover();
        emit hasCloverChanged();
    }   
    //для Q_PROPERTY
    void setGold(int gold) {return;}
    void setClover(int clover) {return;}
    int hpHero() const { return _heroHp; }
    void setHpHero(int hp) {return;}
    int hpMob() const { return _mobHp; }
    void setHpMob(int hp) {return;}

    int cQueue1() const { return _cQueue1; }
    void setCQueue1(int s) {return;}
    int cQueue2() const { return _cQueue2; }
    void setCQueue2(int s) {return;}
    int cQueue3() const { return _cQueue3; }
    void setCQueue3(int s) {return;}
    int combatRez() const { return _combatRez; }
    void setCombatRez(int s) {return;}

    int gold() const { return _gold; }
    int clover() const { return _clover; }
    //для QPROPERTY
    int map0_0() const { return _map0_0; }
    int map0_1() const { return _map0_1; }
    int map0_2() const { return _map0_2; }
    int map1_0() const { return _map1_0; }
    int map1_1() const { return _map1_1; }
    int map1_2() const { return _map1_2; }
    int map2_0() const { return _map2_0; }
    int map2_1() const { return _map2_1; }
    int map2_2() const { return _map2_2; }

    int map0_0event() const { return _mapEvent0_0; }
    int map0_1event() const { return _mapEvent0_1; }
    int map0_2event() const { return _mapEvent0_2; }
    int map1_0event() const { return _mapEvent1_0; }
    int map1_1event() const { return _mapEvent1_1; }
    int map1_2event() const { return _mapEvent1_2; }
    int map2_0event() const { return _mapEvent2_0; }
    int map2_1event() const { return _mapEvent2_1; }
    int map2_2event() const { return _mapEvent2_2; }
signals:
    /**
      сигналы для обновления данных в
      qml файле
      */
    //для карты
    void hasMap0_0Changed();
    void hasMap0_1Changed();
    void hasMap0_2Changed();
    void hasMap1_0Changed();
    void hasMap1_1Changed();
    void hasMap1_2Changed();
    void hasMap2_0Changed();
    void hasMap2_1Changed();
    void hasMap2_2Changed();

    void hasMap0_0ChangedEvent();
    void hasMap0_1ChangedEvent();
    void hasMap0_2ChangedEvent();
    void hasMap1_0ChangedEvent();
    void hasMap1_1ChangedEvent();
    void hasMap1_2ChangedEvent();
    void hasMap2_0ChangedEvent();
    void hasMap2_1ChangedEvent();
    void hasMap2_2ChangedEvent();
    //для боя
    void hasHeroHpChange();
    void hasMobHpChange();
    void hasGoldChanged();
    void hasCloverChanged();
    void hasCombatRezChanged();
    void hasCQueue1Changed();
    void hasCQueue2Changed();
    void hasCQueue3Changed();
    
public slots:
    /**
      слоты для собирания информации из всех
      классов в один
      */
    void takeMap0_0(int _map){
        _map0_0 = _map;
    }
    void takeMap0_1(int _map){
        _map0_1 = _map;
    }
    void takeMap0_2(int _map){
        _map0_2 = _map;
    }
    void takeMap1_0(int _map){
        _map1_0 = _map;
    }
    void takeMap1_1(int _map){
        _map1_1 = _map;
    }
    void takeMap1_2(int _map){
        _map1_2 = _map;
    }
    void takeMap2_0(int _map){
        _map2_0 = _map;
    }
    void takeMap2_1(int _map){
        _map2_1 = _map;
    }
    void takeMap2_2(int _map){
        _map2_2 = _map;
    }

    void takeEvent0_0(int _mapEvent){
        _mapEvent0_0 = _mapEvent;
    }
    void takeEvent0_1(int _mapEvent){
        _mapEvent0_1 = _mapEvent;
    }
    void takeEvent0_2(int _mapEvent){
        _mapEvent0_2 = _mapEvent;
    }
    void takeEvent1_0(int _mapEvent){
        _mapEvent1_0 = _mapEvent;
    }
    void takeEvent1_1(int _mapEvent){
        _mapEvent1_1 = _mapEvent;
    }
    void takeEvent1_2(int _mapEvent){
        _mapEvent1_2 = _mapEvent;
    }
    void takeEvent2_0(int _mapEvent){
        _mapEvent2_0 = _mapEvent;
    }
    void takeEvent2_1(int _mapEvent){
        _mapEvent2_1 = _mapEvent;
    }
    void takeEvent2_2(int _mapEvent){
        _mapEvent2_2 = _mapEvent;
    }

    void takeCloverStatement(int c){
        _clover = c;
    }
    void takeGoldStatement(int g){
        _gold = g;
    }
    void takeCQueue1(int q1){
        _cQueue1 = q1;
    }
    void takeCQueue2(int q2){
        _cQueue2 = q2;
    }
    void takeCQueue3(int q3){
        _cQueue3 = q3;
    }
    void takeCombatRez(int rez){
        _combatRez = rez;
    }
    void takeHeroHp(int hp){
        _heroHp = hp;
    }
    void takeMobHp(int hp){
        _mobHp = hp;
    }

private:
    Map *map;
    Hero *hero;
    Combat *combat;
    int _map0_0, _map0_1, _map0_2;
    int _map1_0, _map1_1, _map1_2;
    int _map2_0, _map2_1, _map2_2;

    int _mapEvent0_0, _mapEvent0_1, _mapEvent0_2;
    int _mapEvent1_0, _mapEvent1_1, _mapEvent1_2;
    int _mapEvent2_0, _mapEvent2_1, _mapEvent2_2;

    int _clover, _gold;

    int _heroHp, _mobHp, _combatRez;
    int _cQueue1, _cQueue2, _cQueue3;
};
