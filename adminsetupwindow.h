#ifndef ADMINSETUPWINDOW_H
#define ADMINSETUPWINDOW_H

#include <QDialog>

namespace Ui {
class adminSetUpWindow;
}

class adminSetUpWindow : public QDialog
{
    Q_OBJECT

public:
    explicit adminSetUpWindow(QWidget *parent = nullptr);
    ~adminSetUpWindow();

private slots:
    void on_cancelPushButton_clicked();

private:
    Ui::adminSetUpWindow *ui;
};

#endif // ADMINSETUPWINDOW_H
