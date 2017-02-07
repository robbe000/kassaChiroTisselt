#include "logscherm.h"
#include "ui_logscherm.h"

logScherm::logScherm(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::logScherm)
{
    ui->setupUi(this);
    updateList();
}

logScherm::~logScherm()
{
    delete ui;
}

void logScherm::updateList()
{
    QString buffer;
    QFile file("log.txt");

    //Menu file openen
    if(!file.open(QIODevice::ReadOnly))
    {
        QMessageBox::warning(0, "Error!", "Kon log file niet openen!");
    }

    QTextStream in(&file);

    //Menu inlezen en wegschrijven naar lijst.
    while(!in.atEnd())
    {
        buffer = in.readLine();
        if(buffer!="")
        {
            ui->lijst->addItem(buffer);
        }
    }

    //File sluiten
    file.close();
}
