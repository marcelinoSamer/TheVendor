#include "registerwindow.h"
#include "ui_registerwindow.h"
#include "adminsetupwindow.h"
#include "loginwindow.h"

registerWindow::registerWindow(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::registerWindow)
{
    ui->setupUi(this);
    ui->ageError->setVisible(false);
    ui->nameAlreadyExistsError->setVisible(false);
    ui->allFieldsMustBeCompletedError->setVisible(false);
    ui->passwordDoesnotMatchError->setVisible(false);

}

registerWindow::~registerWindow()
{
    delete ui;
}


void registerWindow::on_pushButton_clicked()
{
    hide();
    adminSetUpWindow *a = new adminSetUpWindow();
    a->show();
}


void registerWindow::on_cancelPushButton_clicked()
{
    hide();
    loginWindow *l =new loginWindow();
    l->show();
}

