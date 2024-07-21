#include "addproductpage.h"
#include "ui_addproductpage.h"

addProductPage::addProductPage(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::addProductPage)
{
    ui->setupUi(this);
    ui->allFieldsMustBeCompletedError->setVisible(false);
}

addProductPage::~addProductPage()
{
    delete ui;
}
