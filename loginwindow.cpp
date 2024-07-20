#include "loginwindow.h"
#include "ui_loginwindow.h"
#include "registerwindow.h"
#include "mainwindow.h"
#include "ProductPage/ProductPage.h"
#include "users.h"
#include <QTextStream>

loginWindow::loginWindow(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::loginWindow)
{
    ui->setupUi(this);
    ui->errorMessage->setVisible(false);

    QTextStream inC (&customers);
    if (!customers.open(QIODevice::ReadOnly | QIODevice::Text))
        qDebug() << "file not open";
    else
        qDebug() << "file is open";

    QTextStream inA (&admins);
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
    hide();
    registerWindow * r = new registerWindow();
    r->show();
}


void loginWindow::on_loginPushButton_clicked()
{
    QStringList userCredList;
    QString password;

    QTextStream inC (&customers);
    customers.open(QIODevice::ReadOnly | QIODevice::Text);

    QTextStream inA (&admins);
    admins.open(QIODevice::ReadOnly | QIODevice::Text);

    QString inputuser = ui->usernameInput->text();
    QString inputpassword = ui->passwordInput->text();

    qDebug() << inputuser << inputpassword;

    while(!inC.atEnd())
    {
        userCredList = inC.readLine().split(" ");
        qDebug() << userCredList[0] << userCredList[1] << "\n";
        if (inputuser == userCredList[0] && inputpassword == userCredList[1])
        {
            hide();
            ProductPage *w = new ProductPage;
            w->show();
        }
    }

    while(!inA.atEnd())
    {
        userCredList = inA.readLine().split(" ");
        qDebug() << userCredList[0] << userCredList[1] << "\n";
        if (inputuser == userCredList[0] && inputpassword == userCredList[1])
        {
            hide();
            ProductPage *w = new ProductPage;
            w->show();
        }
    }
    inC.seek(0);
}

