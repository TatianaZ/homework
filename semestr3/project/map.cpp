#include "map.h"

Map::Map(QObject *parent = 0){
    _x = 22; level = 1; size = 10;

    map1T = levelTexture();
    map1Event = levelEvent();
    map1Path = levelPath();

    mapSet();
}
void Map::goLeft(){
    if (map1Path[_x - 1]){
        _x -= 1;
        mapSet();
    }
}
void Map::goRight(){
    if (map1Path[_x + 1]){
        _x +=1;
        mapSet();

    }
}
void Map::goUp(){
    if (map1Path[_x + size]){
        _x += size;
        mapSet();
    }
}
void Map::goDown(){
    if (map1Path[_x - size]){
        _x -= size;
        mapSet();
    }
}
void Map::takeEvent(){
    map1Event[_x] = NOTHING;
    _map1_1 = NOTHING;
    emit hasMap1_1ChangedEvent(_map1_1event);
}

void Map::mapSet(){
    _map0_0 = map1T[_x - size - 1]; _map0_1 = map1T[_x - size];   _map0_2 = map1T[_x - size + 1];
    _map1_0 = map1T[_x - 1];        _map1_1 = map1T[_x];          _map1_2 = map1T[_x + 1];
    _map2_0 = map1T[_x + size - 1];  _map2_1 = map1T[_x + size];  _map2_2 = map1T[_x + size + 1];

    _map0_0event = map1Event[_x - size - 1];  _map0_1event = map1Event[_x - size];  _map0_2event = map1Event[_x - size + 1];
    _map1_0event = map1Event[_x - 1];         _map1_1event = map1Event[_x];         _map1_2event = map1Event[_x + 1];
    _map2_0event = map1Event[_x + size - 1];  _map2_1event = map1Event[_x + size];  _map2_2event = map1Event[_x + size + 1];

    emit hasMap0_0Changed(_map0_0); emit hasMap0_1Changed(_map0_1); emit hasMap0_2Changed(_map0_2);
    emit hasMap1_0Changed(_map1_0); emit hasMap1_1Changed(_map1_1); emit hasMap1_2Changed(_map1_2);
    emit hasMap2_0Changed(_map2_0); emit hasMap2_1Changed(_map2_1); emit hasMap2_2Changed(_map2_2);

    emit hasMap0_0ChangedEvent(_map0_0event); emit hasMap0_1ChangedEvent(_map0_1event); emit hasMap0_2ChangedEvent(_map0_2event);
    emit hasMap1_0ChangedEvent(_map1_0event); emit hasMap1_1ChangedEvent(_map1_1event); emit hasMap1_2ChangedEvent(_map1_2event);
    emit hasMap2_0ChangedEvent(_map2_0event); emit hasMap2_1ChangedEvent(_map2_1event); emit hasMap2_2ChangedEvent(_map2_2event);
}

int* Map::levelTexture()
{
    int level1T[100] = {-1,  0,  0,  0,  0,  0,  0, -1,  0,  0,
                        -1,  1,  1,  1,  1,  1,  1, -1,  0,  0,
                        -1,  1,  1,  1,  1,  1,  1, -1,  0, -1,
                        -1,  2,  1,  1,  1,  1,  1,  1,  1, -1,
                        -1,  1,  1,  1,  1,  1,  1,  1,  1, -1,
                        -1,  2,  1,  1,  1,  1,  1,  2, -1, -3,
                        -1,  1,  2,  1,  1,  1,  1,  1, -1, -3,
                        -1,  1,  1,  1,  1,  1,  1, -4, -4, -3,
                        -2, -2,  1,  1, -2,  1,  1, -4, -3, -3,
                        -2, -2, -2, -2, -2, -2, -2, -3, -3, -3};
    int *temp;
    if (level == 1){
        temp = new int[100];
        for (int i = 0; i < 100; i++){
            temp[i] = level1T[i];
        }
        return temp;
    }
}
int* Map::levelPath(){
    int level1Path[100] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
                           0, 1, 1, 1, 1, 1, 1, 0, 0, 0,
                           0, 1, 1, 1, 1, 1, 1, 0, 0, 0,
                           0, 1, 1, 1, 1, 1, 1, 1, 1, 0,
                           0, 1, 1, 1, 1, 1, 1, 1, 1, 0,
                           0, 1, 1, 1, 1, 1, 1, 1, 0, 0,
                           0, 1, 1, 1, 1, 1, 1, 1, 0, 0,
                           0, 1, 1, 1, 1, 1, 1, 1, 0, 0,
                           0, 0, 1, 1, 0, 1, 0, 0, 0, 0,
                           0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    int *temp;
    if (level == 1){
        temp = new int[100];
        for (int i = 0; i < 100; i++){
            temp[i] = level1Path[i];
        }
        return temp;
    }
}
int* Map::levelEvent(){
    int level1Event[100] = {0, 0,       0,      0,      0,      0,    0,      0, 0, 0,
                            0, 0,       0,      CLOVER, 0,      0,    BUSH,   0, 0, 0,
                            0, BUSH,    0,      BATS,   0,      BATS, CLOVER, 0, 0, 0,
                            0, 0,       0,      0,      0,      0,    0,      0, 0, 0,
                            0, 0,       0,      CLOVER, CLOVER, 0,    BATS,   0, 0, 0,
                            0, CLOVER,  0,      CLOVER, CLOVER, 0,    0,      0, 0, 0,
                            0, 0,       0,      0,      0,      0,    0,      0, 0, 0,
                            0, 0,       CLOVER, 0,      CLOVER, 0,    0,      5, 0, 0,
                            0, 0,       CHEST,  BUSH,   0,      0,    0,      0, 0, 0,
                            0, 0,       0,      0,      0,      0,    0,      0, 0, 0};
    int *temp;
    if (level == 1){
        temp = new int[100];
        for (int i = 0; i < 100; i++){
            temp[i] = level1Event[i];
        }
        return temp;
    }
}

Map::~Map(){
    delete map1T;
    delete map1Path;
    delete map1Event;
}
