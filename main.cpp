#include "loginwindow.h"
#include <QApplication>
#include "ProductPage/product.h"
#include "addproductpage.h"
#include <QStandardPaths>
#include <QDir>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    // QString dataPath = QStandardPaths::writableLocation(QStandardPaths::AppDataLocation);
    // QDir().mkpath(dataPath);
    // if(QFile::copy(":/DataBase/assets/DataBase/Users/Admin.txt", dataPath + "/Admin.txt"))
    // {
    //     qDebug() << "success";
    // }
    // QFile admins(dataPath + "/Admin.txt");

    // QDir().mkpath(dataPath);
    // if(QFile::copy(":/DataBase/assets/DataBase/Users/Customers.txt", dataPath + "/Customers.txt"))
    // {
    //     qDebug() << "success";
    // }
    // QFile customers(dataPath + "/Customers.txt");



    loginWindow* w = new loginWindow();
    w->show();


    return a.exec();
}
