#include "aantallen.h"
#include "ui_aantallen.h"

aantallen::aantallen(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::aantallen)
{
    ui->setupUi(this);
    updateTabel();
    this->setWindowTitle("Aantallen");
}

aantallen::~aantallen()
{
    delete ui;
}

void aantallen::updateTabel()
{
    QString buffer;
    QFile file("aantalMenu.txt");
    QFile menuFile("menu.txt");
    QStringList tableHeader;
    QList<QString> menuItem;
    int teller = 0;

    tableHeader<<"Naam"<<"Aantal";

    //lijst resetten
    this->ui->menuLijst->clear();
    this->ui->menuLijst->setColumnCount(2);
    this->ui->menuLijst->setHorizontalHeaderLabels(tableHeader);

    //Menu file openen
    if(!file.open(QIODevice::ReadOnly))
    {
        QMessageBox::warning(0, "Error!", "Kon aantallen file niet openen!");
    }

    QTextStream in(&file);

    //Menu inlezen en wegschrijven naar lijst.
    while(!in.atEnd())
    {
        buffer = in.readLine();
        if(buffer!="")
        {
            this->ui->menuLijst->insertRow(this->ui->menuLijst->rowCount());
            this->ui->menuLijst->setItem(this->ui->menuLijst->rowCount() - 1, 1, new QTableWidgetItem(buffer));
            this->ui->menuLijst->setRowHeight(this->ui->menuLijst->rowCount()-1, 25);
        }
    }

    //File sluiten
    file.close();




    //Menu file openen
    if(!menuFile.open(QIODevice::ReadOnly))
    {
        QMessageBox::warning(0, "Error!", "Kon menufile file niet openen!");
    }

    QTextStream menuIn(&menuFile);

    //Menu inlezen en wegschrijven naar lijst.
    while(!menuIn.atEnd())
    {
        buffer = menuIn.readLine();
        if(buffer!="")
        {
            menuItem = buffer.split("; ");
            this->ui->menuLijst->setItem(teller, 0, new QTableWidgetItem(menuItem[0]));
        }
        teller++;
    }

    //File sluiten
    file.close();

}
