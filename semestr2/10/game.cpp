#include "game.h"

Game::Game(QObject *parent) :
    QObject(parent)
{
    for (int i = 0; i < 9; i++)
    {
        arrayOfSquare[i] = 0;
    }
    queuePlayer = 1;
    stepProgress = 0;
}
int Game::getProgress(int square)
{
    if (arrayOfSquare[square] == 0)
    {
        stepProgress++;
        if (queuePlayer == 1)
        {
            queuePlayer = 2;
            arrayOfSquare[square] = 1;
            return 1;
        }
        else
        {
            queuePlayer = 1;
            arrayOfSquare[square] = 2;
            return 2;
        }
    }
}
bool Game::checkWin()
{
    int winCombinations [8][3] = {
        {0,1,2},{3,4,5},{6,7,8},{0,3,6},
        {1,4,7},{2,5,8},{0,4,8},{2,4,6}
    };
    int tempPlayer;
    if (queuePlayer == 2)
    {
        tempPlayer = 1;
    }
    else
    {
        tempPlayer = 2;
    }
    for (int i = 0; i < 8; i++)
    {
        if ((arrayOfSquare[winCombinations[i][0]] == tempPlayer)&&
            (arrayOfSquare[winCombinations[i][1]] == tempPlayer)&&
            (arrayOfSquare[winCombinations[i][2]] == tempPlayer))
        {
            return true;
        }
    }
    return false;
}
void Game::newGame()
{
    for (int i = 0; i < 9; i++)
    {
        arrayOfSquare[i] = 0;
    }
    stepProgress = 0;
    queuePlayer = 1;
}
void Game::winnerCheck()
{
    if (checkWin())
    {
        if (queuePlayer == 2)
        {
            setWin(2);
            return;
        }
        else
        {
            setWin(1);
            return;
        }
    }
    if (stepProgress == 9)
    {
        setWin(3);
    }
}
