#ifndef CALCUL_H
#define CALCUL_H
#include "linkedstack.h"

class Calcul
{
public:
    Calcul();
    int queueCalcul(BaseStack *stack, char *str, int size);
};

#endif // CALCUL_H
