#include "calculate.h"
#include "testarraystack.h"
#include "testlinkedstack.h"
#include "testcalculate.h"
int main()
{
    TestArrayStack testArrayStack;
    TestLinkedStack testLinkedStack;
    TestCalculate testCalculate;

    QTest::qExec(&testArrayStack);
    QTest::qExec(&testLinkedStack);
    QTest::qExec(&testCalculate);
}

