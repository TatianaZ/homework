#include "calculate.h"

Calculate::Calculate()
{
}
int Calculate::queueCalculate(BaseStack *stack, char *str, int size)
{
    Actions actions;
    int i = 0;
    int num = 0;

    actions = nothing;
    while (i < size)
    {
        if (str[i] >= '0' && str[i] <= '9')  // ���� ����� � ������� ��� ����� � ����
        {
            num = num * 10 + (str[i] - '0');
            i++;
            if (str[i] == ' ')
            {
                stack->push(num);
                num = 0;
                i++;
            }
            continue;
        }
        if (actions == nothing) // ��������� ���� �� �������� ������� ���� �������
        {
            switch (str[i])
            {
                case '+': actions = actionPlus;
                    break;
                case '-': actions = actionMinus;
                    break;
                case '*': actions = actionMultiple;
                    break;
                case '/': actions = actionDivision;
                    break;
            }
            i++;
            continue;
        }
        switch (actions) // ������ �������� � ������ ��������� � ����
        {
            case actionPlus: stack->push(stack->pop() + stack->pop());
                break;
            case actionMinus: stack->push(stack->pop() - stack->pop());
                break;
            case actionMultiple: stack->push(stack->pop() * stack->pop());
                break;
            case actionDivision: stack->push(stack->pop() / stack->pop());
                break;
        }
        actions = nothing;
    }
    return stack->pop();
}
