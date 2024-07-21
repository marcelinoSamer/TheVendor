#include "productratigwidget.h"

ProductRatingWidget::ProductRatingWidget(QWidget *parent)
    : QWidget(parent),
    ratingLabel(new QLabel("Product Rating:")),
    starRating(new StarRating(this)),
    saveButton(new QPushButton("Save Rating")),
    productRating(0.0f),
    ratingFileName("product_rating.txt") {

    QVBoxLayout *mainLayout = new QVBoxLayout;

    QHBoxLayout *ratingLayout = new QHBoxLayout;
    ratingLayout->addWidget(ratingLabel);
    ratingLayout->addWidget(starRating);

    mainLayout->addLayout(ratingLayout);
    mainLayout->addWidget(saveButton, 0, Qt::AlignCenter);  // Center the save button

    setLayout(mainLayout);

    // Set fixed size for the widget
    setFixedSize(300, 100);

    connect(starRating, &StarRating::ratingChanged, this, &ProductRatingWidget::onRatingChanged);
    connect(saveButton, &QPushButton::clicked, this, &ProductRatingWidget::onSaveButtonClicked);

    loadRating();
}

void ProductRatingWidget::setProductRating(float rating) {
    productRating = rating;
    starRating->setRating(rating);
}

float ProductRatingWidget::getProductRating() const {
    return productRating;
}

void ProductRatingWidget::onRatingChanged(float rating) {
    productRating = rating;
    ratingLabel->setText(QString("Product Rating: %1").arg(rating));
}

void ProductRatingWidget::onSaveButtonClicked() {
    saveRating();
}

void ProductRatingWidget::loadRating() {
    QFile file(ratingFileName);
    if (file.exists() && file.open(QIODevice::ReadOnly)) {
        QTextStream in(&file);
        QString ratingStr = in.readLine();
        bool ok;
        float rating = ratingStr.toFloat(&ok);
        if (ok) {
            setProductRating(rating);
        }
        file.close();
    }
}

void ProductRatingWidget::saveRating() {
    QFile file(ratingFileName);
    if (file.open(QIODevice::WriteOnly)) {
        QTextStream out(&file);
        out << productRating;
        file.close();
    }
}
