#include "cardview.h"
#include <QGraphicsDropShadowEffect>
#include <QPixmap>
#include <QHBoxLayout>
#include <QVBoxLayout>

CardView::CardView(QWidget *parent) : QWidget(parent) {
    layout = new QVBoxLayout(this);
    setLayout(layout);
}

void CardView::addCard(const QString &imagePath, const QString &title, const QString &description, const QStringList &categories, int rating) {
    QFrame *card = new QFrame(this);
    card->setFrameShape(QFrame::Box);
    card->setLineWidth(2);
    card->setStyleSheet("QFrame { background-color: white; border-radius: 10px; }");

    QGraphicsDropShadowEffect *shadow = new QGraphicsDropShadowEffect();
    shadow->setBlurRadius(10);
    shadow->setOffset(5, 5);
    card->setGraphicsEffect(shadow);

    QHBoxLayout *cardLayout = new QHBoxLayout(card); // Change to QHBoxLayout for side-by-side layout

    // Use QPushButton for the image and title to handle click events
    QPushButton *imageButton = new QPushButton(card);
    imageButton->setObjectName("imageButton");
    QPixmap pixmap(imagePath);
    pixmap = pixmap.scaled(200, 200, Qt::KeepAspectRatio, Qt::SmoothTransformation); // Scale to fit while keeping aspect ratio
    imageButton->setIcon(QIcon(pixmap));
    imageButton->setIconSize(pixmap.size());
    imageButton->setFixedSize(200, 200); // Set fixed size for the button to ensure the image fits within this size
    imageButton->setStyleSheet("border: none;");

    QWidget *textWidget = new QWidget(card); // Widget to contain text elements
    QVBoxLayout *textLayout = new QVBoxLayout(textWidget);

    QPushButton *titleButton = new QPushButton(title, card);
    titleButton->setObjectName("titleButton");
    titleButton->setStyleSheet("font-weight: bold; font-size: 24px; border: none; color: black;");

    connect(imageButton, &QPushButton::clicked, this, &CardView::handleCardClick);
    connect(titleButton, &QPushButton::clicked, this, &CardView::handleCardClick);

    QLabel *descriptionLabel = new QLabel(description, card);
    descriptionLabel->setAlignment(Qt::AlignCenter);
    descriptionLabel->setStyleSheet("font-size: 18px; color: black;");

    QHBoxLayout *bottomLayout = new QHBoxLayout();

    QLabel *categoriesLabel = new QLabel(categories.join(", "), card);
    categoriesLabel->setAlignment(Qt::AlignLeft);
    categoriesLabel->setStyleSheet("font-size: 16px; color: black;");

    StarRating *ratingWidget = new StarRating(card);
    ratingWidget->setRating(rating);
    ratingWidget->setContentsMargins(0, 0, 10, 0);

    bottomLayout->addWidget(categoriesLabel);
    bottomLayout->addStretch();
    bottomLayout->addWidget(ratingWidget);

    textLayout->addWidget(titleButton);
    textLayout->addWidget(descriptionLabel);
    textLayout->addLayout(bottomLayout);

    cardLayout->addWidget(imageButton);
    cardLayout->addWidget(textWidget); // Add textWidget to the right of the image

    card->setLayout(cardLayout);

    layout->addWidget(card);
}

void CardView::handleCardClick() {
    QPushButton *button = qobject_cast<QPushButton*>(sender());
    if (button) {
        QString imagePath = button->property("imagePath").toString();
        QString title = button->property("title").toString();
        QString description = button->property("description").toString();
        emit cardClicked(imagePath, title, description);
    }
}
