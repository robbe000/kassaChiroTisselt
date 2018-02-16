#ifndef MENU_H
#define MENU_H

#include <QDialog>
#include <QFileDialog>

namespace Ui {
class menu;
}

class menu : public QDialog
{
    Q_OBJECT

public:
    explicit menu(QWidget *parent = 0);
    ~menu();

private slots:
    void on_cancel_clicked();

    void on_pushButton_clicked();

    void on_aanpassen_clicked();

    void on_save_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::menu *ui;
    void resetLog(int numRows);
    void updateMenu(void);
};

#endif // MENU_H
