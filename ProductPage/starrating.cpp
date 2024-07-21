#include "ProductPage/starrating.h"
#include <QPainter>
#include <QMouseEvent>
#include <QDir>
StarRating::StarRating(QWidget *parent)
    : QWidget(parent), m_rating(0), m_starSize(20) {} // Default size

float StarRating::rating() const {
    return m_rating;
}

float StarRating::starSize() const {
    return m_starSize;
}

QSize StarRating::sizeHint() const {
    return QSize(m_starSize * 5, m_starSize); // Adjust size hint based on star size
}

void StarRating::setRating(float rating) {
    if (m_rating != rating) {
        m_rating = rating;
        emit ratingChanged(rating);
        update();
    }
}

void StarRating::setStarSize(float size) {
    if (m_starSize != size) {
        m_starSize = size;
        update();
    }
}

void StarRating::paintEvent(QPaintEvent *event) {
    Q_UNUSED(event);

    QPainter painter(this);
    painter.setRenderHint(QPainter::Antialiasing, true);

    QPixmap filledStar(":/stars/assets/filled.png");
    QPixmap unfilledStar(":/stars/assets/unfilled.png");
    QPixmap half(":/stars/assets/half.png");

    filledStar = filledStar.scaled(m_starSize, m_starSize, Qt::KeepAspectRatio, Qt::SmoothTransformation);
    unfilledStar = unfilledStar.scaled(m_starSize, m_starSize, Qt::KeepAspectRatio, Qt::SmoothTransformation);
    half = half.scaled(m_starSize, m_starSize, Qt::KeepAspectRatio, Qt::SmoothTransformation);


    for (int i = 0; i < 5; ++i) {
        QRect starRect(i * m_starSize, 0, m_starSize, m_starSize);

        QPixmap starPixmap = unfilledStar;
        if (i < m_rating - 0.5) {
            starPixmap = filledStar;
        } else if (i == m_rating - 0.5) {
            starPixmap = half;
        }

        painter.drawPixmap(starRect, starPixmap);
    }
}

void StarRating::mousePressEvent(QMouseEvent *event) {
    float newRating = event->x() / (width() / 5) + 1;
    setRating(newRating);
}
