#include "registerwindow.h"
#include "ui_registerwindow.h"
#include "adminsetupwindow.h"
#include "users.h"
#include <QStandardPaths>
#include <QFileInfo>
#include <QDir>

registerWindow::registerWindow(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::registerWindow)
{
    ui->setupUi(this);
    ui->ageError->setVisible(false);
    ui->nameAlreadyExistsError->setVisible(false);
    ui->allFieldsMustBeCompletedError->setVisible(false);


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

void registerWindow::on_registerPushButton_clicked()
{
    //ui->allFieldsMustBeCompletedError->setVisible(false);

    QString inputusername = ui->usernameInput->text(),
            inputpassword = ui->passwordInput->text(),
            monthBD = ui->monthBD->currentText(),
            dayBD = ui->dayBD->text(),
            yearBD = ui->yearBD->text(),
            userType;

    QStringList userCredList;

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

    bool alreadyExist = false;


    if(inputusername == "" || inputpassword == "" || monthBD == "" || dayBD == "" || yearBD == "" || userType == "")
        ui->allFieldsMustBeCompletedError->setVisible(true);
    else
    {
        if(userType == "Admin")
        {

        }
        else if(userType == "Customer")
        {
            Cust.seek(0);
            while(!Cust.atEnd())
            {
                userCredList = Cust.readLine().split(" ");
                if (inputusername == userCredList[0])
                {
                    ui->nameAlreadyExistsError->setVisible(true);
                    alreadyExist = true;
                    break;
                }
            }
            if (alreadyExist == false)
            {
                Cust.seek(customers.size());
                Cust << inputusername << inputpassword << BD << userType;
            }
        }
    }



    // while(!inA.atEnd())
    // {
    //     userCredList = inA.readLine().split(" ");
    //     qDebug() << userCredList[0] << userCredList[1] << "\n";
    //     if (inputuser == userCredList[0] && inputpassword == userCredList[1])
    //     {
    //         hide();
    //         ProductPage *w = new ProductPage;
    //         w->show();
    //     }
    // }
    // inA.seek(0);

    // ui->errorMessage->setVisible(true);

    // hide();
    // adminSetUpWindow *a = new adminSetUpWindow();
    // a->show();
}
