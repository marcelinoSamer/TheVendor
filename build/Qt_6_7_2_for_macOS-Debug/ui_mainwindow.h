/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.7.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QLabel *label;
    QLabel *label_2;
    QLineEdit *usernameInput;
    QLineEdit *passwordInput;
    QPushButton *loginPushButton;
    QLabel *label_3;
    QPushButton *registerPushButton;
    QLabel *errorMessage;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(800, 600);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(200, 150, 111, 31));
        QFont font;
        font.setPointSize(16);
        font.setBold(false);
        label->setFont(font);
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(200, 200, 111, 31));
        QFont font1;
        font1.setPointSize(16);
        label_2->setFont(font1);
        usernameInput = new QLineEdit(centralwidget);
        usernameInput->setObjectName("usernameInput");
        usernameInput->setGeometry(QRect(300, 150, 231, 41));
        passwordInput = new QLineEdit(centralwidget);
        passwordInput->setObjectName("passwordInput");
        passwordInput->setGeometry(QRect(300, 200, 231, 41));
        loginPushButton = new QPushButton(centralwidget);
        loginPushButton->setObjectName("loginPushButton");
        loginPushButton->setGeometry(QRect(400, 250, 130, 35));
        loginPushButton->setFont(font1);
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(210, 306, 181, 20));
        registerPushButton = new QPushButton(centralwidget);
        registerPushButton->setObjectName("registerPushButton");
        registerPushButton->setGeometry(QRect(400, 300, 130, 35));
        registerPushButton->setFont(font1);
        errorMessage = new QLabel(centralwidget);
        errorMessage->setObjectName("errorMessage");
        errorMessage->setGeometry(QRect(210, 260, 181, 20));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 36));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "username:", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "password:", nullptr));
        loginPushButton->setText(QCoreApplication::translate("MainWindow", "login", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "you do not have an account?", nullptr));
        registerPushButton->setText(QCoreApplication::translate("MainWindow", "register", nullptr));
        errorMessage->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" color:#a83f1b;\">wrong username or password</span></p></body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
