#ifndef CALCULATE_H
#define CALCULATE_H
#include <QObject>
#include <QString>
class Calculate : public QObject
{
    Q_OBJECT
public:
    Calculate();
public slots:
    void operation(int op);         // действия
    void getValue(int valueNew);    //ввод числа
signals:
    void rezult(QString);   //результат
private:
    double value1;  // значение
    double value2;  // новое число
    int operat;     // действие над числами
    int mode;       // режим ввода числа {целая/десятичная часть}
    int decimal;         // количество знаков после заптятой при вводе
    bool firstTime; // флажок первого ввода числа
};

#endif // CALCULATE_H
