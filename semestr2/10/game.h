#pragma once

#include <QObject>
/**
  класс, определ€ющий процесс игры
  @param arrayOfSquare массив клеток
  queuePlayer текущий игрок
  stepProgress количество совершенных шагов
  */
class Game : public QObject
{
    Q_OBJECT
public:
    explicit Game(QObject *parent = 0);
    /**
      функци€ провер€юща€ условие победы
      возвращает 1 если победа 0 если нет
      */
    bool checkWin();
    /**
      функци€ провер€юща€ услови€ конца игры
      */
    void winnerCheck();
    
signals:
    void setProgress(int player);
    void setWin(int);
public:
    /**
      функци€ осуществл€юща€ процесс заолнени€ массива
      пройденных клеток
      @return 1 если походил первый игрок
      2 если походил второй игрок
      0 если ход не совершен и клетка уже заполненна
      */
    int getProgress(int square);
    /**
      функци€ возвращающа€ все параметры к изначальным
      */
    void newGame();
private:
    int arrayOfSquare [9];
    int queuePlayer;
    int stepProgress;
};
