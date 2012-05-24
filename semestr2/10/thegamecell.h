#pragma once
#include <QSignalMapper>
#include <QMessageBox>
#include <QGridLayout>
#include <QPushButton>

#include <QWidget>
#include "game.h"
/**
   класс, в котором описан процесс графический интерфейс игры
   mapCell QSignalMapper к которому будут крепиться кнопки
   game инетрфейс игры
   message диалоговое окно
  */
class TheGameCell : public QWidget
{
    Q_OBJECT
public:
    /**
      конструктор окна, в котором создается таблица из кнопок и
      окно для вызова сообщения
      */
    explicit TheGameCell(QWidget *parent = 0);
    /**
      функция оприравнивающая параметры к изначальным
      */
    void newGame();
public slots:
    /**
      функция, в которой описанн процесс заполнения клеток
      */
    void setProgress(int cell);
    /**
      функция вызывающая окно с сообщением о победе
      @param winner победивший игрок, либо ничья
      */
    void messageShow(int winner);
private:
   QSignalMapper mapCell;
   Game game;
   QMessageBox *message;
};

