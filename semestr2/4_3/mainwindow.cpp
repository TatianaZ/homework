#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{

    ui->setupUi(this);
    ui->lineEdit->setText("0");
    //числа
    connect(ui->pushButton_0, SIGNAL(clicked()), &map, SLOT(map()));
    map.setMapping(ui->pushButton_0, 0);
    connect(ui->pushButton_1, SIGNAL(clicked()), &map, SLOT(map()));
    map.setMapping(ui->pushButton_1, 1);
    connect(ui->pushButton_2, SIGNAL(clicked()), &map, SLOT(map()));
    map.setMapping(ui->pushButton_2, 2);
    connect(ui->pushButton_3, SIGNAL(clicked()), &map, SLOT(map()));
    map.setMapping(ui->pushButton_3, 3);
    connect(ui->pushButton_4, SIGNAL(clicked()), &map, SLOT(map()));
    map.setMapping(ui->pushButton_4, 4);
    connect(ui->pushButton_5, SIGNAL(clicked()), &map, SLOT(map()));
    map.setMapping(ui->pushButton_5, 5);
    connect(ui->pushButton_6, SIGNAL(clicked()), &map, SLOT(map()));
    map.setMapping(ui->pushButton_6, 6);
    connect(ui->pushButton_7, SIGNAL(clicked()), &map, SLOT(map()));
    map.setMapping(ui->pushButton_7, 7);
    connect(ui->pushButton_8, SIGNAL(clicked()), &map, SLOT(map()));
    map.setMapping(ui->pushButton_8, 8);
    connect(ui->pushButton_9, SIGNAL(clicked()), &map, SLOT(map()));
    map.setMapping(ui->pushButton_9, 9);

    connect(&map, SIGNAL(mapped(int)), &calcul, SLOT(getValue(int)));
    connect(&calcul, SIGNAL(rezult(QString)), ui->lineEdit, SLOT(setText(QString)));
    //операции
    connect(ui->pushButton_plus, SIGNAL(clicked()), &mapOper, SLOT(map()));
    mapOper.setMapping(ui->pushButton_plus,  0);
    connect(ui->pushButton_minus, SIGNAL(clicked()), &mapOper, SLOT(map()));
    mapOper.setMapping(ui->pushButton_minus, 1);
    connect(ui->pushButton_mult, SIGNAL(clicked()), &mapOper, SLOT(map()));
    mapOper.setMapping(ui->pushButton_mult,  2);
    connect(ui->pushButton_del, SIGNAL(clicked()), &mapOper, SLOT(map()));
    mapOper.setMapping(ui->pushButton_del,   3);
    connect(ui->pushButton_rez, SIGNAL(clicked()), &mapOper, SLOT(map()));
    mapOper.setMapping(ui->pushButton_rez,   4);
    connect(ui->pushButton_dot, SIGNAL(clicked()), &mapOper, SLOT(map()));
    mapOper.setMapping(ui->pushButton_dot, 5);

    connect(&mapOper, SIGNAL(mapped(int)), &calcul, SLOT(operation(int)));
}

MainWindow::~MainWindow()
{
    delete ui;
}
