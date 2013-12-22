#include "computer.h"
Computer :: Computer(int _os, int _infected) : infected(_infected)
{
    switch (_os){
    case 1: os = new Windows();
        break;
    case 2: os = new Linux();
        break;
    case 3: os = new TestOs(); // имеет 100% вероятность заразится
        break;
    }
}
void Computer ::status(){
    os->status();
    cout << " status:";
    if (infected){
        cout << " infected";
    }
    else{
        cout << " normal";
    }
}
