#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->Rezult->setText("0");
    connect(ui->argument_1, SIGNAL(valueChanged(int)),
            &actions, SLOT(getData1(int)));
    connect(ui->argument_2, SIGNAL(valueChanged(int)),
            &actions, SLOT(getData2(int)));
    connect(ui->operations, SIGNAL(currentIndexChanged(int)),
            &actions, SLOT(getOp(int)));
    connect(&actions, SIGNAL(newValue(QString)),
            ui->Rezult, SLOT(setText(QString)));
}

MainWindow::~MainWindow()
{
    delete ui;
}
