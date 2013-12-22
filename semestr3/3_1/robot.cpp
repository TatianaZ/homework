#include "robot.h"

void Robot::nVertex(int *mas)
{
    for(int i = 0; i < size * size; i++){
        masV[i] = 0;
    }
    for (int k = 0; k < size; k++){
        for (int i = 0; i < size; i++){
            if (mas[size * k + i]){
                for(int j = 0; j < size; j++){
                    if (mas[size * i + j]) masV[size * k + j] = 1;
                    if (k == j){
                        masV[size * k + j] = 0;
                    }
                }
            }
        }
    }
 /*   cout << endl;
    for(int i = 0; i < size; i++){
        for(int j = 0; j < size; j++)
        cout << masV[size * i + j];
        cout << endl;
    }*/
}
bool Robot::check2(int robot1, int robot2, int *checkV)
{
    checkV[robot1] = 1;
    if (robot1 == robot2){
        return true;
    }
    for(int i = 0; i < size; i++){
        if (masV[robot1 * size + i]){
            if (i == robot2){
                return true;
            }
            if (!checkV[i]){
               return check2( i, robot2, checkV);
            }
        }
    }
    return false;
}
bool Robot::check()
{
    if (!num){
        return false;
    }
    int v1 = 0;
    int v2 = 0;
    int checkMas[num];
    for (int j = 0; j < size; j++)
        checkMas[j] = 0;
    for (int i = 0; i < num; i ++){
        if (check2(0, robots[i], checkMas)){
            v1 ++;
        }
        else v2++;
    }
    if (v1 == 1 || v2 == 1){
        return false;
    }
    return true;
}
