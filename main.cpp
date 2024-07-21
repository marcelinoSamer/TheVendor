#include "loginwindow.h"
#include <QApplication>
#include "ProductPage/product.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    // loginWindow w;
    // w.show();
    Product w ;
    w.show();


    return a.exec();
}
