#include <QtCore/QCoreApplication>
#include "testcalculate.h"

int main()
{
    TestCalculate test;
    QTest::qExec(&test);
    //string str = "(* 2 (+ 27 33))";
    //Expression expr(str);
    //cout << "\n"<<expr.calculate()<<"\n";
    //expr.show();
    
    return 0;
}
