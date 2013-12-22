#pragma once
#include <iostream>

using namespace std;

class Os
{
public:
    int getVirusChance(){
        return virusChance;
    }
    virtual void status() = 0;
protected:
    int virusChance;
};

class Windows : public Os
{
public:
    Windows(){
       virusChance = 50;
    }
    void status(){
        cout << "os: Windows";
    }
};

class Linux : public Os
{
public:
    Linux(){
        virusChance = 25;
    }
    void status(){
        cout << "os: Linux";
    }
};
class TestOs : public Os
{
public:
    TestOs(){
        virusChance = 0;
    }
    void status(){
        cout << "os: TestOs";
    }
};
