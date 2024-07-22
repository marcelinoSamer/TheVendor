#ifndef CARDVIEW_H
#define CARDVIEW_H

#include <QWidget>
#include <QVBoxLayout>
#include <QPushButton>
#include <QLabel>
#include <QFrame>
#include <QMap>
#include "starrating.h"

class CardView : public QWidget {
    Q_OBJECT

public:
    explicit CardView(QWidget *parent = nullptr);
    void addCard(const QString &imagePath, const QString &title, const QString &description, const QStringList &categories, float rating, const QString &price);
    void removeCard(QFrame *card); // Method to remove a card
    void filter(const QString &query); // Method to filter cards

signals:
    void cardClicked(const QString &imagePath, const QString &title, const QString &description, const QString &price);

private slots:
    void onDeleteButtonClicked(); // Slot for delete button click

protected:
    bool eventFilter(QObject *watched, QEvent *event) override; // Event filter method

private:
    QVBoxLayout *layout;
    QMap<QFrame*, QMap<QString, QString>> cardMap; // Stores card details
};

#endif // CARDVIEW_H
