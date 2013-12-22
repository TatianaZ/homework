#include "network.h"

void Network::virusAttack(){
    status();
    while(check()){
        for (int i = 0; i < numberComp; i++){
            for (int j = 0; j < numberComp; j++){
                if(network[i * numberComp + j] && computer[i][0].isInfected())
                    computer[j][0].tryInfecting();
            }
        }
        status();
        step++;
    }
}
void Network::status(){
    for (int  i = 0; i < numberComp; i++){
        cout<< i + 1 << " Computer ";
        computer[i][0].status();
        cout << endl;
    }
    cout << "---Next-Step---\n";
}
bool Network::check(){
    int num = 0;
    for (int i = 0; i < numberComp; i++)
    {
        if (computer[i][0].isInfected()){
            num++;
        }
    }
    if (num == numberComp){
        return false;
    }
    return true;
}
