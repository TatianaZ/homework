#include <QtCore/QCoreApplication>
#include "testlist.h"
#include "testbag.h"
int main()
{
    TestList testList;
    TestBag testBag;
    QTest::qExec(&testList);
    QTest::qExec(&testBag);
    
    return 0;
}
