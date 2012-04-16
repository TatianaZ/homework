#include "calculate.h"

Calculate::Calculate()
{
    value1 = 0;
    value2 = 0;
    mode = 0;
    firstTime = 1;
    decimal = 0;
    emit rezult("0");
}

void Calculate::operation(int op){
    QString temp;

    mode = 0;

    if (op == 5)
    {
        emit rezult(temp.setNum(value2, 'f', 0) + '.');
        mode = 1;
        return;
    }
    if (firstTime == 1)
    {
        value1 = value2;
        value2 = 0;
        firstTime = 0;
    }
    if (op == 4)
    {
        switch (operat)
        {
            case 0:
                value1 += value2;
                break;
            case 1:
                value1 -= value2;
                break;
            case 2:
                value1 *= value2;
                break;
            case 3:
                value1 /= value2;
                break;
        }
        value2 = 0;
        emit rezult(temp.setNum(value1, 'f', 5));

    }
    else  // пересчет
    {
        switch (operat)
        {
            case 0:
                value1 += value2;
                break;
            case 1:
                value1 -= value2;
                break;
            case 2:
                value1 *= value2;
                break;
            case 3:
                value1 /= value2;
                break;
        }
        value2 = 0;
        emit rezult(temp.setNum(value1, 'f', 5));
    }


    operat = op;
    decimal = 0;
}
void Calculate::getValue(int valueNew){
    QString temp;
    double num = 1;

    if (mode == 0 )
    {
        if (value2 == 0) {
            value2 = valueNew;
        }
        else {
            value2 = value2 * 10 + valueNew;
        }
        emit rezult(temp.setNum(value2, 'f', 0));
    }
    else
    {
        decimal++;
        for (int i = 0; i < decimal; i++)
        {
            num *= 0.1;
        }
        value2 +=(double)(valueNew * num);
        emit rezult(temp.setNum(value2, 'f', decimal));
    }
}
