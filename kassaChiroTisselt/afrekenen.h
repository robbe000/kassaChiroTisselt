#ifndef AFREKENEN_H
#define AFREKENEN_H

#include <QWidget>
#include "mainwindow.h"

namespace Ui {
class afrekenen;
}

class afrekenen : public QWidget
{
    Q_OBJECT

public:
    explicit afrekenen(QWidget *parent = 0);
    ~afrekenen();
    void setPrijs( double prijs);

private slots:
    void on_berekenen_clicked();

    void on_pushButton_clicked();

private:
    Ui::afrekenen *ui;
    double m_prijs;
};

#endif // AFREKENEN_H
