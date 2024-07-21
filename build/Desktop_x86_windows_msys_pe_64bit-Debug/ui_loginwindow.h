/********************************************************************************
** Form generated from reading UI file 'loginwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.7.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGINWINDOW_H
#define UI_LOGINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_loginWindow
{
public:
    QLineEdit *usernameInput;
    QPushButton *registerPushButton;
    QLabel *label_2;
    QLabel *errorMessage;
    QLineEdit *passwordInput;
    QLabel *label;
    QPushButton *loginPushButton;

    void setupUi(QDialog *loginWindow)
    {
        if (loginWindow->objectName().isEmpty())
            loginWindow->setObjectName("loginWindow");
        loginWindow->resize(800, 600);
        usernameInput = new QLineEdit(loginWindow);
        usernameInput->setObjectName("usernameInput");
        usernameInput->setGeometry(QRect(350, 170, 230, 35));
        registerPushButton = new QPushButton(loginWindow);
        registerPushButton->setObjectName("registerPushButton");
        registerPushButton->setGeometry(QRect(230, 315, 350, 35));
        QFont font;
        font.setPointSize(12);
        registerPushButton->setFont(font);
        label_2 = new QLabel(loginWindow);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(230, 220, 111, 31));
        QFont font1;
        font1.setPointSize(16);
        label_2->setFont(font1);
        errorMessage = new QLabel(loginWindow);
        errorMessage->setObjectName("errorMessage");
        errorMessage->setGeometry(QRect(230, 355, 351, 20));
        passwordInput = new QLineEdit(loginWindow);
        passwordInput->setObjectName("passwordInput");
        passwordInput->setGeometry(QRect(350, 220, 230, 35));
        label = new QLabel(loginWindow);
        label->setObjectName("label");
        label->setGeometry(QRect(230, 170, 111, 31));
        QFont font2;
        font2.setPointSize(16);
        font2.setBold(false);
        label->setFont(font2);
        loginPushButton = new QPushButton(loginWindow);
        loginPushButton->setObjectName("loginPushButton");
        loginPushButton->setGeometry(QRect(230, 270, 350, 35));
        loginPushButton->setFont(font);

        retranslateUi(loginWindow);

        QMetaObject::connectSlotsByName(loginWindow);
    } // setupUi

    void retranslateUi(QDialog *loginWindow)
    {
        loginWindow->setWindowTitle(QCoreApplication::translate("loginWindow", "Dialog", nullptr));
        registerPushButton->setText(QCoreApplication::translate("loginWindow", "I do not have an account", nullptr));
        label_2->setText(QCoreApplication::translate("loginWindow", "<html><head/><body><p><span style=\" font-size:14pt;\">password:</span></p></body></html>", nullptr));
        errorMessage->setText(QCoreApplication::translate("loginWindow", "<html><head/><body><p align=\"center\"><span style=\" color:#a83f1b;\">wrong username or password</span></p></body></html>", nullptr));
        label->setText(QCoreApplication::translate("loginWindow", "<html><head/><body><p><span style=\" font-size:14pt;\">username:</span></p></body></html>", nullptr));
        loginPushButton->setText(QCoreApplication::translate("loginWindow", "login", nullptr));
    } // retranslateUi

};

namespace Ui {
    class loginWindow: public Ui_loginWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGINWINDOW_H
