#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include <QSignalMapper>
#include <QMainWindow>
#include "calculate.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT
    
public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
    
private:
    Ui::MainWindow *ui;
    QSignalMapper map; //= new QSignalMapper(0);
    Calculate calcul; //= new calculate();
    QSignalMapper mapOper; //= new QSignalMapper(0);
};

#endif // MAINWINDOW_H
