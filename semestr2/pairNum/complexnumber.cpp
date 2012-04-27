#include "complexnumber.h"

ComplexNumber::ComplexNumber()
{
    number1 = 0;
    number2 = 0;
}
ComplexNumber::ComplexNumber(double newNumber1, double newNumber2)
{
    number1 = newNumber1;
    number2 = newNumber2;
}
void ComplexNumber::multipleComplexNumber(ComplexNumber *newNumber)
{
    double tempNumber1;
    double tempNumber2;

    tempNumber1 = number1 * newNumber->number1 - number2 * newNumber->number2;
    tempNumber2 = number1 * newNumber->number2 + number2 * newNumber->number1;

    number1 = tempNumber1;
    number2 = tempNumber2;
}

double ComplexNumber::absComplexNumber()
{
    return sqrt(number1 * number1 + number2 * number2);
}
