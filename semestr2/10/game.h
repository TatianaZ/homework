#pragma once

#include <QObject>
/**
  �����, ������������ ������� ����
  @param arrayOfSquare ������ ������
  queuePlayer ������� �����
  stepProgress ���������� ����������� �����
  */
class Game : public QObject
{
    Q_OBJECT
public:
    explicit Game(QObject *parent = 0);
    /**
      ������� ����������� ������� ������
      ���������� 1 ���� ������ 0 ���� ���
      */
    bool checkWin();
    /**
      ������� ����������� ������� ����� ����
      */
    void winnerCheck();
    
signals:
    void setProgress(int player);
    void setWin(int);
public:
    /**
      ������� �������������� ������� ��������� �������
      ���������� ������
      @return 1 ���� ������� ������ �����
      2 ���� ������� ������ �����
      0 ���� ��� �� �������� � ������ ��� ����������
      */
    int getProgress(int square);
    /**
      ������� ������������ ��� ��������� � �����������
      */
    void newGame();
private:
    int arrayOfSquare [9];
    int queuePlayer;
    int stepProgress;
};
