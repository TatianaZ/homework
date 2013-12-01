/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created: Wed 4. Apr 12:56:55 2012
**      by: Qt User Interface Compiler version 4.7.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QLineEdit>
#include <QtGui/QMainWindow>
#include <QtGui/QMenuBar>
#include <QtGui/QPushButton>
#include <QtGui/QStatusBar>
#include <QtGui/QToolBar>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QPushButton *pushButton_1;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QPushButton *pushButton_5;
    QPushButton *pushButton_6;
    QPushButton *pushButton_7;
    QPushButton *pushButton_8;
    QPushButton *pushButton_9;
    QPushButton *pushButton_plus;
    QPushButton *pushButton_minus;
    QPushButton *pushButton_mult;
    QPushButton *pushButton_del;
    QLineEdit *lineEdit;
    QPushButton *pushButton_rez;
    QPushButton *pushButton_0;
    QPushButton *pushButton_dot;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(293, 283);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        pushButton_1 = new QPushButton(centralWidget);
        pushButton_1->setObjectName(QString::fromUtf8("pushButton_1"));
        pushButton_1->setGeometry(QRect(140, 162, 51, 31));
        pushButton_2 = new QPushButton(centralWidget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(80, 162, 51, 31));
        pushButton_3 = new QPushButton(centralWidget);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setGeometry(QRect(20, 162, 51, 31));
        pushButton_4 = new QPushButton(centralWidget);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
        pushButton_4->setGeometry(QRect(20, 120, 51, 31));
        pushButton_5 = new QPushButton(centralWidget);
        pushButton_5->setObjectName(QString::fromUtf8("pushButton_5"));
        pushButton_5->setGeometry(QRect(80, 122, 51, 31));
        pushButton_6 = new QPushButton(centralWidget);
        pushButton_6->setObjectName(QString::fromUtf8("pushButton_6"));
        pushButton_6->setGeometry(QRect(140, 122, 51, 31));
        pushButton_7 = new QPushButton(centralWidget);
        pushButton_7->setObjectName(QString::fromUtf8("pushButton_7"));
        pushButton_7->setGeometry(QRect(20, 82, 51, 31));
        pushButton_8 = new QPushButton(centralWidget);
        pushButton_8->setObjectName(QString::fromUtf8("pushButton_8"));
        pushButton_8->setGeometry(QRect(80, 82, 51, 31));
        pushButton_9 = new QPushButton(centralWidget);
        pushButton_9->setObjectName(QString::fromUtf8("pushButton_9"));
        pushButton_9->setGeometry(QRect(140, 82, 51, 31));
        pushButton_plus = new QPushButton(centralWidget);
        pushButton_plus->setObjectName(QString::fromUtf8("pushButton_plus"));
        pushButton_plus->setGeometry(QRect(210, 82, 51, 31));
        pushButton_minus = new QPushButton(centralWidget);
        pushButton_minus->setObjectName(QString::fromUtf8("pushButton_minus"));
        pushButton_minus->setGeometry(QRect(210, 122, 51, 31));
        pushButton_mult = new QPushButton(centralWidget);
        pushButton_mult->setObjectName(QString::fromUtf8("pushButton_mult"));
        pushButton_mult->setGeometry(QRect(210, 162, 51, 31));
        pushButton_del = new QPushButton(centralWidget);
        pushButton_del->setObjectName(QString::fromUtf8("pushButton_del"));
        pushButton_del->setGeometry(QRect(210, 200, 51, 31));
        lineEdit = new QLineEdit(centralWidget);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(30, 20, 231, 41));
        QFont font;
        font.setPointSize(14);
        lineEdit->setFont(font);
        pushButton_rez = new QPushButton(centralWidget);
        pushButton_rez->setObjectName(QString::fromUtf8("pushButton_rez"));
        pushButton_rez->setGeometry(QRect(140, 200, 51, 31));
        pushButton_0 = new QPushButton(centralWidget);
        pushButton_0->setObjectName(QString::fromUtf8("pushButton_0"));
        pushButton_0->setGeometry(QRect(20, 200, 51, 31));
        pushButton_dot = new QPushButton(centralWidget);
        pushButton_dot->setObjectName(QString::fromUtf8("pushButton_dot"));
        pushButton_dot->setGeometry(QRect(80, 200, 51, 31));
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 293, 21));
        MainWindow->setMenuBar(menuBar);
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
        pushButton_1->setText(QApplication::translate("MainWindow", "1", 0, QApplication::UnicodeUTF8));
        pushButton_2->setText(QApplication::translate("MainWindow", "2", 0, QApplication::UnicodeUTF8));
        pushButton_3->setText(QApplication::translate("MainWindow", "3", 0, QApplication::UnicodeUTF8));
        pushButton_4->setText(QApplication::translate("MainWindow", "4", 0, QApplication::UnicodeUTF8));
        pushButton_5->setText(QApplication::translate("MainWindow", "5", 0, QApplication::UnicodeUTF8));
        pushButton_6->setText(QApplication::translate("MainWindow", "6", 0, QApplication::UnicodeUTF8));
        pushButton_7->setText(QApplication::translate("MainWindow", "7", 0, QApplication::UnicodeUTF8));
        pushButton_8->setText(QApplication::translate("MainWindow", "8", 0, QApplication::UnicodeUTF8));
        pushButton_9->setText(QApplication::translate("MainWindow", "9", 0, QApplication::UnicodeUTF8));
        pushButton_plus->setText(QApplication::translate("MainWindow", "+", 0, QApplication::UnicodeUTF8));
        pushButton_minus->setText(QApplication::translate("MainWindow", "-", 0, QApplication::UnicodeUTF8));
        pushButton_mult->setText(QApplication::translate("MainWindow", "*", 0, QApplication::UnicodeUTF8));
        pushButton_del->setText(QApplication::translate("MainWindow", "/", 0, QApplication::UnicodeUTF8));
        pushButton_rez->setText(QApplication::translate("MainWindow", "=", 0, QApplication::UnicodeUTF8));
        pushButton_0->setText(QApplication::translate("MainWindow", "0", 0, QApplication::UnicodeUTF8));
        pushButton_dot->setText(QApplication::translate("MainWindow", ".", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
