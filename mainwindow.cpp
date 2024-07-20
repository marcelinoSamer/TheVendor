#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "users.h"
#include "ProductPage/ProductPage.h"


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ProductPage *p = new ProductPage;
    p->show();
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_loginPushButton_clicked()
{

}
