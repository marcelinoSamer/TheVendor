#include "productpage.h"
#include <QVBoxLayout>
#include <QHBoxLayout>
#include <QMessageBox>
#include "product.h"
#include "ProductPage/ProductPage.h"

ProductPage::ProductPage(QWidget *parent)
    : QWidget(parent),
    searchBar(new QLineEdit(this)),
    addProductButton(new QPushButton("Add Product", this)),
    shoppingCartButton(new QPushButton("Cart", this))
{
    searchBar->setPlaceholderText("Search...");
    connect(searchBar, &QLineEdit::textChanged, this, &ProductPage::filterCards);

    // Connect buttons to their slots
    connect(addProductButton, &QPushButton::clicked, this, &ProductPage::onAddProductClicked);
    connect(shoppingCartButton, &QPushButton::clicked, this, &ProductPage::onShoppingCartClicked);

    createCardView();

    // Connect the cardClicked signal to the onCardClicked slot
    connect(cardView, &CardView::cardClicked, this, &ProductPage::onCardClicked);

    setupLayout();
}

ProductPage::~ProductPage() {
    // Clean up resources
}

void ProductPage::onCardClicked(const QString &imagePath, const QString &title, const QString &description) {
    Product *product = new Product();
    product->setProductImage(QPixmap(imagePath));
    product->setTitle(title);
    product->setDescription(description);
    // Assuming price is not included in the signal; handle it as needed.
    product->show();
}

void ProductPage::onAddProductClicked() {
    QMessageBox::information(this, "Add Product", "Add Product button clicked");
    // Implement the logic to add a new product
}

void ProductPage::onShoppingCartClicked() {
    QMessageBox::information(this, "Shopping Cart", "Shopping Cart button clicked");
    // Implement the logic to view the shopping cart
}

void ProductPage::createCardView() {
    cardView = new CardView(this); // Create the CardView widget

    // Add sample cards
    cardView->addCard(":/productImages/assets/cat1.jpg", "Card 1", "This is the description for card 1.", {"Category 1", "Category 2"}, 4, "$19.99");
    cardView->addCard(":/productImages/assets/cat2.jpg", "Card 2", "This is the description for card 2.", {"Category 3", "Category 4"}, 3.5, "$29.99");
    cardView->addCard(":/productImages/assets/cat2.jpg", "Card 2", "This is the description for card 2.", {"Category 3", "Category 4"}, 3.5, "$29.99");
    cardView->addCard(":/productImages/assets/cat2.jpg", "Card 2", "This is the description for card 2.", {"Category 3", "Category 4"}, 3.5, "$29.99");
    cardView->addCard(":/productImages/assets/cat2.jpg", "Card 2", "This is the description for card 2.", {"Category 3", "Category 4"}, 3.5, "$29.99");
    cardView->addCard(":/productImages/assets/cat2.jpg", "Card 2", "This is the description for card 2.", {"Category 3", "Category 4"}, 3.5, "$29.99");
    cardView->addCard(":/productImages/assets/cat2.jpg", "Card 2", "This is the description for card 2.", {"Category 3", "Category 4"}, 3.5, "$29.99");
    cardView->addCard(":/productImages/assets/cat2.jpg", "Card 2", "This is the description for card 2.", {"Category 3", "Category 4"}, 3.5, "$29.99");
    cardView->addCard(":/productImages/assets/cat2.jpg", "Card 2", "This is the description for card 2.", {"Category 3", "Category 4"}, 3.5, "$29.99");
    cardView->addCard(":/productImages/assets/cat2.jpg", "Card 2", "This is the description for card 2.", {"Category 3", "Category 4"}, 3.5, "$29.99");
    cardView->addCard(":/productImages/assets/cat2.jpg", "Card 2", "This is the description for card 2.", {"Category 3", "Category 4"}, 3.5, "$29.99");
    cardView->addCard(":/productImages/assets/cat2.jpg", "Card 2", "This is the description for card 2.", {"Category 3", "Category 4"}, 3.5, "$29.99");
    // Add more cards if needed
}

void ProductPage::setupLayout() {
    QHBoxLayout *topLayout = new QHBoxLayout;
    topLayout->addWidget(searchBar);
    topLayout->addWidget(addProductButton);
    topLayout->addWidget(shoppingCartButton);

    QVBoxLayout *mainLayout = new QVBoxLayout(this);
    mainLayout->addLayout(topLayout); // Add top layout with search bar and buttons
    mainLayout->addWidget(cardView);  // Add CardView below the search bar

    setLayout(mainLayout); // Set the main layout for this widget
}

void ProductPage::filterCards(const QString &query) {
    cardView->filter(query); // Call the filter method of CardView
}
