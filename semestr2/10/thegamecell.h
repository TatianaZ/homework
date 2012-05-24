#pragma once
#include <QSignalMapper>
#include <QMessageBox>
#include <QGridLayout>
#include <QPushButton>

#include <QWidget>
#include "game.h"
/**
   �����, � ������� ������ ������� ����������� ��������� ����
   mapCell QSignalMapper � �������� ����� ��������� ������
   game ��������� ����
   message ���������� ����
  */
class TheGameCell : public QWidget
{
    Q_OBJECT
public:
    /**
      ����������� ����, � ������� ��������� ������� �� ������ �
      ���� ��� ������ ���������
      */
    explicit TheGameCell(QWidget *parent = 0);
    /**
      ������� ��������������� ��������� � �����������
      */
    void newGame();
public slots:
    /**
      �������, � ������� ������� ������� ���������� ������
      */
    void setProgress(int cell);
    /**
      ������� ���������� ���� � ���������� � ������
      @param winner ���������� �����, ���� �����
      */
    void messageShow(int winner);
private:
   QSignalMapper mapCell;
   Game game;
   QMessageBox *message;
};

