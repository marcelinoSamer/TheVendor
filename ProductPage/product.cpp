#include "product.h"
#include "productratigwidget.h"

Product::Product(QWidget *parent)
    : QWidget(parent),
    imageLabel(new QLabel(this)),
    priceLabel(new QLabel(this)),
    titleLabel(new QLabel(this)),
    descriptionText(new QTextEdit(this)),
    addToCartButton(new QPushButton("Add to Cart", this)),
    buyButton(new QPushButton("Buy", this))
{
    // Initialize labels
    imageLabel->setFixedSize(400, 400); // Adjust size as needed
    imageLabel->setScaledContents(true);
    imageLabel->setStyleSheet("background-color: #e0e0e0;");  // Placeholder color

    descriptionText->setReadOnly(true);

    // Set default text for labels
    titleLabel->setText("Product Title");
    priceLabel->setText("Price: $9.99");
    descriptionText->setText("This is a sample product.");

    // Connect buttons to their slots
    connect(addToCartButton, &QPushButton::clicked, this, &Product::onAddToCartButtonClicked);
    connect(buyButton, &QPushButton::clicked, this, &Product::onBuyButtonClicked);

    // Layout setup for description, price, and title
    QVBoxLayout *infoLayout = new QVBoxLayout;
    infoLayout->addWidget(descriptionText);

    QHBoxLayout *priceTitleLayout = new QHBoxLayout;
    priceTitleLayout->addWidget(priceLabel);
    priceTitleLayout->addWidget(titleLabel);

    infoLayout->addLayout(priceTitleLayout);

    // Layout for buttons (next to each other)
    QHBoxLayout *buttonLayout = new QHBoxLayout;
    buttonLayout->addWidget(addToCartButton);
    buttonLayout->addWidget(buyButton);

    // Layout to center the image
    QHBoxLayout *imageLayout = new QHBoxLayout;
    imageLayout->addWidget(imageLabel);
    imageLayout->setAlignment(imageLabel, Qt::AlignCenter);

    // Main layout containing the image, info layout, and buttons
    QVBoxLayout *mainContentLayout = new QVBoxLayout;
    mainContentLayout->addLayout(imageLayout);  // Center the image
    mainContentLayout->addLayout(infoLayout);
    mainContentLayout->addLayout(buttonLayout);

    setLayout(mainContentLayout);

    setWindowTitle(tr("Product"));
    resize(800, 600);
}

Product::~Product() {
}

void Product::setProductImage(const QPixmap &image) {
    imageLabel->setPixmap(image.scaled(imageLabel->size(), Qt::KeepAspectRatio, Qt::SmoothTransformation));
}

void Product::setPrice(const QString &price) {
    priceLabel->setText("Price: " + price);
}

void Product::setTitle(const QString &title) {
    titleLabel->setText(title);
}

void Product::setDescription(const QString &description) {
    descriptionText->setText(description);
}

void Product::onAddToCartButtonClicked() {
    // Add your logic for "Add to Cart" button here
    qDebug("Add to Cart button clicked");
}

void Product::onBuyButtonClicked() {
    hide();
    ProductRatingWidget * p = new ProductRatingWidget();
    p ->show();

    //we should also add the function that adds to the shopping cart that w
}
