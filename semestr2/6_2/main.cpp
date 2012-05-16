#include <QtCore/QCoreApplication>
#include "set.h"
#include "settest.h"

int main()
{
    SetTest setTest;
    QTest::qExec(&setTest);
    
    return 0;
}
