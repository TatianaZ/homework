#include "pair.h"

Pair::Pair()
{
    number1 = 0;
    number2 = 0;
}
Pair::Pair(double newNumber1, double newNumber2)
{
    number1 = newNumber1;
    number2 = newNumber2;
}

void Pair::multipleNumbers(double num)
{
    number1 *= num;
    number2 *= num;
}

void Pair::plusNumbers(Pair* newPair)
{
    number1 += newPair->number1;
    number2 += newPair->number2;
}
void Pair::showPair()
{
    cout << "(" << number1 << ", " << number2 << ")\n";
}
void Pair::setNumbers(double newNumber1, double newNumber2)
{
    number1 = newNumber1;
    number2 = newNumber2;
}
