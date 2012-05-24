#pragma once
#include <QtCore/QObject>
#include <QtTest/QtTest>
#include "game.h"
class TestGame : public QObject
{
    Q_OBJECT
public:
    explicit TestGame(QObject *parent = 0):QObject(parent){}
private slots:
    void init()
    {
        game = new Game();
    }
    void cleanup()
    {
        delete game;
    }
    void testWins()
    {
        int playersStepX[] = {0, 2, 4, 5, 8};
        int playersStepY[] = {2, 0, 5, 4, 7, 8};
        int player;
        for(int i = 0; i < 5; i++)
        {
            player = game->getProgress(playersStepX[i]);
        }
        QVERIFY(game->checkWin() == 1);
        game->newGame();
        for(int i = 0; i < 6; i++)
        {
            player = game->getProgress(playersStepY[i]);
        }
        QVERIFY(game->checkWin() == 1);
    }

private:
    Game *game;
    
};

