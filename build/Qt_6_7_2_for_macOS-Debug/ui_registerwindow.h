/********************************************************************************
** Form generated from reading UI file 'registerwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.7.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REGISTERWINDOW_H
#define UI_REGISTERWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_registerWindow
{
public:
    QLineEdit *usernameInput;
    QLineEdit *passwordInput;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QGroupBox *groupBox;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QRadioButton *merchantRB;
    QRadioButton *customerRB;
    QRadioButton *adminRB;
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QLabel *label_4;
    QLineEdit *yearBD;
    QLabel *label_6;
    QComboBox *monthBD;
    QLineEdit *dayBD;
    QLabel *label_5;
    QPushButton *pushButton;
    QLabel *allFieldsMustBeCompletedError;
    QLabel *ageError;
    QLabel *nameAlreadyExistsError;
    QLabel *label_7;
    QLineEdit *passwordInput2;
    QLabel *passwordDoesnotMatchError;
    QPushButton *cancelPushButton;

    void setupUi(QDialog *registerWindow)
    {
        if (registerWindow->objectName().isEmpty())
            registerWindow->setObjectName("registerWindow");
        registerWindow->resize(790, 640);
        usernameInput = new QLineEdit(registerWindow);
        usernameInput->setObjectName("usernameInput");
        usernameInput->setGeometry(QRect(320, 60, 250, 40));
        passwordInput = new QLineEdit(registerWindow);
        passwordInput->setObjectName("passwordInput");
        passwordInput->setGeometry(QRect(320, 120, 250, 40));
        label = new QLabel(registerWindow);
        label->setObjectName("label");
        label->setGeometry(QRect(180, 60, 100, 30));
        QFont font;
        font.setPointSize(12);
        label->setFont(font);
        label_2 = new QLabel(registerWindow);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(180, 120, 131, 30));
        label_2->setFont(font);
        label_3 = new QLabel(registerWindow);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(180, 250, 121, 30));
        label_3->setFont(font);
        groupBox = new QGroupBox(registerWindow);
        groupBox->setObjectName("groupBox");
        groupBox->setGeometry(QRect(180, 320, 390, 81));
        groupBox->setFont(font);
        horizontalLayoutWidget = new QWidget(groupBox);
        horizontalLayoutWidget->setObjectName("horizontalLayoutWidget");
        horizontalLayoutWidget->setGeometry(QRect(0, 30, 381, 51));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        merchantRB = new QRadioButton(horizontalLayoutWidget);
        merchantRB->setObjectName("merchantRB");

        horizontalLayout->addWidget(merchantRB);

        customerRB = new QRadioButton(horizontalLayoutWidget);
        customerRB->setObjectName("customerRB");

        horizontalLayout->addWidget(customerRB);

        adminRB = new QRadioButton(horizontalLayoutWidget);
        adminRB->setObjectName("adminRB");

        horizontalLayout->addWidget(adminRB);

        gridLayoutWidget = new QWidget(registerWindow);
        gridLayoutWidget->setObjectName("gridLayoutWidget");
        gridLayoutWidget->setGeometry(QRect(320, 240, 251, 57));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setContentsMargins(0, 0, 0, 0);
        label_4 = new QLabel(gridLayoutWidget);
        label_4->setObjectName("label_4");

        gridLayout->addWidget(label_4, 0, 0, 1, 1);

        yearBD = new QLineEdit(gridLayoutWidget);
        yearBD->setObjectName("yearBD");

        gridLayout->addWidget(yearBD, 1, 2, 1, 1);

        label_6 = new QLabel(gridLayoutWidget);
        label_6->setObjectName("label_6");

        gridLayout->addWidget(label_6, 0, 2, 1, 1);

        monthBD = new QComboBox(gridLayoutWidget);
        monthBD->addItem(QString());
        monthBD->addItem(QString());
        monthBD->addItem(QString());
        monthBD->addItem(QString());
        monthBD->addItem(QString());
        monthBD->addItem(QString());
        monthBD->addItem(QString());
        monthBD->addItem(QString());
        monthBD->addItem(QString());
        monthBD->addItem(QString());
        monthBD->addItem(QString());
        monthBD->addItem(QString());
        monthBD->setObjectName("monthBD");

        gridLayout->addWidget(monthBD, 1, 0, 1, 1);

        dayBD = new QLineEdit(gridLayoutWidget);
        dayBD->setObjectName("dayBD");

        gridLayout->addWidget(dayBD, 1, 1, 1, 1);

        label_5 = new QLabel(gridLayoutWidget);
        label_5->setObjectName("label_5");

        gridLayout->addWidget(label_5, 0, 1, 1, 1);

        pushButton = new QPushButton(registerWindow);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(180, 410, 390, 40));
        allFieldsMustBeCompletedError = new QLabel(registerWindow);
        allFieldsMustBeCompletedError->setObjectName("allFieldsMustBeCompletedError");
        allFieldsMustBeCompletedError->setGeometry(QRect(180, 490, 381, 31));
        QFont font1;
        font1.setPointSize(15);
        allFieldsMustBeCompletedError->setFont(font1);
        ageError = new QLabel(registerWindow);
        ageError->setObjectName("ageError");
        ageError->setGeometry(QRect(580, 250, 161, 31));
        nameAlreadyExistsError = new QLabel(registerWindow);
        nameAlreadyExistsError->setObjectName("nameAlreadyExistsError");
        nameAlreadyExistsError->setGeometry(QRect(580, 60, 151, 31));
        label_7 = new QLabel(registerWindow);
        label_7->setObjectName("label_7");
        label_7->setGeometry(QRect(180, 180, 141, 40));
        QFont font2;
        font2.setPointSize(13);
        label_7->setFont(font2);
        passwordInput2 = new QLineEdit(registerWindow);
        passwordInput2->setObjectName("passwordInput2");
        passwordInput2->setGeometry(QRect(320, 180, 250, 40));
        passwordDoesnotMatchError = new QLabel(registerWindow);
        passwordDoesnotMatchError->setObjectName("passwordDoesnotMatchError");
        passwordDoesnotMatchError->setGeometry(QRect(580, 180, 210, 30));
        passwordDoesnotMatchError->setFont(font);
        cancelPushButton = new QPushButton(registerWindow);
        cancelPushButton->setObjectName("cancelPushButton");
        cancelPushButton->setGeometry(QRect(180, 450, 390, 40));

        retranslateUi(registerWindow);

        QMetaObject::connectSlotsByName(registerWindow);
    } // setupUi

    void retranslateUi(QDialog *registerWindow)
    {
        registerWindow->setWindowTitle(QCoreApplication::translate("registerWindow", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("registerWindow", "username:", nullptr));
        label_2->setText(QCoreApplication::translate("registerWindow", "password:", nullptr));
        label_3->setText(QCoreApplication::translate("registerWindow", "date of birth:", nullptr));
        groupBox->setTitle(QCoreApplication::translate("registerWindow", "User type:", nullptr));
        merchantRB->setText(QCoreApplication::translate("registerWindow", "Merchant", nullptr));
        customerRB->setText(QCoreApplication::translate("registerWindow", "Customer", nullptr));
        adminRB->setText(QCoreApplication::translate("registerWindow", "Admin", nullptr));
        label_4->setText(QCoreApplication::translate("registerWindow", "Month:", nullptr));
        label_6->setText(QCoreApplication::translate("registerWindow", "Year", nullptr));
        monthBD->setItemText(0, QCoreApplication::translate("registerWindow", "Jan.", nullptr));
        monthBD->setItemText(1, QCoreApplication::translate("registerWindow", "Feb.", nullptr));
        monthBD->setItemText(2, QCoreApplication::translate("registerWindow", "Mar.", nullptr));
        monthBD->setItemText(3, QCoreApplication::translate("registerWindow", "Apr.", nullptr));
        monthBD->setItemText(4, QCoreApplication::translate("registerWindow", "May", nullptr));
        monthBD->setItemText(5, QCoreApplication::translate("registerWindow", "Jun.", nullptr));
        monthBD->setItemText(6, QCoreApplication::translate("registerWindow", "Jul.", nullptr));
        monthBD->setItemText(7, QCoreApplication::translate("registerWindow", "Aug.", nullptr));
        monthBD->setItemText(8, QCoreApplication::translate("registerWindow", "Sep.", nullptr));
        monthBD->setItemText(9, QCoreApplication::translate("registerWindow", "Oct.", nullptr));
        monthBD->setItemText(10, QCoreApplication::translate("registerWindow", "Nov.", nullptr));
        monthBD->setItemText(11, QCoreApplication::translate("registerWindow", "Dec.", nullptr));

        label_5->setText(QCoreApplication::translate("registerWindow", "Day:", nullptr));
        pushButton->setText(QCoreApplication::translate("registerWindow", "register", nullptr));
        allFieldsMustBeCompletedError->setText(QCoreApplication::translate("registerWindow", "<html><head/><body><p align=\"center\"><span style=\" font-size:13pt; color:#b7331f;\">error: all fields must be completed</span></p></body></html>", nullptr));
        ageError->setText(QCoreApplication::translate("registerWindow", "<html><head/><body><p><span style=\" color:#bb351f;\">error: you are under 12</span></p></body></html>", nullptr));
        nameAlreadyExistsError->setText(QCoreApplication::translate("registerWindow", "<html><head/><body><p><span style=\" color:#ba341f;\">username already exists </span></p></body></html>", nullptr));
        label_7->setText(QCoreApplication::translate("registerWindow", "re-enter password", nullptr));
        passwordDoesnotMatchError->setText(QCoreApplication::translate("registerWindow", "<html><head/><body><p><span style=\" color:#c03620;\">error: the password does not match</span></p></body></html>", nullptr));
        cancelPushButton->setText(QCoreApplication::translate("registerWindow", "cancel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class registerWindow: public Ui_registerWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REGISTERWINDOW_H
