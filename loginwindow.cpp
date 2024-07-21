#include "loginwindow.h"
#include "ui_loginwindow.h"
#include "registerwindow.h"
#include "mainwindow.h"
#include "ProductPage/ProductPage.h"
#include "users.h"
#include <QTextStream>
#include <QFileInfo>
#include <QDir>
#include <QStandardPaths>

loginWindow::loginWindow(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::loginWindow)
{
    ui->setupUi(this);
    ui->errorMessage->setVisible(false);

    QString dataPath = QStandardPaths::writableLocation(QStandardPaths::AppDataLocation);
    QDir().mkpath(dataPath);
    if(QFile::copy(":/DataBase/assets/DataBase/Users/Admin.txt", dataPath + "/Admin.txt"))
    {
        qDebug() << "success";
    }
    QFile admins(dataPath + "/Admin.txt");

    QDir().mkpath(dataPath);
    if(QFile::copy(":/DataBase/assets/DataBase/Users/Customers.txt", dataPath + "/Customers.txt"))
    {
        qDebug() << "success";
    }
    QFile customers(dataPath + "/Customers.txt");

    QTextStream Cust (&customers);
    if (!customers.open(QIODevice::ReadOnly | QIODevice::Text))
        qDebug() << "file not open";
    else
        qDebug() << "file is open";

    QTextStream Adm (&admins);
    if (!admins.open(QIODevice::ReadOnly | QIODevice::Text))
        qDebug() << "file not open";
    else
        qDebug() << "file is open";
}

loginWindow::~loginWindow()
{

    delete ui;
}

void loginWindow::on_registerPushButton_clicked()
{
    customers.close();
    admins.close();
    hide();
    registerWindow * r = new registerWindow();
    r->show();
}


void loginWindow::on_loginPushButton_clicked()
{
    ui->errorMessage->setVisible(false);

    QStringList userCredList;
    QString password;

    QTextStream Cust (&customers);
    customers.open(QIODevice::ReadWrite | QIODevice::Text);

    QTextStream Adm (&admins);
    admins.open(QIODevice::ReadWrite | QIODevice::Text);

    QString inputuser = ui->usernameInput->text();
    QString inputpassword = ui->passwordInput->text();

    if(inputuser == "" || inputpassword == "")
        ui->errorMessage->setVisible(true);

    qDebug() << inputuser << inputpassword;

    while(!Cust.atEnd())
    {
        userCredList = Cust.readLine().split(" ");
        qDebug() << userCredList[0] << userCredList[1] << "\n";
        if (inputuser == userCredList[0] && inputpassword == userCredList[1])
        {
            hide();
            ProductPage *w = new ProductPage;
            w->show();
        }
    }
    Cust.seek(0);

    while(!Adm.atEnd())
    {
        userCredList = Adm.readLine().split(" ");
        qDebug() << userCredList[0] << userCredList[1] << "\n";
        if (inputuser == userCredList[0] && inputpassword == userCredList[1])
        {
            hide();
            ProductPage *w = new ProductPage;
            w->show();
        }
    }
    Adm.seek(0);

    ui->errorMessage->setVisible(true);

}

