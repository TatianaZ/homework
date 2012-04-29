#include "testlist.h"
#include "testdoublelist.h"

int main()
{
    TestList test;
    TestDoubleList testDoubleList;
    QTest::qExec(&test);
    QTest::qExec(&testDoubleList);
}
