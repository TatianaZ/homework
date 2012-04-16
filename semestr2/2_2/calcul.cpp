#include "calcul.h"

Calcul::Calcul()
{
}
int Calcul::queueCalcul(BaseStack *stack, char *str, int size)
{
    int i = 0;
    int num = 0;
    int operation = 0;

    while (i < size)
    {
        if (str[i] >= '0' && str[i] <= '9')  // ищет число и толкает его потом в стек
        {
            num = num * 10 + (str[i] - 48);
            i++;
            if (str[i] == ' ')
            {
                stack->push(num);
                num = 0;
                i++;
            }
            continue;
        }
        if (operation == 0) // проверяет есть ли операция которую надо сделать
        {
            switch (str[i])
            {
                case '+': operation = 1;
                    break;
                case '-': operation = 2;
                    break;
                case '*': operation = 3;
                    break;
                case '/': operation = 4;
                    break;
            }
            i ++;
            continue;
        }
        switch (operation) // делает действие и пихает результат в стек
        {
            case 1: stack->push(stack->pop() + stack->pop());
                break;
            case 2: stack->push(stack->pop() - stack->pop());
                break;
            case 3: stack->push(stack->pop() * stack->pop());
                break;
            case 4: stack->push(stack->pop() / stack->pop());
                break;
        }
        operation = 0;
    }
    return stack->pop();
}
