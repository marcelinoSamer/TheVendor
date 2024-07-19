#ifndef PRODUCT_H
#define PRODUCT_H

#include <QGroupBox>

namespace Ui {
class Product;
}

class Product : public QGroupBox
{
    Q_OBJECT

public:
    explicit Product(QWidget *parent = nullptr);
    ~Product();

private:
    Ui::Product *ui;
};

#endif // PRODUCT_H
