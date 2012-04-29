#pragma once
#include <QObject>
#include <QString>
/**
  @brief класс, в который обрабатывает действия в калькуляторе
  @param
    value1  значение
    value2 новое число
    operat действие над числами
    mode режим ввода числа {целая/десятичная часть}
    decimal  количество знаков после заптятой при вводе
    firstTime  флажок первого ввода числа
  */
class Calculate : public QObject
{
    Q_OBJECT
public:
    Calculate();
public slots:
    /**
      @brief функция, в которой совершаются действия над числами
      @param op нажатая операция
      */
    void operation(int op);
    /**
      @brief функция, которая обрабатывет нажатые клавиши с числами
      @param valueNew нажатая кнопка с числом
      */
    void getValue(int valueNew);
signals:
    /**
      сигнал, который должен посылать результат
      в нужный слот
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
