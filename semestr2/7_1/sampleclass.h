#pragma once
#include <iostream>
#include <stdexcept>
using namespace std;
class SampleClass
{
public:
    SampleClass()
    {
        cout << "constructed\n";
    }

    ~SampleClass()
    {
        cout << "destructed\n";
    }
    void sampleFunction()
    {
        cout << "sample function\n";
        throw Error();
    }
    class Error
    {
    public:
        Error()
        {
            cout << "error\n";
        }
    };
};


