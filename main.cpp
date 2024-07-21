#include "loginwindow.h"
#include <QApplication>
#include "ProductPage/product.h"
#include "addproductpage.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    loginWindow* w = new loginWindow();
    w->show();


    return a.exec();
}
