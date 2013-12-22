#include <QtCore/QCoreApplication>
#include <iostream>
#include "robot.h"
#include "testrobot.h"

using namespace std;


int main()
{
    TestRobot testRobot;
    QTest::qExec(&testRobot);
    return 0;
}
