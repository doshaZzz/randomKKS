/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QPushButton *pushButton;
    QLabel *label;
    QLabel *label_3;
    QPushButton *pushButton_3;
    QSpinBox *spinBox;
    QLabel *label_4;
    QTextEdit *textEdit;
    QTextEdit *textEdit_2;
    QPushButton *pushButton_4;
    QTextEdit *textEdit_3;
    QMenuBar *menubar;
    QStatusBar *statusbar;
    QToolBar *toolBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(560, 455);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(460, 40, 89, 25));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(10, 10, 271, 20));
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(10, 80, 311, 20));
        pushButton_3 = new QPushButton(centralwidget);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setGeometry(QRect(260, 240, 89, 25));
        spinBox = new QSpinBox(centralwidget);
        spinBox->setObjectName(QString::fromUtf8("spinBox"));
        spinBox->setGeometry(QRect(410, 180, 44, 26));
        label_4 = new QLabel(centralwidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(10, 180, 401, 20));
        textEdit = new QTextEdit(centralwidget);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));
        textEdit->setGeometry(QRect(10, 110, 441, 31));
        textEdit->setReadOnly(true);
        textEdit_2 = new QTextEdit(centralwidget);
        textEdit_2->setObjectName(QString::fromUtf8("textEdit_2"));
        textEdit_2->setGeometry(QRect(10, 40, 441, 31));
        textEdit_2->setReadOnly(true);
        pushButton_4 = new QPushButton(centralwidget);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
        pushButton_4->setGeometry(QRect(460, 110, 89, 25));
        textEdit_3 = new QTextEdit(centralwidget);
        textEdit_3->setObjectName(QString::fromUtf8("textEdit_3"));
        textEdit_3->setGeometry(QRect(0, 270, 561, 121));
        textEdit_3->setReadOnly(true);
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 560, 22));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);
        toolBar = new QToolBar(MainWindow);
        toolBar->setObjectName(QString::fromUtf8("toolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, toolBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        pushButton->setText(QCoreApplication::translate("MainWindow", "\320\236\320\261\320\267\320\276\321\200", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "\320\222\321\213\320\261\320\265\321\200\320\265\321\202\320\265 \321\204\320\260\320\271\320\273 \321\201\320\276 \321\201\320\277\320\270\321\201\320\272\320\276\320\274 KKS \320\272\320\276\320\264\320\276\320\262", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "\320\243\320\272\320\260\320\266\320\270\321\202\320\265 \320\277\320\260\320\277\320\272\321\203 \320\262 \320\272\320\276\321\202\320\276\321\200\320\276\320\271 \320\273\320\265\320\266\320\260\321\202 \321\201\321\206\320\265\320\275\320\260\321\200\320\270\320\270", nullptr));
        pushButton_3->setText(QCoreApplication::translate("MainWindow", "\320\241\321\202\320\260\321\200\321\202", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "\320\243\320\272\320\260\320\266\320\270\321\202\320\265 \321\201\320\272\320\276\320\273\321\214\320\272\320\276 KKS \320\262\321\213 \321\205\320\276\321\202\320\270\321\202\320\265 \320\264\320\276\320\261\320\260\320\262\320\270\321\202\321\214 \320\262 \321\201\321\206\320\265\320\275\320\260\321\200\320\270\320\270", nullptr));
        pushButton_4->setText(QCoreApplication::translate("MainWindow", "\320\236\320\261\320\267\320\276\321\200", nullptr));
        toolBar->setWindowTitle(QCoreApplication::translate("MainWindow", "toolBar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
