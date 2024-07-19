#include "productpage.h"
#include <QMessageBox>
#include <QVBoxLayout>

ProductPage::ProductPage(QWidget *parent)
    : QWidget(parent) {
    createCardView(); // Initialize and set up the CardView widget
}

ProductPage::~ProductPage() {
    // Clean up resources
}

void ProductPage::createCardView() {
    cardView = new CardView(this);
    connect(cardView, &CardView::cardClicked, this, &ProductPage::onCardClicked);

    // Add sample cards
    cardView->addCard("C:/Users/Test/Desktop/cat1.jpg", "Card 1", "This is the description for card 1.", {"Category 1", "Category 2"}, 4);  //pathhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhh
    cardView->addCard("C:/Users/Test/Desktop/cat2.jpg", "Card 2", "This is the description for card 2.", {"Category 3", "Category 4"}, 3.5);    //pathhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhh
    cardView->addCard("C:/Users/Test/Desktop/vacuum.jpg", "Card 3", "This is the description for card 3.", {"Category 5", "Category 6"}, 5);    //pathhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhh

    // Set the layout to include the CardView
    QVBoxLayout *layout = new QVBoxLayout(this);
    layout->addWidget(cardView);
    setLayout(layout);
}

void ProductPage::onCardClicked(const QString &imagePath, const QString &title, const QString &description) {
    QMessageBox::information(this, "Card Clicked",
                             QString("Title: %1\nDescription: %2\nImage Path: %3").arg(title, description, imagePath));
}
