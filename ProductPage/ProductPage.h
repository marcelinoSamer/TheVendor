#ifndef PRODUCTPAGE_H
#define PRODUCTPAGE_H

#include <QWidget>
#include <QLineEdit> // For the search bar
#include <QPushButton> // For the buttons
#include "cardview.h"

class ProductPage : public QWidget {
    Q_OBJECT

public:
    explicit ProductPage(QWidget *parent = nullptr);
    ~ProductPage();

private slots:
    void onCardClicked(const QString &imagePath, const QString &title, const QString &description);
    void filterCards(const QString &query); // Slot for filtering cards
    void onAddProductClicked(); // Slot for "Add Product" button click
    void onShoppingCartClicked(); // Slot for shopping cart button click

private:
    QLineEdit *searchBar; // Search bar widget
    QPushButton *addProductButton; // Button to add a new product
    QPushButton *shoppingCartButton; // Button to view shopping cart
    CardView *cardView; // CardView widget
    void createCardView(); // Function to initialize the CardView
    void setupLayout(); // Function to set up the layout
};

#endif // PRODUCTPAGE_H
