#include "afrekenen.h"
#include "ui_afrekenen.h"

afrekenen::afrekenen(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::afrekenen)
{
    ui->setupUi(this);
}

afrekenen::~afrekenen()
{
    delete ui;
}

void afrekenen::setPrijs(double prijs)
{
    char text[100];
    strcpy(text, QString::number(prijs).toLatin1().data());
    strcat(text, " euro");
    this->ui->prijs->setText(text);
    m_prijs = prijs;
}

void afrekenen::on_berekenen_clicked()
{
    char cTerug[100];
    double terug = this->ui->ontvangen->text().toDouble() - m_prijs;

    strcpy(cTerug, QString::number(terug).toLatin1().data());
    strcat(cTerug, " euro");
    this->ui->terug->setText(cTerug);
}

void afrekenen::on_pushButton_clicked()
{
    this->close();
}
