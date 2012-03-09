#include "actions.h"

Actions::Actions()
{
    data1 = 0;
    data2 = 0;
    op = 0;
    rezult = 0;
}
void Actions::rezultV(){
    QString rez;
    switch (op)
    {
        case 0:
        {
            rezult = data1 + data2;
            break;
        }
        case 1:
        {
            rezult = data1 - data2;
            break;
        }
        case 2:
        {
            rezult = data1 * data2;
            break;
        }
    }
    emit newValue(rez.setNum(rezult));
}

void Actions::getData1(int data)
{
    data1 = data;
    rezultV();
}
void Actions::getData2(int data)
{
    data2 = data;
    rezultV();
}
void Actions::getOp(int data)
{
    op = data;
    rezultV();
}
