#include "registerwindow.h"
#include "ui_registerwindow.h"
#include "adminsetupwindow.h"

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

void registerWindow::on_registerPushButton_clicked()
{
    hide();
    adminSetUpWindow *a = new adminSetUpWindow();
    a->show();
}
