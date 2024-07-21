#include "cardview.h"
#include <QGraphicsDropShadowEffect>
#include <QPixmap>
#include <QHBoxLayout>
#include <QVBoxLayout>
#include <QPushButton>
#include <QDebug>
#include <QMouseEvent>

CardView::CardView(QWidget *parent) : QWidget(parent) {
    layout = new QVBoxLayout(this);
    setLayout(layout);
}

void CardView::addCard(const QString &imagePath, const QString &title, const QString &description, const QStringList &categories, float rating) {
    QFrame *card = new QFrame(this);
    card->setFrameShape(QFrame::Box);
    card->setLineWidth(2);
    card->setStyleSheet("QFrame { background-color: white; border-radius: 10px; }");

    QGraphicsDropShadowEffect *shadow = new QGraphicsDropShadowEffect();
    shadow->setBlurRadius(10);
    shadow->setOffset(5, 5);
    card->setGraphicsEffect(shadow);

    QHBoxLayout *cardLayout = new QHBoxLayout(card);

    QPushButton *imageButton = new QPushButton(card);
    imageButton->setObjectName("imageButton");
    QPixmap pixmap(imagePath);
    pixmap = pixmap.scaled(200, 200, Qt::KeepAspectRatio, Qt::SmoothTransformation);
    imageButton->setIcon(QIcon(pixmap));
    imageButton->setIconSize(pixmap.size());
    imageButton->setFixedSize(200, 200);
    imageButton->setStyleSheet("border: none;");

    QWidget *textWidget = new QWidget(card);
    QVBoxLayout *textLayout = new QVBoxLayout(textWidget);

    QPushButton *titleButton = new QPushButton(title, card);
    titleButton->setObjectName("titleButton");
    titleButton->setStyleSheet("font-weight: bold; font-size: 24px; border: none;color:black;");

    QPushButton *deleteButton = new QPushButton("Delete", card);
    deleteButton->setObjectName("deleteButton");
    deleteButton->setStyleSheet("background-color: red; color: white;");

    connect(deleteButton, &QPushButton::clicked, this, &CardView::onDeleteButtonClicked);

    QString truncatedDescription = description.left(150);
    if (description.length() > 150) {
        truncatedDescription += "...";
    }

    QLabel *descriptionLabel = new QLabel(truncatedDescription, card);
    descriptionLabel->setAlignment(Qt::AlignCenter);
    descriptionLabel->setStyleSheet("font-size: 18px;color:black;");

    QHBoxLayout *bottomLayout = new QHBoxLayout();

    QLabel *categoriesLabel = new QLabel(categories.join(", "), card);
    categoriesLabel->setAlignment(Qt::AlignLeft);
    categoriesLabel->setStyleSheet("font-size: 16px;color:black;");

    StarRating *ratingWidget = new StarRating(card);
    ratingWidget->setRating(rating);
    ratingWidget->setContentsMargins(0, 0, 10, 0);

    bottomLayout->addWidget(categoriesLabel);
    bottomLayout->addStretch();
    bottomLayout->addWidget(ratingWidget);
    bottomLayout->addWidget(deleteButton);

    textLayout->addWidget(titleButton);
    textLayout->addWidget(descriptionLabel);
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
        {"categories", categories.join(", ")}
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
            emit cardClicked(cardMap[card]["imagePath"], cardMap[card]["title"], cardMap[card]["description"]);
            return true;
        }
    }
    return QWidget::eventFilter(watched, event);
}

void CardView::handleCardClick() {
    auto *button = qobject_cast<QPushButton*>(sender());
    if (button) {
        auto *card = qobject_cast<QFrame*>(button->parentWidget()->parentWidget());
        if (card && cardMap.contains(card)) {
            emit cardClicked(cardMap[card]["imagePath"], cardMap[card]["title"], cardMap[card]["description"]);
        }
    }
}

void CardView::onDeleteButtonClicked() {
    auto *button = qobject_cast<QPushButton*>(sender());
    if (button) {
        auto *card = qobject_cast<QFrame*>(button->parentWidget()->parentWidget()->parentWidget());
        if (card) {
            removeCard(card);
        }
    }
}
