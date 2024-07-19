#ifndef PRODUCTPAGE_H
#define PRODUCTPAGE_H

#include <QWidget>
#include "cardview.h"

QT_BEGIN_NAMESPACE
namespace Ui {
class ProductPage;
}
QT_END_NAMESPACE

class ProductPage : public QWidget {
    Q_OBJECT

public:
    explicit ProductPage(QWidget *parent = nullptr);
    ~ProductPage();

private slots:
    void onCardClicked(const QString &imagePath, const QString &title, const QString &description);

private:
    Ui::ProductPage *ui;
    CardView *cardView;
    void createCardView();
};

#endif // PRODUCTPAGE_H
