#include "loginwindow.h"
#include <QApplication>
#include "ProductPage/product.h"
#include "addproductpage.h"
#include <QStandardPaths>
#include <QDir>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    QDir().mkpath(dataPath + "/TheVendor/");
    if(QFile::copy(":/DataBase/assets/DataBase/Users/Admin.txt", dataPath + "/TheVendor/Admin.txt"))
    {
        qDebug() << "success";
    }

    if(QFile::copy(":/DataBase/assets/DataBase/Users/Customers.txt", dataPath + "/TheVendor/Customers.txt"))
    {
        qDebug() << "success";
    }

    qDebug() << dataPath;

    customers.setPermissions(QFile::WriteUser | QFile::ReadUser);
    admins.setPermissions(QFile::WriteUser | QFile::ReadUser);



    loginWindow* w = new loginWindow();
    w->show();


    return a.exec();
}
