#include "product.h"
#include "ui_product.h"

Product::Product(QWidget *parent)
    : QGroupBox(parent)
    , ui(new Ui::Product)
{
    ui->setupUi(this);
}

Product::~Product()
{
    delete ui;
}
