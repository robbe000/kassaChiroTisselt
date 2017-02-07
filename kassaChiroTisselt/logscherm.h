#ifndef LOGSCHERM_H
#define LOGSCHERM_H

#include <QWidget>
#include <QFile>
#include <QMessageBox>
#include <QTextStream>

namespace Ui {
class logScherm;
}

class logScherm : public QWidget
{
    Q_OBJECT

public:
    explicit logScherm(QWidget *parent = 0);
    ~logScherm();

private:
    Ui::logScherm *ui;
    void updateList(void);
};

#endif // LOGSCHERM_H
