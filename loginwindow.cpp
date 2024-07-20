#include "loginwindow.h"
#include "ui_loginwindow.h"
#include "registerwindow.h"
#include "mainwindow.h"
#include "ProductPage/ProductPage.h"

loginWindow::loginWindow(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::loginWindow)
{
    ui->setupUi(this);
    ui->errorMessage->setVisible(false);
}

loginWindow::~loginWindow()
{

    delete ui;
}

void loginWindow::on_registerPushButton_clicked()
{
    hide();
    registerWindow * r = new registerWindow();
    r->show();
}


void loginWindow::on_loginPushButton_clicked()
{
    hide();
    ProductPage *w = new ProductPage;
    w->show();
}

