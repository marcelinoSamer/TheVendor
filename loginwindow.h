#ifndef LOGINWINDOW_H
#define LOGINWINDOW_H

#include <QDialog>
#include "users.h"
#include <QTextStream>

namespace Ui {
class loginWindow;
}

class loginWindow : public QDialog
{
    Q_OBJECT

public:
    explicit loginWindow(QWidget *parent = nullptr);
    ~loginWindow();

private slots:
    void on_registerPushButton_clicked();

    void on_loginPushButton_clicked();

private:
    Ui::loginWindow *ui;
};

#endif // LOGINWINDOW_H
