#include "pairclasstest.h"
#include "complexnumbersclasstest.h"

int main()
{
    PairClassTest test;
    ComplexNumbersClassTest test2;
    QTest::qExec(&test);
    QTest::qExec(&test2);
}
