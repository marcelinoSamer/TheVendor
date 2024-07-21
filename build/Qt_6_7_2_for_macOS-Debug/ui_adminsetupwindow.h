/********************************************************************************
** Form generated from reading UI file 'adminsetupwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.7.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADMINSETUPWINDOW_H
#define UI_ADMINSETUPWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_adminSetUpWindow
{
public:
    QLabel *label;
    QLineEdit *companyNameInput;
    QLabel *label_2;
    QLineEdit *mobilephoneInput;
    QGroupBox *groupBox;
    QCheckBox *visaCheckBox;
    QCheckBox *cashCheckBox;
    QCheckBox *instaPayCheckBox3;
    QCheckBox *fawryCheckBox_2;
    QCheckBox *onlineWalletCheckBox;
    QCheckBox *fawryCheckBox;
    QLabel *label_3;
    QLineEdit *companyAddressInput;
    QGroupBox *groupBox_2;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QCheckBox *fastShippingCheckBox;
    QCheckBox *ordinaryShippingCheckBox;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_5;
    QLabel *label_4;
    QLabel *label_6;
    QLineEdit *companyEmailAddressInput;
    QPushButton *registerCompanyPushButton;
    QLabel *companyNameExistsError;
    QLabel *companyEmailExistsError;
    QLabel *companyPhoneExistsError;
    QLabel *allFieldsMustBeCompletedError;
    QPushButton *cancelPushButton;

    void setupUi(QDialog *adminSetUpWindow)
    {
        if (adminSetUpWindow->objectName().isEmpty())
            adminSetUpWindow->setObjectName("adminSetUpWindow");
        adminSetUpWindow->resize(680, 720);
        label = new QLabel(adminSetUpWindow);
        label->setObjectName("label");
        label->setGeometry(QRect(135, 80, 131, 40));
        QFont font;
        font.setPointSize(16);
        label->setFont(font);
        companyNameInput = new QLineEdit(adminSetUpWindow);
        companyNameInput->setObjectName("companyNameInput");
        companyNameInput->setGeometry(QRect(290, 80, 250, 40));
        label_2 = new QLabel(adminSetUpWindow);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(135, 150, 131, 40));
        label_2->setFont(font);
        mobilephoneInput = new QLineEdit(adminSetUpWindow);
        mobilephoneInput->setObjectName("mobilephoneInput");
        mobilephoneInput->setGeometry(QRect(290, 150, 250, 40));
        groupBox = new QGroupBox(adminSetUpWindow);
        groupBox->setObjectName("groupBox");
        groupBox->setGeometry(QRect(130, 350, 405, 111));
        groupBox->setFont(font);
        visaCheckBox = new QCheckBox(groupBox);
        visaCheckBox->setObjectName("visaCheckBox");
        visaCheckBox->setGeometry(QRect(10, 40, 85, 20));
        cashCheckBox = new QCheckBox(groupBox);
        cashCheckBox->setObjectName("cashCheckBox");
        cashCheckBox->setGeometry(QRect(10, 80, 85, 20));
        instaPayCheckBox3 = new QCheckBox(groupBox);
        instaPayCheckBox3->setObjectName("instaPayCheckBox3");
        instaPayCheckBox3->setGeometry(QRect(120, 40, 85, 20));
        fawryCheckBox_2 = new QCheckBox(groupBox);
        fawryCheckBox_2->setObjectName("fawryCheckBox_2");
        fawryCheckBox_2->setGeometry(QRect(120, 80, 85, 20));
        onlineWalletCheckBox = new QCheckBox(groupBox);
        onlineWalletCheckBox->setObjectName("onlineWalletCheckBox");
        onlineWalletCheckBox->setGeometry(QRect(260, 40, 131, 20));
        fawryCheckBox = new QCheckBox(groupBox);
        fawryCheckBox->setObjectName("fawryCheckBox");
        fawryCheckBox->setGeometry(QRect(260, 80, 85, 20));
        label_3 = new QLabel(adminSetUpWindow);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(135, 220, 141, 40));
        label_3->setFont(font);
        companyAddressInput = new QLineEdit(adminSetUpWindow);
        companyAddressInput->setObjectName("companyAddressInput");
        companyAddressInput->setGeometry(QRect(290, 220, 250, 40));
        groupBox_2 = new QGroupBox(adminSetUpWindow);
        groupBox_2->setObjectName("groupBox_2");
        groupBox_2->setGeometry(QRect(130, 470, 405, 81));
        groupBox_2->setFont(font);
        verticalLayoutWidget = new QWidget(groupBox_2);
        verticalLayoutWidget->setObjectName("verticalLayoutWidget");
        verticalLayoutWidget->setGeometry(QRect(0, 20, 401, 61));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        fastShippingCheckBox = new QCheckBox(verticalLayoutWidget);
        fastShippingCheckBox->setObjectName("fastShippingCheckBox");

        horizontalLayout->addWidget(fastShippingCheckBox);

        ordinaryShippingCheckBox = new QCheckBox(verticalLayoutWidget);
        ordinaryShippingCheckBox->setObjectName("ordinaryShippingCheckBox");

        horizontalLayout->addWidget(ordinaryShippingCheckBox);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        label_5 = new QLabel(verticalLayoutWidget);
        label_5->setObjectName("label_5");

        horizontalLayout_2->addWidget(label_5);

        label_4 = new QLabel(verticalLayoutWidget);
        label_4->setObjectName("label_4");

        horizontalLayout_2->addWidget(label_4);


        verticalLayout->addLayout(horizontalLayout_2);

        label_6 = new QLabel(adminSetUpWindow);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(135, 290, 141, 40));
        label_6->setFont(font);
        companyEmailAddressInput = new QLineEdit(adminSetUpWindow);
        companyEmailAddressInput->setObjectName("companyEmailAddressInput");
        companyEmailAddressInput->setGeometry(QRect(290, 290, 250, 40));
        registerCompanyPushButton = new QPushButton(adminSetUpWindow);
        registerCompanyPushButton->setObjectName("registerCompanyPushButton");
        registerCompanyPushButton->setGeometry(QRect(130, 561, 405, 40));
        QFont font1;
        font1.setPointSize(18);
        registerCompanyPushButton->setFont(font1);
        companyNameExistsError = new QLabel(adminSetUpWindow);
        companyNameExistsError->setObjectName("companyNameExistsError");
        companyNameExistsError->setGeometry(QRect(300, 120, 241, 20));
        companyEmailExistsError = new QLabel(adminSetUpWindow);
        companyEmailExistsError->setObjectName("companyEmailExistsError");
        companyEmailExistsError->setGeometry(QRect(290, 330, 341, 20));
        companyPhoneExistsError = new QLabel(adminSetUpWindow);
        companyPhoneExistsError->setObjectName("companyPhoneExistsError");
        companyPhoneExistsError->setGeometry(QRect(290, 190, 341, 20));
        allFieldsMustBeCompletedError = new QLabel(adminSetUpWindow);
        allFieldsMustBeCompletedError->setObjectName("allFieldsMustBeCompletedError");
        allFieldsMustBeCompletedError->setGeometry(QRect(230, 640, 210, 20));
        cancelPushButton = new QPushButton(adminSetUpWindow);
        cancelPushButton->setObjectName("cancelPushButton");
        cancelPushButton->setGeometry(QRect(130, 600, 405, 40));
        cancelPushButton->setFont(font1);

        retranslateUi(adminSetUpWindow);

        QMetaObject::connectSlotsByName(adminSetUpWindow);
    } // setupUi

    void retranslateUi(QDialog *adminSetUpWindow)
    {
        adminSetUpWindow->setWindowTitle(QCoreApplication::translate("adminSetUpWindow", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("adminSetUpWindow", "company name:", nullptr));
        label_2->setText(QCoreApplication::translate("adminSetUpWindow", "mobile phone: ", nullptr));
        groupBox->setTitle(QCoreApplication::translate("adminSetUpWindow", "Supported Payment Methods:", nullptr));
        visaCheckBox->setText(QCoreApplication::translate("adminSetUpWindow", "Visa ", nullptr));
        cashCheckBox->setText(QCoreApplication::translate("adminSetUpWindow", "Cash", nullptr));
        instaPayCheckBox3->setText(QCoreApplication::translate("adminSetUpWindow", "InstaPay", nullptr));
        fawryCheckBox_2->setText(QCoreApplication::translate("adminSetUpWindow", "PayPal", nullptr));
        onlineWalletCheckBox->setText(QCoreApplication::translate("adminSetUpWindow", "Oniline Wallet", nullptr));
        fawryCheckBox->setText(QCoreApplication::translate("adminSetUpWindow", "Fawry", nullptr));
        label_3->setText(QCoreApplication::translate("adminSetUpWindow", "company's adrress", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("adminSetUpWindow", "Supported Shipping Methods", nullptr));
        fastShippingCheckBox->setText(QCoreApplication::translate("adminSetUpWindow", "fast shipping ", nullptr));
        ordinaryShippingCheckBox->setText(QCoreApplication::translate("adminSetUpWindow", "ordinary shipping ", nullptr));
        label_5->setText(QCoreApplication::translate("adminSetUpWindow", "24h-48h", nullptr));
        label_4->setText(QCoreApplication::translate("adminSetUpWindow", "(3-5)days", nullptr));
        label_6->setText(QCoreApplication::translate("adminSetUpWindow", "Company's email:", nullptr));
        registerCompanyPushButton->setText(QCoreApplication::translate("adminSetUpWindow", "Register your company", nullptr));
        companyNameExistsError->setText(QCoreApplication::translate("adminSetUpWindow", "<html><head/><body><p><span style=\" color:#bb341f;\">error: company's name already exists</span></p></body></html>", nullptr));
        companyEmailExistsError->setText(QCoreApplication::translate("adminSetUpWindow", "<html><head/><body><p><span style=\" color:#c23621;\">error: company's email is already for another company</span></p></body></html>", nullptr));
        companyPhoneExistsError->setText(QCoreApplication::translate("adminSetUpWindow", "<html><head/><body><p><span style=\" color:#bd3520;\">error: company's phone is already for another company</span></p></body></html>", nullptr));
        allFieldsMustBeCompletedError->setText(QCoreApplication::translate("adminSetUpWindow", "<html><head/><body><p><span style=\" color:#cc3922;\">error: all fields must be completed </span></p></body></html>", nullptr));
        cancelPushButton->setText(QCoreApplication::translate("adminSetUpWindow", "cancel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class adminSetUpWindow: public Ui_adminSetUpWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADMINSETUPWINDOW_H
