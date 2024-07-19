#include "loginwindow.h"
#include "ui_loginwindow.h"
#include "registerwindow.h"

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

