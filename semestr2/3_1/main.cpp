#include "shellsort.h"
#include "testbublesort.h"
#include "testshellsorting.h"

int main()
{
    TestBubleSort testBubleSort;
    TestShellSorting testShellSorting;
    QTest::qExec(&testBubleSort);
    QTest::qExec(&testShellSorting);
}

