#include "ProductPage/productpage.h"
#include <QVBoxLayout>
#include <QMessageBox>
#include <ProductPage/product.h>
ProductPage::ProductPage(QWidget *parent)
    : QWidget(parent) {
    searchBar = new QLineEdit(this);
    searchBar->setPlaceholderText("Search...");
    connect(searchBar, &QLineEdit::textChanged, this, &ProductPage::filterCards);

    createCardView();

    // Connect the cardClicked signal to the onCardClicked slot
    connect(cardView, &CardView::cardClicked, this, &ProductPage::onCardClicked);

    setupLayout();
}
void ProductPage::onCardClicked(const QString &imagePath, const QString &title, const QString &description) {
    Product *product = new Product();
    product->setProductImage(QPixmap(imagePath));
    product->setTitle(title);
    product->setDescription(description);
    // Assuming price is not included in the signal; handle it as needed.
    product->show();
}

ProductPage::~ProductPage() {
    // Clean up resources
}

void ProductPage::createCardView() {
    cardView = new CardView(this); // Create the CardView widget

    // Add sample cards
    cardView->addCard("C:/Users/Test/Desktop/cat1.jpg", "Card 1", "This is the description for card 1.This is the description for card 1.This is the description for card 1.This is the description for card 1.This is the description for card 1.This is the description for card 1.", {"Category 1", "Category 2"}, 4);
    cardView->addCard(":/productImages/assets/cat2.jpg", "Card 2", "This is the description for card 2.", {"Category 3", "Category 4"}, 3.5);
    // Add more cards if needed
}

void ProductPage::setupLayout() {
    QVBoxLayout *mainLayout = new QVBoxLayout(this); // Create a vertical layout

    mainLayout->addWidget(searchBar); // Add search bar to the layout
    mainLayout->addWidget(cardView);  // Add CardView below the search bar

    setLayout(mainLayout); // Set the main layout for this widget
}

void ProductPage::filterCards(const QString &query) {
    cardView->filter(query); // Call the filter method of CardView
}
