#include "menu.h"
#include "ui_menu.h"
#include <QFile>
#include <QMessageBox>
#include <QTextStream>

menu::menu(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::menu)
{
    ui->setupUi(this);
    this->setWindowTitle("Menu bewerken (WERKT NOG NIET)");
    updateMenu();
}

menu::~menu()
{
    delete ui;
}

void menu::updateMenu()
{
    QString buffer;
    QFile file("menu.txt");
    QStringList tableHeader;
    QList<QString> menuItem;

    tableHeader<<"Naam"<<"Prijs";

    //lijst resetten
    this->ui->menuLijst->clear();
    this->ui->menuLijst->setColumnCount(2);
    this->ui->menuLijst->setHorizontalHeaderLabels(tableHeader);

    //Menu file openen
    if(!file.open(QIODevice::ReadOnly))
    {
        QMessageBox::warning(0, "Error!", "Kon hoofdmenu file niet openen!");
    }

    QTextStream in(&file);

    //Menu inlezen en wegschrijven naar lijst.
    while(!in.atEnd())
    {
        buffer = in.readLine();
        if(buffer!="")
        {
            menuItem = buffer.split("; ");
            this->ui->menuLijst->insertRow(this->ui->menuLijst->rowCount());
            this->ui->menuLijst->setItem(this->ui->menuLijst->rowCount() - 1, 0, new QTableWidgetItem(menuItem[0]));
            this->ui->menuLijst->setItem(this->ui->menuLijst->rowCount() - 1, 1, new QTableWidgetItem(menuItem[1]));
        }
    }

    //File sluiten
    file.close();
}
