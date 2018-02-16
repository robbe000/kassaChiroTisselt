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
    QMessageBox::warning(0, "Opgelet!" , "Bij het doorvoeren van aanpassing zullen alle logfile's gereset worden!");
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

void menu::on_cancel_clicked()
{
    this->close();
}

void menu::on_pushButton_clicked()
{
    bool ok;
    this->ui->addPrijs->text().toDouble(&ok);
    if(this->ui->addNaam->text() == "") {
        QMessageBox::warning(0, "Error", "Het naamveld mag niet leeg zijn!");
    } else if(ok == false) {
        QMessageBox::warning(0, "Error", "Kon prijs niet omvormen! Gebruik een . ipv een ,");
    } else {
        this->ui->menuLijst->insertRow(this->ui->menuLijst->rowCount());
        this->ui->menuLijst->setItem(this->ui->menuLijst->rowCount() - 1, 0, new QTableWidgetItem(this->ui->addNaam->text()));
        this->ui->menuLijst->setItem(this->ui->menuLijst->rowCount() - 1, 1, new QTableWidgetItem(this->ui->addPrijs->text()));
    }
}

void menu::on_aanpassen_clicked()
{
    QList<QTableWidgetItem*> rijen = this->ui->menuLijst->selectedItems();

    for(int i=0;i<rijen.count();i++) {
        this->ui->menuLijst->removeRow(rijen.at(i)->row());
    }
}

void menu::resetLog(int numRows) {
    //Logfile leegmaken
    QFile file("log.txt");

    //Menu file openen
    if(!file.open(QIODevice::ReadWrite)) {
        QMessageBox::warning(0, "Error!", "Kon log file niet openen!");
    }
    file.resize(0);
    //File sluiten
    file.close();

    QFile aantalMenuFile("aantalMenu.txt");
    if(!aantalMenuFile.open(QIODevice::ReadWrite)) {
        QMessageBox::warning(0, "Error", "Kon aantalmenu file niet aanpassen!");
    }
    aantalMenuFile.resize(0);
    QTextStream out(&aantalMenuFile);
    for(int i=0;i<numRows;i++) {
        out << "0\n";
    }
    aantalMenuFile.close();
}

void menu::on_save_clicked()
{
    QFile file("menu.txt");

    if(!file.open(QIODevice::ReadWrite)) {
        QMessageBox::warning(0, "Error", "Kon menu file niet aanpassen!");
    }
    file.resize(0);
    QTextStream out(&file);

    //Gegevens opnieuw schrijven
    for(int i=0;i<this->ui->menuLijst->rowCount();i++) {
        out << this->ui->menuLijst->item(i, 0)->text();
        out << "; ";
        out << this->ui->menuLijst->item(i, 1)->text();
        out << "\n";
    }
    file.close();
    resetLog(this->ui->menuLijst->rowCount());
    QMessageBox::warning(0, "Opgelet!", "Herstart de applicatie om de wijzegingen door te voeren.");
    this->close();
}

void menu::on_pushButton_2_clicked()
{
    QString filter = "File Description (*.txt)";
    QString inputFileName = QFileDialog::getOpenFileName(this, "Select a file...", QDir::homePath(), filter);

    QFile file(inputFileName);
    if(!file.open(QIODevice::ReadOnly)) {
        QMessageBox::warning(0, "Error", "Kon file niet openen!");
    } else {
        QTextStream in(&file);
        this->ui->menuLijst->clear();
        this->ui->menuLijst->setRowCount(0);

        while(!in.atEnd()) {
            QString buffer = in.readLine();
            QList<QString> splitBuffer = buffer.split("; ");
            this->ui->menuLijst->insertRow(this->ui->menuLijst->rowCount());
            this->ui->menuLijst->setItem(this->ui->menuLijst->rowCount() - 1, 0, new QTableWidgetItem(splitBuffer.at(0)));
            this->ui->menuLijst->setItem(this->ui->menuLijst->rowCount() - 1, 1, new QTableWidgetItem(splitBuffer.at(1)));
        }
    }

    file.close();
}
