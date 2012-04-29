#pragma once
#include <QObject>
#include <QString>
/**
  @brief �����, � ������� ������������ �������� � ������������
  @param
    value1  ��������
    value2 ����� �����
    operat �������� ��� �������
    mode ����� ����� ����� {�����/���������� �����}
    decimal  ���������� ������ ����� �������� ��� �����
    firstTime  ������ ������� ����� �����
  */
class Calculate : public QObject
{
    Q_OBJECT
public:
    Calculate();
public slots:
    /**
      @brief �������, � ������� ����������� �������� ��� �������
      @param op ������� ��������
      */
    void operation(int op);
    /**
      @brief �������, ������� ����������� ������� ������� � �������
      @param valueNew ������� ������ � ������
      */
    void getValue(int valueNew);
signals:
    /**
      ������, ������� ������ �������� ���������
      � ������ ����
      */
    void rezult(QString);
private:
    double value1;
    double value2;
    int operat;
    int mode;
    int decimal;
    bool firstTime;
};
