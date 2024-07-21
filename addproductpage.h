#ifndef ADDPRODUCTPAGE_H
#define ADDPRODUCTPAGE_H

#include <QDialog>

namespace Ui {
class addProductPage;
}

class addProductPage : public QDialog
{
    Q_OBJECT

public:
    explicit addProductPage(QWidget *parent = nullptr);
    ~addProductPage();

private:
    Ui::addProductPage *ui;
};

#endif // ADDPRODUCTPAGE_H
