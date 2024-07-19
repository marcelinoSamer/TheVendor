#ifndef CARDVIEW_H
#define CARDVIEW_H

#include <QWidget>
#include <QVBoxLayout>
#include <QPushButton>
#include <QLabel>
#include <QFrame>
#include "starrating.h"

class CardView : public QWidget {
    Q_OBJECT

public:
    explicit CardView(QWidget *parent = nullptr);

    void addCard(const QString &imagePath, const QString &title, const QString &description, const QStringList &categories, int rating);

signals:
    void cardClicked(const QString &imagePath, const QString &title, const QString &description);

private slots:
    void handleCardClick();

private:
    QVBoxLayout *layout;
};

#endif // CARDVIEW_H
