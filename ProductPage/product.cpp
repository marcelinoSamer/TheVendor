#include "product.h"
#include <QLabel>
#include <QVBoxLayout>
#include <QHBoxLayout>
#include <QPushButton>

Product::Product(QWidget *parent)
    : QWidget(parent)
{
    QLabel *nameLabel = new QLabel("Product Name: Sample Product");
    QLabel *priceLabel = new QLabel("Price: $9.99");
    QLabel *descriptionLabel = new QLabel("Description: This is a sample product.");

    imageLabel = new QLabel(this);
    imageLabel->setFixedSize(300, 300);
    imageLabel->setStyleSheet("background-color: #e0e0e0;");  // Placeholder color

    priceLabel = new QLabel(this);
    titleLabel = new QLabel(this);
    descriptionText = new QTextEdit(this);
    descriptionText->setReadOnly(true);

    addToCartButton = new QPushButton("Add to Cart", this);
    buyButton = new QPushButton("Buy", this);

    connect(addToCartButton, &QPushButton::clicked, this, &Product::onAddToCartButtonClicked);
    connect(buyButton, &QPushButton::clicked, this, &Product::onBuyButtonClicked);

    QVBoxLayout *infoLayout = new QVBoxLayout;
    infoLayout->addWidget(nameLabel);
    infoLayout->addWidget(priceLabel);
    infoLayout->addWidget(descriptionLabel);

    topLayout = new QHBoxLayout;
    topLayout->addWidget(imageLabel);
    topLayout->addLayout(infoLayout);

    buttonLayout = new QVBoxLayout;
    buttonLayout->addWidget(addToCartButton);
    buttonLayout->addWidget(buyButton);

    mainLayout = new QVBoxLayout;
    mainLayout->addLayout(topLayout);
    mainLayout->addLayout(buttonLayout);

    setLayout(mainLayout);

    setWindowTitle(tr("Product"));
    resize(300, 150);
}

Product::~Product()
{
    // Qt automatically deletes child widgets, so no need to delete them manually
}

void Product::setProductImage(const QPixmap &image)
{
    imageLabel->setPixmap(image);
}

void Product::setPrice(const QString &price)
{
    priceLabel->setText(price);
}

void Product::setTitle(const QString &title)
{
    titleLabel->setText(title);
}

void Product::setDescription(const QString &description)
{
    descriptionText->setText(description);
}

void Product::onAddToCartButtonClicked()
{
    // Add your logic for "Add to Cart" button here
    qDebug("Add to Cart button clicked");
}

void Product::onBuyButtonClicked()
{
    // Add your logic for "Buy" button here
    qDebug("Buy button clicked");
}
