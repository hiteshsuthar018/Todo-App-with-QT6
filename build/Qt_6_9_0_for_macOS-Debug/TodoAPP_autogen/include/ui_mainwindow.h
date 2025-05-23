/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QLineEdit *txtTask;
    QPushButton *btnAdd;
    QListWidget *listWidget;
    QPushButton *btnRemove;
    QPushButton *btnRemoveAll;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(452, 536);
        MainWindow->setStyleSheet(QString::fromUtf8("QMainWindow {\n"
"    background-color: #f1f5f9;\n"
"}\n"
""));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        txtTask = new QLineEdit(centralwidget);
        txtTask->setObjectName("txtTask");
        txtTask->setGeometry(QRect(10, 20, 301, 41));
        txtTask->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"    font-size: 16px;\n"
"    padding: 10px 14px;\n"
"    border: 2px solid #cbd5e1;\n"
"    border-radius: 8px;\n"
"    background-color: #ffffff;\n"
"    color: #1e293b;\n"
"}\n"
"\n"
"QLineEdit:focus {\n"
"    border: 2px solid #3b82f6;\n"
"    background-color: #f0f9ff;\n"
"}\n"
""));
        btnAdd = new QPushButton(centralwidget);
        btnAdd->setObjectName("btnAdd");
        btnAdd->setGeometry(QRect(320, 20, 111, 41));
        btnAdd->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    font-size: 20px;\n"
"    color: white;\n"
"    background-color: #10b981;\n"
"    border: none;\n"
"    border-radius: 8px;\n"
"    padding: 10px 20px;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: #059669;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: #047857;\n"
"}\n"
"\n"
"QPushButton:disabled {\n"
"    background-color: #9ca3af;\n"
"    color: #e5e7eb;\n"
"}\n"
""));
        listWidget = new QListWidget(centralwidget);
        listWidget->setObjectName("listWidget");
        listWidget->setGeometry(QRect(10, 70, 421, 401));
        listWidget->setStyleSheet(QString::fromUtf8("QListWidget {\n"
"    font-size: 20px;\n"
"    padding: 10px;\n"
"    background-color: #f8fafc; \n"
"    border: 2px solid #cbd5e1; \n"
"    border-radius: 8px;\n"
"    color: #1e293b; \n"
"    outline: none;\n"
"}\n"
"\n"
"QListWidget::item {\n"
"    padding: 10px;\n"
"    margin: 4px 0;\n"
"    border-radius: 6px;\n"
"}\n"
"\n"
"QListWidget::item:selected {\n"
"    background-color: #3b82f6; \n"
"    color: white;\n"
"}\n"
"\n"
"QListWidget::item:hover {\n"
"    background-color: #e0f2fe;\n"
"}\n"
""));
        btnRemove = new QPushButton(centralwidget);
        btnRemove->setObjectName("btnRemove");
        btnRemove->setGeometry(QRect(150, 480, 111, 41));
        btnRemove->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    font-size: 20px;\n"
"    color: white;\n"
"    background-color: #ef4444;\n"
"    border: none;\n"
"    border-radius: 8px;\n"
"    padding: 10px 20px;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: #dc2626;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: #b91c1c;\n"
"}\n"
"\n"
"QPushButton:disabled {\n"
"    background-color: #9ca3af;\n"
"    color: #e5e7eb;\n"
"}\n"
""));
        btnRemoveAll = new QPushButton(centralwidget);
        btnRemoveAll->setObjectName("btnRemoveAll");
        btnRemoveAll->setGeometry(QRect(270, 480, 161, 41));
        btnRemoveAll->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    font-size: 20px;\n"
"    color: white;\n"
"    background-color: #f97316;\n"
"    border: none;\n"
"    border-radius: 8px;\n"
"    padding: 10px 20px;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: #ea580c;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: #c2410c;\n"
"}\n"
"\n"
"QPushButton:disabled {\n"
"    background-color: #9ca3af;\n"
"    color: #e5e7eb;\n"
"}\n"
""));
        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        btnAdd->setText(QCoreApplication::translate("MainWindow", "Add", nullptr));
        btnRemove->setText(QCoreApplication::translate("MainWindow", "Remove", nullptr));
        btnRemoveAll->setText(QCoreApplication::translate("MainWindow", "Remove All", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
