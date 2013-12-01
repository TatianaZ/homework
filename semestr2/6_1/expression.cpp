#include "expression.h"

Expression::Expression(string& str)
{
    str.erase(0, 1);
    operation = str[0];
    str.erase(0, 1);
    left = add(str);
    right = add(str);
}

Base* Expression::add(string& str)
{
    if (str[0] != '\0')
    {
        Base *newElement;
        str.erase(0, 1);
        if (str[0] == '(')
        {
            newElement = new Expression(str);
        }
        else
        {
            newElement = new Digit(str);
        }
        return newElement;
    }
    return NULL;
}

double Expression::calculate()
{
    switch (operation)
    {
    case '+': return left->calculate() + right->calculate();
        break;
    case '-': return left->calculate() - right->calculate();
        break;
    case '*': return left->calculate() * right->calculate();
        break;
    case '/': return left->calculate() / right->calculate();
        break;
    }
}

void Expression::show()
{
    cout << "(";
    cout << operation << " ";
    left->show();
    cout << " ";
    right->show();
    cout << ")";
}
