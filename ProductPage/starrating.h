#ifndef STARRATING_H
#define STARRATING_H

#include <QWidget>

class StarRating : public QWidget {
    Q_OBJECT
    Q_PROPERTY(float rating READ rating WRITE setRating NOTIFY ratingChanged)
    Q_PROPERTY(float starSize READ starSize WRITE setStarSize)

public:
    explicit StarRating(QWidget *parent = nullptr);
    float rating() const;
    float starSize() const;
    QSize sizeHint() const override;

public slots:
    void setRating(float rating);
    void setStarSize(float size);

signals:
    void ratingChanged(float rating);

protected:
    void paintEvent(QPaintEvent *event) override;
    void mousePressEvent(QMouseEvent *event) override;

private:
    float m_rating;
    float m_starSize;
};

#endif // STARRATING_H
