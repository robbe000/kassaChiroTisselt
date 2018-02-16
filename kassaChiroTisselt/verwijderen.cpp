#include "verwijderen.h"
#include "ui_verwijderen.h"

Verwijderen::Verwijderen(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Verwijderen)
{
    ui->setupUi(this);
}

Verwijderen::~Verwijderen()
{
    delete ui;
}
void Verwijderen::on_pushButton_clicked()
{
    this->close();
}

void Verwijderen::reset() {
    int numRows = 0;

    //Logfile leegmaken
    QFile file("log.txt");

    //Menu file openen
    if(!file.open(QIODevice::ReadWrite))
    {
        QMessageBox::warning(0, "Error!", "Kon log file niet openen!");
    }

    file.resize(0);

    //File sluiten
    file.close();


    //Aantal rijen tellen
    QFile file1("aantalMenu.txt");
    QString buffer;

    //Menu file openen
    if(!file1.open(QIODevice::ReadWrite))
    {
        QMessageBox::warning(0, "Error!", "Kon aantalMenu file niet openen!");
    }

    QTextStream in(&file1);

    //Aantal rijen tellen
    while(!in.atEnd())
    {
        buffer = in.readLine();
        if(buffer!="")
        {
            numRows++;
        }
    }

    file1.resize(0);

    for(int i=0;i<numRows;i++) {
        in << "0\n";
    }

    //File sluiten
    file1.close();

    QMessageBox::warning(0, "Gelukt", "De data werd gereset!");
    this->close();
}

void Verwijderen::on_pushButton_2_clicked()
{
    reset();
}
