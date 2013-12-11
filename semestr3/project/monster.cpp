#include "monster.h"
void Monster::takeDamage(int _damage){
    hp -= _damage;
    if (hp <= 0){
        emit mobDie();
    }
 //   emit mobIsLive();
}
