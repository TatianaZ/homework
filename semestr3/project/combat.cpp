#include "combat.h"

void Combat::createLeadQueue(){
    if ((hero->takeLead() > hero->takeRabbitLead()) && (hero->takeLead() > mob->takeLead())){
        //hero-(mob|rabbit)
        lead[0] = HERO_ACTION;
        if (hero->takeRabbitLead() > mob->takeLead()){
            lead[1] = RABBIT_ACTION;
            lead[2] = MOB_ACTION;
        } else{
            lead[2] = RABBIT_ACTION;
            lead[1] = MOB_ACTION;
        }
    }
    if ((hero->takeRabbitLead() > hero->takeLead()) && (hero->takeRabbitLead() > mob->takeLead()))
    {
        //rabbit-(mob|hero)
        lead[0] = RABBIT_ACTION;
        if (hero->takeLead() > mob->takeLead()){
            lead[1] = HERO_ACTION;
            lead[2] = MOB_ACTION;
        } else{
            lead[2] = HERO_ACTION;
            lead[1] = MOB_ACTION;
        }
    }
    if (( mob->takeLead() > hero->takeLead()) && (mob->takeLead() > hero->takeRabbitLead())){
        //mob-(hero|rabbit)
        lead[0] = HERO_ACTION;
        if (hero->takeRabbitLead() > hero->takeLead()){
            lead[1] = RABBIT_ACTION;
            lead[2] = MOB_ACTION;
        } else{
            lead[2] = RABBIT_ACTION;
            lead[1] = MOB_ACTION;
        }
    }
}
void Combat::combatQueue(){
    int temp = lead[0];
    lead[0] = lead[1];
    lead[1] = lead[2];
    lead[2] = temp;
    emit cQueue1Change(lead[0]);
    emit cQueue2Change(lead[1]);
    emit cQueue3Change(lead[2]);
}
void Combat::startCombat(int monsterName){
    switch(monsterName)
    {
    case BAT: mob = new Bat(); break;
    }
    connect(mob, SIGNAL(mobIsLive()), this, SLOT(nextAction()));
    connect(mob, SIGNAL(mobDie()), this, SLOT(combatWin()));
    connect(hero, SIGNAL(heroIsLive()), this, SLOT(nextAction()));
    connect(hero, SIGNAL(heroDie()), this, SLOT(pwns()));
    createLeadQueue();
}
