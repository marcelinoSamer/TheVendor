#ifndef PRODUCT_H
#define PRODUCT_H

#include <QWidget>
#include <QLabel>
#include <QTextEdit>
#include <QVBoxLayout>
#include <QHBoxLayout>
#include <QPushButton>
#include <QPixmap>
#include <QString>

class Product : public QWidget {


public:
    explicit Product(QWidget *parent = nullptr);
    ~Product();

    void setProductImage(const QPixmap &image);
    void setPrice(const QString &price);
    void setTitle(const QString &title);
    void setDescription(const QString &description);

private slots:
    void onAddToCartButtonClicked();
    void onBuyButtonClicked();

private:
    Q_OBJECT
    QLabel *imageLabel;
    QLabel *priceLabel;
    QLabel *titleLabel;
    QTextEdit *descriptionText;
    QPushButton *addToCartButton;
    QPushButton *buyButton;
    QVBoxLayout *mainLayout;
    QHBoxLayout *topLayout;
    QVBoxLayout *buttonLayout;
};

#endif // PRODUCT_H
