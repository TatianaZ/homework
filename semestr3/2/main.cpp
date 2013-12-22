#include <iostream>
#include "network.h"
#include "testnet.h"
using namespace std;

int main()
{
    TestNet testNet;
    QTest::qExec(&testNet);
   // return 0;
}

