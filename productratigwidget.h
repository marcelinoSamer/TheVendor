#ifndef PRODUCTRATINGWIDGET_H
#define PRODUCTRATINGWIDGET_H

#include <QWidget>
#include <QLabel>
#include <QVBoxLayout>
#include <QHBoxLayout>
#include <QPushButton>
#include <QFile>
#include <QTextStream>
#include "ProductPage/starrating.h"

class ProductRatingWidget : public QWidget {
    Q_OBJECT

public:
    explicit ProductRatingWidget(QWidget *parent = nullptr);
    void setProductRating(float rating);
    float getProductRating() const;

private slots:
    void onRatingChanged(float rating);
    void onSaveButtonClicked();

private:
    QLabel *ratingLabel;
    StarRating *starRating;
    QPushButton *saveButton;
    float productRating;
    QString ratingFileName;

    void loadRating();
    void saveRating();
};

#endif // PRODUCTRATINGWIDGET_H
