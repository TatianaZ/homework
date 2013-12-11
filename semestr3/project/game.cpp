#include "game.h"
void Game::mapRefresh(){
    emit hasMap0_0Changed();        emit hasMap0_1Changed();
    emit hasMap0_2Changed();        emit hasMap1_0Changed();
    emit hasMap1_1Changed();        emit hasMap1_2Changed();
    emit hasMap2_0Changed();        emit hasMap2_1Changed();
    emit hasMap2_2Changed();

    emit hasMap0_0ChangedEvent();        emit hasMap0_1ChangedEvent();
    emit hasMap0_2ChangedEvent();        emit hasMap1_0ChangedEvent();
    emit hasMap1_1ChangedEvent();        emit hasMap1_2ChangedEvent();
    emit hasMap2_0ChangedEvent();        emit hasMap2_1ChangedEvent();
    emit hasMap2_2ChangedEvent();
}
void Game::startGame(){
    map = new Map;
    connect(map, SIGNAL(hasMap0_0Changed(int)), this, SLOT(takeMap0_0(int)));
    connect(map, SIGNAL(hasMap0_1Changed(int)), this, SLOT(takeMap0_1(int)));
    connect(map, SIGNAL(hasMap0_2Changed(int)), this, SLOT(takeMap0_2(int)));
    connect(map, SIGNAL(hasMap1_0Changed(int)), this, SLOT(takeMap1_0(int)));
    connect(map, SIGNAL(hasMap1_1Changed(int)), this, SLOT(takeMap1_1(int)));
    connect(map, SIGNAL(hasMap1_2Changed(int)), this, SLOT(takeMap1_2(int)));
    connect(map, SIGNAL(hasMap2_0Changed(int)), this, SLOT(takeMap2_0(int)));
    connect(map, SIGNAL(hasMap2_1Changed(int)), this, SLOT(takeMap2_1(int)));
    connect(map, SIGNAL(hasMap2_2Changed(int)), this, SLOT(takeMap2_2(int)));

    connect(map, SIGNAL(hasMap0_0ChangedEvent(int)), this, SLOT(takeEvent0_0(int)));
    connect(map, SIGNAL(hasMap0_1ChangedEvent(int)), this, SLOT(takeEvent0_1(int)));
    connect(map, SIGNAL(hasMap0_2ChangedEvent(int)), this, SLOT(takeEvent0_2(int)));
    connect(map, SIGNAL(hasMap1_0ChangedEvent(int)), this, SLOT(takeEvent1_0(int)));
    connect(map, SIGNAL(hasMap1_1ChangedEvent(int)), this, SLOT(takeEvent1_1(int)));
    connect(map, SIGNAL(hasMap1_2ChangedEvent(int)), this, SLOT(takeEvent1_2(int)));
    connect(map, SIGNAL(hasMap2_0ChangedEvent(int)), this, SLOT(takeEvent2_0(int)));
    connect(map, SIGNAL(hasMap2_1ChangedEvent(int)), this, SLOT(takeEvent2_1(int)));
    connect(map, SIGNAL(hasMap2_2ChangedEvent(int)), this, SLOT(takeEvent2_2(int)));
    map->mapSet();
    hero = new Hero;
    connect(hero, SIGNAL(cloverChange(int)), this, SLOT(takeCloverStatement(int)));
    connect(hero, SIGNAL(goldChange(int)), this, SLOT(takeGoldStatement(int)));

    combat = new Combat(hero);
    _combatRez = UNKNOWN;
    connect(combat, SIGNAL(combatValue(int)), this, SLOT(takeCombatRez(int)));
    connect(combat, SIGNAL(cQueue1Change(int)), this, SLOT(takeCQueue1(int)));
    connect(combat, SIGNAL(cQueue2Change(int)), this, SLOT(takeCQueue2(int)));
    connect(combat, SIGNAL(cQueue3Change(int)), this, SLOT(takeCQueue3(int)));
    connect(combat, SIGNAL(takeMobHp(int)), this, SLOT(takeMobHp(int)));
    connect(combat, SIGNAL(takeHeroHp(int)), this, SLOT(takeHeroHp(int)));
    hero->heroStart();
    emit hasMap0_0Changed();
    emit hasMap0_1Changed();
    emit hasMap0_2Changed();
    emit hasMap1_0Changed();
    emit hasMap1_1Changed();
    emit hasMap1_2Changed();
    emit hasMap2_0Changed();
    emit hasMap2_1Changed();
    emit hasMap2_2Changed();

    emit hasMap0_0ChangedEvent();
    emit hasMap0_1ChangedEvent();
    emit hasMap0_2ChangedEvent();
    emit hasMap1_0ChangedEvent();
    emit hasMap1_1ChangedEvent();
    emit hasMap1_2ChangedEvent();
    emit hasMap2_0ChangedEvent();
    emit hasMap2_1ChangedEvent();
    emit hasMap2_2ChangedEvent();
    //for combat
    emit hasGoldChanged();
    emit hasCloverChanged();
}
void Game::combatRefresh(){
    combat->combatRefresh();
    emit hasHeroHpChange();
    emit hasMobHpChange();
    emit hasGoldChanged();
    emit hasCloverChanged();
    emit hasCombatRezChanged();
    emit hasCQueue1Changed();
    emit hasCQueue2Changed();
    emit hasCQueue3Changed();
}
