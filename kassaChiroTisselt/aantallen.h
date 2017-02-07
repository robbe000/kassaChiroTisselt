#ifndef AANTALLEN_H
#define AANTALLEN_H

#include <QWidget>
#include <QFile>
#include <QMessageBox>
#include <QTextStream>

namespace Ui {
class aantallen;
}

class aantallen : public QWidget
{
    Q_OBJECT

public:
    explicit aantallen(QWidget *parent = 0);
    ~aantallen();

private:
    Ui::aantallen *ui;
    void updateTabel(void);
};

#endif // AANTALLEN_H
