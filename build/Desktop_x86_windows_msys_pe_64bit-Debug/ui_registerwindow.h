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
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_2;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QGroupBox *groupBox;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QRadioButton *radioButton_2;
    QRadioButton *radioButton;
    QRadioButton *radioButton_3;
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QLabel *label_4;
    QLineEdit *lineEdit_4;
    QLabel *label_6;
    QComboBox *comboBox;
    QLineEdit *lineEdit_3;
    QLabel *label_5;
    QPushButton *pushButton;
    QLabel *allFieldsMustBeCompletedError;
    QLabel *ageError;
    QLabel *nameAlreadyExistsError;

    void setupUi(QDialog *registerWindow)
    {
        if (registerWindow->objectName().isEmpty())
            registerWindow->setObjectName("registerWindow");
        registerWindow->resize(790, 640);
        lineEdit = new QLineEdit(registerWindow);
        lineEdit->setObjectName("lineEdit");
        lineEdit->setGeometry(QRect(320, 110, 250, 40));
        lineEdit_2 = new QLineEdit(registerWindow);
        lineEdit_2->setObjectName("lineEdit_2");
        lineEdit_2->setGeometry(QRect(320, 170, 250, 40));
        label = new QLabel(registerWindow);
        label->setObjectName("label");
        label->setGeometry(QRect(180, 110, 100, 30));
        QFont font;
        font.setPointSize(12);
        label->setFont(font);
        label_2 = new QLabel(registerWindow);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(180, 170, 100, 30));
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
        horizontalLayoutWidget->setGeometry(QRect(28, 29, 381, 51));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        radioButton_2 = new QRadioButton(horizontalLayoutWidget);
        radioButton_2->setObjectName("radioButton_2");

        horizontalLayout->addWidget(radioButton_2);

        radioButton = new QRadioButton(horizontalLayoutWidget);
        radioButton->setObjectName("radioButton");

        horizontalLayout->addWidget(radioButton);

        radioButton_3 = new QRadioButton(horizontalLayoutWidget);
        radioButton_3->setObjectName("radioButton_3");

        horizontalLayout->addWidget(radioButton_3);

        gridLayoutWidget = new QWidget(registerWindow);
        gridLayoutWidget->setObjectName("gridLayoutWidget");
        gridLayoutWidget->setGeometry(QRect(320, 240, 251, 57));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setContentsMargins(0, 0, 0, 0);
        label_4 = new QLabel(gridLayoutWidget);
        label_4->setObjectName("label_4");

        gridLayout->addWidget(label_4, 0, 0, 1, 1);

        lineEdit_4 = new QLineEdit(gridLayoutWidget);
        lineEdit_4->setObjectName("lineEdit_4");

        gridLayout->addWidget(lineEdit_4, 1, 2, 1, 1);

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

        lineEdit_3 = new QLineEdit(gridLayoutWidget);
        lineEdit_3->setObjectName("lineEdit_3");

        gridLayout->addWidget(lineEdit_3, 1, 1, 1, 1);

        label_5 = new QLabel(gridLayoutWidget);
        label_5->setObjectName("label_5");

        gridLayout->addWidget(label_5, 0, 1, 1, 1);

        pushButton = new QPushButton(registerWindow);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(180, 410, 390, 40));
        allFieldsMustBeCompletedError = new QLabel(registerWindow);
        allFieldsMustBeCompletedError->setObjectName("allFieldsMustBeCompletedError");
        allFieldsMustBeCompletedError->setGeometry(QRect(184, 460, 381, 31));
        QFont font1;
        font1.setPointSize(14);
        allFieldsMustBeCompletedError->setFont(font1);
        ageError = new QLabel(registerWindow);
        ageError->setObjectName("ageError");
        ageError->setGeometry(QRect(590, 250, 161, 31));
        nameAlreadyExistsError = new QLabel(registerWindow);
        nameAlreadyExistsError->setObjectName("nameAlreadyExistsError");
        nameAlreadyExistsError->setGeometry(QRect(590, 110, 151, 31));

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
        radioButton_2->setText(QCoreApplication::translate("registerWindow", "Merchant", nullptr));
        radioButton->setText(QCoreApplication::translate("registerWindow", "Customer", nullptr));
        radioButton_3->setText(QCoreApplication::translate("registerWindow", "Admin", nullptr));
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
        pushButton->setText(QCoreApplication::translate("registerWindow", "register", nullptr));
        allFieldsMustBeCompletedError->setText(QCoreApplication::translate("registerWindow", "<html><head/><body><p align=\"center\"><span style=\" font-size:9pt; color:#b7331f;\">error: all fields must be completed</span></p></body></html>", nullptr));
        ageError->setText(QCoreApplication::translate("registerWindow", "<html><head/><body><p><span style=\" color:#bb351f;\">error: you are under 12</span></p></body></html>", nullptr));
        nameAlreadyExistsError->setText(QCoreApplication::translate("registerWindow", "<html><head/><body><p><span style=\" color:#ba341f;\">username already exists </span></p></body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class registerWindow: public Ui_registerWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REGISTERWINDOW_H
