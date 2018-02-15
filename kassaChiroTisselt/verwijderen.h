#ifndef VERWIJDEREN_H
#define VERWIJDEREN_H

#include <QDialog>
#include <QFile>
#include <QMessageBox>
#include <QTextStream>
#include <QDebug>

namespace Ui {
class Verwijderen;
}

class Verwijderen : public QDialog
{
    Q_OBJECT

public:
    explicit Verwijderen(QWidget *parent = 0);
    ~Verwijderen();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::Verwijderen *ui;
};

#endif // VERWIJDEREN_H
