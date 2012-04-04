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
    void operation(int op);         // ��������
    void getValue(int valueNew);    //���� �����
signals:
    void rezult(QString);   //���������
private:
    double value1;  // ��������
    double value2;  // ����� �����
    int operat;     // �������� ��� �������
    int mode;       // ����� ����� ����� {�����/���������� �����}
    int decimal;         // ���������� ������ ����� �������� ��� �����
    bool firstTime; // ������ ������� ����� �����
};

#endif // CALCULATE_H
