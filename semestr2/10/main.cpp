#include <QtGui/QApplication>
#include "thegamecell.h"
#include "testgame.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    TestGame test;
    QTest::qExec(&test);
    TheGameCell w;
    w.show();

    return a.exec();
}
