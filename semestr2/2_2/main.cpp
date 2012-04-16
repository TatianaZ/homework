#include "calcul.h"

int main()
{
    BaseStack *stack1;
    BaseStack *stack2;
    Calcul newCalcul;

    char a[] = "1 1 2 + 5 * +"; // 1 + (1 + 2) * 5 = 16
    stack1 = new MasStack();
    stack2 = new LinkedStack();

    cout << newCalcul.queueCalcul(stack1, a, 14) << "\n";
    cout << newCalcul.queueCalcul(stack2, a, 14) << "\n";

    delete stack1;
    delete stack2;
    return 0;
}

