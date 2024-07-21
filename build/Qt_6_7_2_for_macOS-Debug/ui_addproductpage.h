/********************************************************************************
** Form generated from reading UI file 'addproductpage.ui'
**
** Created by: Qt User Interface Compiler version 6.7.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDPRODUCTPAGE_H
#define UI_ADDPRODUCTPAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>

QT_BEGIN_NAMESPACE

class Ui_addProductPage
{
public:
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLineEdit *productTitleInput;
    QLineEdit *picturePathInput;
    QLineEdit *productPriceInput;
    QLineEdit *keyword1Input;
    QLineEdit *keyword2Input;
    QLabel *label_6;
    QTextEdit *productDiscriptionInput;
    QPushButton *createProductPushButton;
    QPushButton *cancelPushButton;
    QLabel *allFieldsMustBeCompletedError;
    QLabel *label_7;
    QLabel *label_8;
    QComboBox *categoryComboBox;

    void setupUi(QDialog *addProductPage)
    {
        if (addProductPage->objectName().isEmpty())
            addProductPage->setObjectName("addProductPage");
        addProductPage->resize(827, 638);
        label = new QLabel(addProductPage);
        label->setObjectName("label");
        label->setGeometry(QRect(160, 80, 100, 40));
        QFont font;
        font.setPointSize(16);
        label->setFont(font);
        label_2 = new QLabel(addProductPage);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(160, 140, 100, 40));
        label_2->setFont(font);
        label_3 = new QLabel(addProductPage);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(160, 200, 100, 40));
        label_3->setFont(font);
        label_4 = new QLabel(addProductPage);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(160, 260, 100, 40));
        label_4->setFont(font);
        label_5 = new QLabel(addProductPage);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(160, 320, 100, 40));
        label_5->setFont(font);
        productTitleInput = new QLineEdit(addProductPage);
        productTitleInput->setObjectName("productTitleInput");
        productTitleInput->setGeometry(QRect(300, 80, 350, 40));
        picturePathInput = new QLineEdit(addProductPage);
        picturePathInput->setObjectName("picturePathInput");
        picturePathInput->setGeometry(QRect(300, 140, 350, 40));
        productPriceInput = new QLineEdit(addProductPage);
        productPriceInput->setObjectName("productPriceInput");
        productPriceInput->setGeometry(QRect(300, 200, 350, 40));
        keyword1Input = new QLineEdit(addProductPage);
        keyword1Input->setObjectName("keyword1Input");
        keyword1Input->setGeometry(QRect(300, 260, 350, 40));
        keyword2Input = new QLineEdit(addProductPage);
        keyword2Input->setObjectName("keyword2Input");
        keyword2Input->setGeometry(QRect(300, 320, 350, 40));
        label_6 = new QLabel(addProductPage);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(160, 420, 141, 40));
        label_6->setFont(font);
        productDiscriptionInput = new QTextEdit(addProductPage);
        productDiscriptionInput->setObjectName("productDiscriptionInput");
        productDiscriptionInput->setGeometry(QRect(300, 420, 350, 130));
        createProductPushButton = new QPushButton(addProductPage);
        createProductPushButton->setObjectName("createProductPushButton");
        createProductPushButton->setGeometry(QRect(410, 570, 240, 40));
        cancelPushButton = new QPushButton(addProductPage);
        cancelPushButton->setObjectName("cancelPushButton");
        cancelPushButton->setGeometry(QRect(160, 570, 240, 40));
        allFieldsMustBeCompletedError = new QLabel(addProductPage);
        allFieldsMustBeCompletedError->setObjectName("allFieldsMustBeCompletedError");
        allFieldsMustBeCompletedError->setGeometry(QRect(300, 620, 210, 16));
        label_7 = new QLabel(addProductPage);
        label_7->setObjectName("label_7");
        label_7->setGeometry(QRect(332, 10, 176, 50));
        QFont font1;
        font1.setPointSize(30);
        label_7->setFont(font1);
        label_8 = new QLabel(addProductPage);
        label_8->setObjectName("label_8");
        label_8->setGeometry(QRect(160, 370, 100, 40));
        label_8->setFont(font);
        categoryComboBox = new QComboBox(addProductPage);
        categoryComboBox->setObjectName("categoryComboBox");
        categoryComboBox->setGeometry(QRect(300, 370, 350, 40));

        retranslateUi(addProductPage);

        QMetaObject::connectSlotsByName(addProductPage);
    } // setupUi

    void retranslateUi(QDialog *addProductPage)
    {
        addProductPage->setWindowTitle(QCoreApplication::translate("addProductPage", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("addProductPage", "product title:", nullptr));
        label_2->setText(QCoreApplication::translate("addProductPage", "picture path:", nullptr));
        label_3->setText(QCoreApplication::translate("addProductPage", "product price:", nullptr));
        label_4->setText(QCoreApplication::translate("addProductPage", "keyword 1:", nullptr));
        label_5->setText(QCoreApplication::translate("addProductPage", "keyword 2:", nullptr));
        label_6->setText(QCoreApplication::translate("addProductPage", "<html><head/><body><p>product discription:</p></body></html>", nullptr));
        createProductPushButton->setText(QCoreApplication::translate("addProductPage", "create product", nullptr));
        cancelPushButton->setText(QCoreApplication::translate("addProductPage", "cancel", nullptr));
        allFieldsMustBeCompletedError->setText(QCoreApplication::translate("addProductPage", "<html><head/><body><p><span style=\" color:#c03620;\">error: all fields must be completed </span></p></body></html>", nullptr));
        label_7->setText(QCoreApplication::translate("addProductPage", "<html><head/><body><p><span style=\" color:#009051;\">Product Data</span></p></body></html>", nullptr));
        label_8->setText(QCoreApplication::translate("addProductPage", "category:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class addProductPage: public Ui_addProductPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDPRODUCTPAGE_H
