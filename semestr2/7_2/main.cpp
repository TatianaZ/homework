#include <QtCore/QCoreApplication>
#include "testuniquelist.h"
#include "testlist.h"

int main()
{
    TestUniqueList testUniqueList;
    TestList testList;
    QTest::qExec(&testList);
    QTest::qExec(&testUniqueList);
    return 0;
}
