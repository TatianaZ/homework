#include "digit.h"

Digit::Digit(string& str)
{
    value = str[0] - '0';
    str.erase(0, 1);
    while((str[0] > '0') && (str[0] < '9'))
    {
        value = value * 10 + (str[0] - '0');
        str.erase(0, 1);
    }
}

double Digit::calculate()
{
    return value;
}

void Digit::show()
{
    cout << value;
}
