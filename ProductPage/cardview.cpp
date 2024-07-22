#include "cardview.h"
#include <QGraphicsDropShadowEffect>
#include <QPixmap>
#include <QHBoxLayout>
#include <QVBoxLayout>
#include <QPushButton>
#include <QDebug>
#include <QMouseEvent>
#include <QScrollArea>

CardView::CardView(QWidget *parent) : QWidget(parent) {
    QVBoxLayout *mainLayout = new QVBoxLayout(this);
    QScrollArea *scrollArea = new QScrollArea(this);
    QWidget *containerWidget = new QWidget(this);
    layout = new QVBoxLayout(containerWidget);

    containerWidget->setLayout(layout);
    scrollArea->setWidget(containerWidget);
    scrollArea->setWidgetResizable(true);

    mainLayout->addWidget(scrollArea);
    setLayout(mainLayout);
}

void CardView::addCard(const QString &imagePath, const QString &title, const QString &description, const QStringList &categories, float rating, const QString &price) {
    QFrame *card = new QFrame(this);
    card->setFrameShape(QFrame::Box);
    card->setLineWidth(2);
    card->setStyleSheet("QFrame { background-color: white; border-radius: 10px; }");

    QGraphicsDropShadowEffect *shadow = new QGraphicsDropShadowEffect();
    shadow->setBlurRadius(10);
    shadow->setOffset(5, 5);
    card->setGraphicsEffect(shadow);

    QHBoxLayout *cardLayout = new QHBoxLayout(card);
    cardLayout->setContentsMargins(10, 10, 10, 10);  // Margins for the card layout
    cardLayout->setSpacing(10);  // Spacing between widgets

    // Image Button
    QPushButton *imageButton = new QPushButton(card);
    imageButton->setObjectName("imageButton");
    QPixmap pixmap(imagePath);
    pixmap = pixmap.scaled(200, 200, Qt::KeepAspectRatio, Qt::SmoothTransformation);
    imageButton->setIcon(QIcon(pixmap));
    imageButton->setIconSize(pixmap.size());
    imageButton->setFixedSize(200, 200);
    imageButton->setStyleSheet("border: none;");

    // Text Widget
    QWidget *textWidget = new QWidget(card);
    QVBoxLayout *textLayout = new QVBoxLayout(textWidget);
    textLayout->setContentsMargins(0, 0, 0, 0);  // Remove margins
    textLayout->setSpacing(10);  // Spacing between widgets

    QPushButton *titleButton = new QPushButton(title, card);
    titleButton->setObjectName("titleButton");
    titleButton->setStyleSheet("font-weight: bold; font-size: 24px; border: none; color: black;");

    QLabel *priceLabel = new QLabel(price, card);
    priceLabel->setAlignment(Qt::AlignLeft);
    priceLabel->setStyleSheet("font-size: 20px; color: green;");

    // Move delete button to the top right
    QPushButton *deleteButton = new QPushButton("Delete", card);
    deleteButton->setObjectName("deleteButton");
    deleteButton->setStyleSheet("background-color: red; color: white; font-size: 14px; padding: 2px 5px;");
    connect(deleteButton, &QPushButton::clicked, this, &CardView::onDeleteButtonClicked);

    // Layout for delete button
    QHBoxLayout *deleteButtonLayout = new QHBoxLayout;
    deleteButtonLayout->addStretch();
    deleteButtonLayout->addWidget(deleteButton);
    deleteButtonLayout->setAlignment(Qt::AlignTop | Qt::AlignRight);

    textLayout->addLayout(deleteButtonLayout);

    QString truncatedDescription = description.left(150);
    if (description.length() > 150) {
        truncatedDescription += "...";
    }

    QLabel *descriptionLabel = new QLabel(truncatedDescription, card);
    descriptionLabel->setAlignment(Qt::AlignLeft);
    descriptionLabel->setStyleSheet("font-size: 18px; color: black;");

    // Adjust the bottom layout
    QHBoxLayout *bottomLayout = new QHBoxLayout();
    bottomLayout->setContentsMargins(0, 0, 0, 0);  // Remove margins

    StarRating *ratingWidget = new StarRating(card);
    ratingWidget->setRating(rating);
    ratingWidget->setContentsMargins(0, 0, 10, 0);

    QLabel *categoriesLabel = new QLabel(categories.join(", "), card);
    categoriesLabel->setAlignment(Qt::AlignLeft);
    categoriesLabel->setStyleSheet("font-size: 16px; color: black;");

    bottomLayout->addWidget(ratingWidget);
    bottomLayout->addWidget(categoriesLabel);
    bottomLayout->addStretch();  // Stretch to push items to the right

    textLayout->addWidget(descriptionLabel);
    textLayout->addWidget(priceLabel);
    textLayout->addLayout(bottomLayout);

    cardLayout->addWidget(imageButton);
    cardLayout->addWidget(textWidget);

    card->setLayout(cardLayout);

    layout->addWidget(card);

    card->installEventFilter(this);

    cardMap[card] = {
        {"imagePath", imagePath},
        {"title", title},
        {"description", description},
        {"categories", categories.join(", ")},
        {"price", price}
    };
}


void CardView::removeCard(QFrame *card) {
    if (cardMap.contains(card)) {
        cardMap.remove(card);
        delete card;
    }
}

void CardView::filter(const QString &query) {
    for (auto *card : cardMap.keys()) {
        bool matches = cardMap[card]["title"].contains(query, Qt::CaseInsensitive) ||
                       cardMap[card]["description"].contains(query, Qt::CaseInsensitive) ||
                       cardMap[card]["categories"].contains(query, Qt::CaseInsensitive);
        card->setVisible(matches);
    }
}

bool CardView::eventFilter(QObject *watched, QEvent *event) {
    if (event->type() == QEvent::MouseButtonPress) {
        auto *card = qobject_cast<QFrame*>(watched);
        if (card && cardMap.contains(card)) {
            emit cardClicked(cardMap[card]["imagePath"], cardMap[card]["title"], cardMap[card]["description"], cardMap[card]["price"]);
            return true;
        }
    }
    return QWidget::eventFilter(watched, event);
}

void CardView::onDeleteButtonClicked() {
    auto *button = qobject_cast<QPushButton*>(sender());
    if (button) {
        // Find the card (QFrame) by navigating up the parent hierarchy
        QWidget *parentWidget = button->parentWidget();
        QWidget *grandparentWidget = parentWidget ? parentWidget->parentWidget() : nullptr;
        QFrame *card = qobject_cast<QFrame*>(grandparentWidget);

        if (card && cardMap.contains(card)) {
            qDebug() << "Deleting card with title:" << cardMap[card]["title"];
            removeCard(card);
        } else {
            qDebug() << "Card not found or not in the card map.";
        }
    } else {
        qDebug() << "Sender is not a QPushButton";
    }
}
