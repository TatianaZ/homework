#include <iostream>
#include "testFindNull.h"
using namespace std;

int main()
{
    testFindNull testFunc;
    QTest::qExec(&testFunc);
    return 0;
}


