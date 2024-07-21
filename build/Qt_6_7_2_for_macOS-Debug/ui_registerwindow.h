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
    QLineEdit *PasswordInput;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QGroupBox *groupBox;
    QRadioButton *CustomerRadioButton;
    QRadioButton *adminRadioButton;
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QLabel *label_4;
    QLineEdit *yearOfBirthInput;
    QLabel *label_6;
    QComboBox *comboBox;
    QLineEdit *dayOfBirthInput;
    QLabel *label_5;
    QPushButton *registerPushButton;
    QLabel *allFieldsMustBeCompletedError;
    QLabel *ageError;
    QLabel *nameAlreadyExistsError;

    void setupUi(QDialog *registerWindow)
    {
        if (registerWindow->objectName().isEmpty())
            registerWindow->setObjectName("registerWindow");
        registerWindow->resize(746, 640);
        usernameInput = new QLineEdit(registerWindow);
        usernameInput->setObjectName("usernameInput");
        usernameInput->setGeometry(QRect(290, 140, 250, 40));
        PasswordInput = new QLineEdit(registerWindow);
        PasswordInput->setObjectName("PasswordInput");
        PasswordInput->setGeometry(QRect(290, 200, 250, 40));
        label = new QLabel(registerWindow);
        label->setObjectName("label");
        label->setGeometry(QRect(150, 140, 100, 30));
        QFont font;
        font.setPointSize(16);
        label->setFont(font);
        label_2 = new QLabel(registerWindow);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(150, 200, 100, 30));
        label_2->setFont(font);
        label_3 = new QLabel(registerWindow);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(150, 280, 100, 30));
        label_3->setFont(font);
        groupBox = new QGroupBox(registerWindow);
        groupBox->setObjectName("groupBox");
        groupBox->setGeometry(QRect(150, 350, 390, 81));
        groupBox->setFont(font);
        CustomerRadioButton = new QRadioButton(groupBox);
        CustomerRadioButton->setObjectName("CustomerRadioButton");
        CustomerRadioButton->setGeometry(QRect(30, 40, 99, 20));
        adminRadioButton = new QRadioButton(groupBox);
        adminRadioButton->setObjectName("adminRadioButton");
        adminRadioButton->setGeometry(QRect(250, 40, 99, 20));
        gridLayoutWidget = new QWidget(registerWindow);
        gridLayoutWidget->setObjectName("gridLayoutWidget");
        gridLayoutWidget->setGeometry(QRect(290, 250, 251, 83));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setContentsMargins(0, 0, 0, 0);
        label_4 = new QLabel(gridLayoutWidget);
        label_4->setObjectName("label_4");

        gridLayout->addWidget(label_4, 0, 0, 1, 1);

        yearOfBirthInput = new QLineEdit(gridLayoutWidget);
        yearOfBirthInput->setObjectName("yearOfBirthInput");

        gridLayout->addWidget(yearOfBirthInput, 1, 2, 1, 1);

        label_6 = new QLabel(gridLayoutWidget);
        label_6->setObjectName("label_6");

        gridLayout->addWidget(label_6, 0, 2, 1, 1);

        comboBox = new QComboBox(gridLayoutWidget);
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->setObjectName("comboBox");

        gridLayout->addWidget(comboBox, 1, 0, 1, 1);

        dayOfBirthInput = new QLineEdit(gridLayoutWidget);
        dayOfBirthInput->setObjectName("dayOfBirthInput");

        gridLayout->addWidget(dayOfBirthInput, 1, 1, 1, 1);

        label_5 = new QLabel(gridLayoutWidget);
        label_5->setObjectName("label_5");

        gridLayout->addWidget(label_5, 0, 1, 1, 1);

        registerPushButton = new QPushButton(registerWindow);
        registerPushButton->setObjectName("registerPushButton");
        registerPushButton->setGeometry(QRect(150, 440, 390, 40));
        allFieldsMustBeCompletedError = new QLabel(registerWindow);
        allFieldsMustBeCompletedError->setObjectName("allFieldsMustBeCompletedError");
        allFieldsMustBeCompletedError->setGeometry(QRect(235, 490, 220, 20));
        QFont font1;
        font1.setPointSize(14);
        allFieldsMustBeCompletedError->setFont(font1);
        ageError = new QLabel(registerWindow);
        ageError->setObjectName("ageError");
        ageError->setGeometry(QRect(560, 280, 141, 16));
        nameAlreadyExistsError = new QLabel(registerWindow);
        nameAlreadyExistsError->setObjectName("nameAlreadyExistsError");
        nameAlreadyExistsError->setGeometry(QRect(560, 150, 151, 16));

        retranslateUi(registerWindow);

        QMetaObject::connectSlotsByName(registerWindow);
    } // setupUi

    void retranslateUi(QDialog *registerWindow)
    {
        registerWindow->setWindowTitle(QCoreApplication::translate("registerWindow", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("registerWindow", "username:", nullptr));
        label_2->setText(QCoreApplication::translate("registerWindow", "password:", nullptr));
        label_3->setText(QCoreApplication::translate("registerWindow", "date of birth:", nullptr));
        groupBox->setTitle(QCoreApplication::translate("registerWindow", "user type", nullptr));
        CustomerRadioButton->setText(QCoreApplication::translate("registerWindow", "Customer", nullptr));
        adminRadioButton->setText(QCoreApplication::translate("registerWindow", "Admin", nullptr));
        label_4->setText(QCoreApplication::translate("registerWindow", "Month:", nullptr));
        label_6->setText(QCoreApplication::translate("registerWindow", "Year", nullptr));
        comboBox->setItemText(0, QCoreApplication::translate("registerWindow", "Jan.", nullptr));
        comboBox->setItemText(1, QCoreApplication::translate("registerWindow", "Feb.", nullptr));
        comboBox->setItemText(2, QCoreApplication::translate("registerWindow", "Mar.", nullptr));
        comboBox->setItemText(3, QCoreApplication::translate("registerWindow", "Apr.", nullptr));
        comboBox->setItemText(4, QCoreApplication::translate("registerWindow", "May", nullptr));
        comboBox->setItemText(5, QCoreApplication::translate("registerWindow", "Jun.", nullptr));
        comboBox->setItemText(6, QCoreApplication::translate("registerWindow", "Jul.", nullptr));
        comboBox->setItemText(7, QCoreApplication::translate("registerWindow", "Aug.", nullptr));
        comboBox->setItemText(8, QCoreApplication::translate("registerWindow", "Sep.", nullptr));
        comboBox->setItemText(9, QCoreApplication::translate("registerWindow", "Oct.", nullptr));
        comboBox->setItemText(10, QCoreApplication::translate("registerWindow", "Nov.", nullptr));
        comboBox->setItemText(11, QCoreApplication::translate("registerWindow", "Dec.", nullptr));

        label_5->setText(QCoreApplication::translate("registerWindow", "Day:", nullptr));
        registerPushButton->setText(QCoreApplication::translate("registerWindow", "register", nullptr));
        allFieldsMustBeCompletedError->setText(QCoreApplication::translate("registerWindow", "<html><head/><body><p><span style=\" color:#b7331f;\">error: all fields must be completed</span></p></body></html>", nullptr));
        ageError->setText(QCoreApplication::translate("registerWindow", "<html><head/><body><p><span style=\" color:#bb351f;\">error: you are under 12</span></p></body></html>", nullptr));
        nameAlreadyExistsError->setText(QCoreApplication::translate("registerWindow", "<html><head/><body><p><span style=\" color:#ba341f;\">username already exists </span></p></body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class registerWindow: public Ui_registerWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REGISTERWINDOW_H
