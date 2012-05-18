#include <QtCore/QCoreApplication>
#include "testlist.h"
#include "testbubble.h"
#include "testcompare.h"
int main()
{
    TestList test;
    TestBubble testBubble;
    TestCompare testCompare;
    QTest::qExec(&test);
    QTest::qExec(&testBubble);
    QTest::qExec(&testCompare);
    return 0;
}
