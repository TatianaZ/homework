/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created: Thu 8. Mar 20:21:03 2012
**      by: Qt User Interface Compiler version 4.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QComboBox>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QMainWindow>
#include <QtGui/QSpinBox>
#include <QtGui/QStatusBar>
#include <QtGui/QToolBar>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QSpinBox *argument_1;
    QComboBox *operations;
    QSpinBox *argument_2;
    QLineEdit *Rezult;
    QLabel *label;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(323, 121);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        argument_1 = new QSpinBox(centralWidget);
        argument_1->setObjectName(QString::fromUtf8("argument_1"));
        argument_1->setGeometry(QRect(20, 30, 61, 51));
        QFont font;
        font.setPointSize(14);
        argument_1->setFont(font);
        argument_1->setLayoutDirection(Qt::LeftToRight);
        argument_1->setButtonSymbols(QAbstractSpinBox::UpDownArrows);
        operations = new QComboBox(centralWidget);
        operations->setObjectName(QString::fromUtf8("operations"));
        operations->setGeometry(QRect(90, 30, 51, 51));
        QFont font1;
        font1.setPointSize(18);
        operations->setFont(font1);
        operations->setAcceptDrops(false);
        argument_2 = new QSpinBox(centralWidget);
        argument_2->setObjectName(QString::fromUtf8("argument_2"));
        argument_2->setGeometry(QRect(150, 30, 61, 51));
        QFont font2;
        font2.setPointSize(16);
        argument_2->setFont(font2);
        Rezult = new QLineEdit(centralWidget);
        Rezult->setObjectName(QString::fromUtf8("Rezult"));
        Rezult->setGeometry(QRect(250, 30, 51, 51));
        QFont font3;
        font3.setPointSize(24);
        Rezult->setFont(font3);
        Rezult->setReadOnly(true);
        label = new QLabel(centralWidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(220, 40, 21, 21));
        QFont font4;
        font4.setPointSize(28);
        label->setFont(font4);
        MainWindow->setCentralWidget(centralWidget);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "Calculator", 0, QApplication::UnicodeUTF8));
        operations->clear();
        operations->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "+", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "-", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "*", 0, QApplication::UnicodeUTF8)
        );
        label->setText(QApplication::translate("MainWindow", "=", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
