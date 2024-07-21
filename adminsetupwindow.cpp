#include "adminsetupwindow.h"
#include "ui_adminsetupwindow.h"
#include "registerwindow.h"

adminSetUpWindow::adminSetUpWindow(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::adminSetUpWindow)
{
    ui->setupUi(this);
    ui->companyEmailExistsError->setVisible(false);
    ui->companyNameExistsError->setVisible(false);
    ui->companyPhoneExistsError->setVisible(false);
    ui->allFieldsMustBeCompletedError->setVisible(false);
}

adminSetUpWindow::~adminSetUpWindow()
{
    delete ui;
}

void adminSetUpWindow::on_cancelPushButton_clicked()
{
    hide();
    registerWindow *w = new registerWindow();
    w->show();
}

