#include "thegamecell.h"

TheGameCell::TheGameCell(QWidget *parent) :
    QWidget(parent)
{
    setWindowTitle("The Game");
    QGridLayout *cell = new QGridLayout;
    for (int rows = 0; rows < 3; rows++)
    {
        for (int cols = 0; cols < 3; cols++)
        {
            QPushButton *button = new QPushButton;
            button->setMaximumSize(60, 60);
            button->setMinimumSize(60, 60);
            cell->addWidget(button, cols, rows);
            mapCell.setMapping(button, cols * 3 + rows);
            connect(button, SIGNAL(clicked()), &mapCell, SLOT(map()));
        }
    }
    setLayout(cell);
    connect(&mapCell, SIGNAL(mapped(int)), this, SLOT(setProgress(int)));
    connect(&game, SIGNAL(setWin(int)), this, SLOT(messageShow(int)));
}
void TheGameCell::setProgress(int cell)
{
    QPushButton *current = qobject_cast<QPushButton*>(mapCell.mapping(cell));
    if (game.getProgress(cell) == 1)
    {
        current->setText("X");
    }
    else
        if (game.getProgress(cell) == 2)
        {
            current->setText("O");
        }
    game.winnerCheck();

}
void TheGameCell::messageShow(int winner)
{
    message = new QMessageBox (QMessageBox::Question, "Game over", "", QMessageBox::Ok | QMessageBox::Cancel);
    switch (winner)
    {
    case 2: message->setText("X is winner. New Game?");
        break;
    case 1: message->setText("O is winner. New Game?");
        break;
    case 3: message->setText("No one is winner. New game?");
        break;
    }
    if (message->exec() == QMessageBox::Ok)
    {
        newGame();
    }
    else
    {
        exit(0);
    }
}
void TheGameCell::newGame()
{
    for (int i = 0; i < 9; i++)
    {
        qobject_cast<QPushButton*>(mapCell.mapping(i))->setText("");
    }
   game.newGame();
}
