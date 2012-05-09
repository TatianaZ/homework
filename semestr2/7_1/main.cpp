#include <QtCore/QCoreApplication>
#include "sampleclass.h"

int main()
{
    try
    {
        SampleClass tmp;
        tmp.sampleFunction();
    }
    catch(SampleClass::Error &)
    {
        cout << "caught \n";
    }

    return 0;
}
