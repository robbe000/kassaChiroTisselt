#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "ui_mainwindow.h"
#include "menu.h"
#include "logScherm.h"
#include "afrekenen.h"
#include <QFile>
#include <QMessageBox>
#include <QTextStream>
#include <QLineEdit>
#include <QMessageBox>
#include <QDebug>
#include <QDateTime>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    void updateMenu( void );
    void clear( void );
    ~MainWindow();

private slots:
    void on_actionMenu_aanpassen_triggered();

    void on_afrekenen_clicked();

    void on_clear_clicked();

    void on_actionAantallen_triggered();

    void on_actionLog_triggered();

private:
    Ui::MainWindow *ui;
    QList<QLineEdit*> m_aantal;
    QList<double> m_prijs;
};

#endif // MAINWINDOW_H
