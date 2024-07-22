#include "registerwindow.h"
#include "ui_registerwindow.h"
#include "adminsetupwindow.h"
#include "users.h"
#include <QStandardPaths>
#include <QFileInfo>
#include <QDir>
#include <ProductPage/ProductPage.h>

registerWindow::registerWindow(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::registerWindow)
{
    ui->setupUi(this);
    ui->ageError->setVisible(false);
    ui->nameAlreadyExistsError->setVisible(false);
    ui->allFieldsMustBeCompletedError->setVisible(false);
    ui->passwordDoesnotMatchError->setVisible(false);


    QTextStream Cust (&customers);
    if (!customers.open(QIODevice::ReadWrite | QIODevice::Text))
        qDebug() << "file not open";
    else
        qDebug() << "file is open";

    QTextStream Adm (&admins);
    if (!admins.open(QIODevice::ReadWrite | QIODevice::Text))
        qDebug() << "file not open";
    else
        qDebug() << "file is open";

}

registerWindow::~registerWindow()
{
    delete ui;
}

void registerWindow::on_pushButton_clicked()
{
    ui->ageError->setVisible(false);
    ui->nameAlreadyExistsError->setVisible(false);
    ui->allFieldsMustBeCompletedError->setVisible(false);
    ui->passwordDoesnotMatchError->setVisible(false);

    QString inputusername = ui->usernameInput->text(),
        inputpassword = ui->passwordInput->text(),
        inputpassword2 = ui->passwordInput2->text(),
        monthBD = ui->monthBD->currentText(),
        dayBD = ui->dayBD->text(),
        yearBD = ui->yearBD->text(),
        userType = "";

    QStringList userCredList0;
    QStringList userCredList1;

    if (ui->merchantRB->isChecked() || ui->adminRB->isChecked())
        userType = "Admin";
    else if (ui->customerRB->isChecked())
        userType = "Customer";
    else
        userType = "";

    QString BD = dayBD + monthBD + yearBD;

    QTextStream Cust (&customers);
    customers.open(QIODevice::ReadWrite | QIODevice::Text);

    QTextStream Adm (&admins);
    admins.open(QIODevice::ReadWrite | QIODevice::Text);

    bool alreadyExist = false, error = false;

    qDebug() << inputusername << inputpassword << inputpassword2 << monthBD << dayBD << yearBD << userType;
    if(inputusername == "" || inputpassword == "" || inputpassword2 == "" || monthBD == "" || dayBD == "" || yearBD == "" || userType == "")
    {
        ui->allFieldsMustBeCompletedError->setVisible(true);
        error = true;
    }

    Cust.seek(0);
    Adm.seek(0);
    while(!Cust.atEnd() && !Adm.atEnd())
    {
        userCredList0 = Cust.readLine().split(" ");
        userCredList1 = Adm.readLine().split(" ");

        if (inputusername == userCredList0[0] || inputusername == userCredList1[0])
        {
            ui->nameAlreadyExistsError->setVisible(true);
            alreadyExist = true;
            error = true;
            break;
        }
    }

    if (! (inputpassword == inputpassword2))
    {
        ui->passwordDoesnotMatchError->setVisible(true);
        error = true;
    }

    if (12 < (yearBD.toInt() - 2024))
    {
        ui->ageError->setVisible(true);
        error = true;
    }

    if (error == false && alreadyExist == false)
    {
        if (userType == "Admin")
        {
            Adm << inputusername << " " << inputpassword << " " << dayBD << monthBD << yearBD << " " << userType << "\n";
            qDebug() << "saved in admin";
            hide();
            ProductPage *w = new ProductPage;
            w->show();
        }
        else if (userType == "Customer")
        {
            Cust << inputusername << " " << inputpassword << " " << dayBD << monthBD << yearBD << " " << userType << "\n";
            qDebug() << "saved in customer";
            hide();
            ProductPage *w = new ProductPage;
            w->show();
        }
    }
}

