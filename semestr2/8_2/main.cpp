#include <QtCore/QCoreApplication>
#include "testvector.h"
int main()
{
    TestVector test;
    QTest::qExec(&test);
    
    return 0;
}
