#include "mainwindow.h"
#include "aantallen.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    this->setWindowTitle("Kassa Chiro Tisselt");
    updateMenu();
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_actionMenu_aanpassen_triggered()
{
    menu *menuInstellen = new menu;
    menuInstellen->show();
}

void MainWindow::updateMenu()
{
    QString buffer;
    QFile file("menu.txt");
    QStringList tableHeader;
    QList<QString> menuItem;
    int teller = 0;

    tableHeader<<"Naam"<<"Prijs"<<"Aantal";

    //lijst resetten
    this->ui->menuLijst->clear();
    this->ui->menuLijst->setColumnCount(3);
    this->ui->menuLijst->setRowCount(0);
    this->ui->menuLijst->setHorizontalHeaderLabels(tableHeader);
    m_aantal.clear();
    m_prijs.clear();
    this->ui->menuLijst->setColumnWidth(0, 300);

    //Menu file openen
    if(!file.open(QIODevice::ReadOnly))
    {
        QMessageBox::warning(0, "Error!", "Kon hoofdmenu file niet openen!");
        return;
    }

    QTextStream in(&file);

    //Menu inlezen en wegschrijven naar lijst.
    while(!in.atEnd())
    {
        buffer = in.readLine();
        if(buffer!="")
        {
            m_aantal.append(new QLineEdit);
            m_aantal.at(teller)->setText("0");
            m_prijs.append(0);

            menuItem = buffer.split("; ");
            this->ui->menuLijst->insertRow(this->ui->menuLijst->rowCount());
            this->ui->menuLijst->setItem(this->ui->menuLijst->rowCount() - 1, 0, new QTableWidgetItem(menuItem[0]));
            this->ui->menuLijst->setItem(this->ui->menuLijst->rowCount() - 1, 1, new QTableWidgetItem(menuItem[1]));
            m_prijs[teller] = menuItem[1].toDouble();

            ui->menuLijst->setCellWidget(this->ui->menuLijst->rowCount() - 1, 2, m_aantal.at(teller));
            ui->menuLijst->setRowHeight(this->ui->menuLijst->rowCount() - 1, 25);

            teller++;
        }
    }

    //File sluiten
    file.close();
}


void MainWindow::clear()
{
    int teller = 0;

    foreach(double prijs, m_prijs)
    {
        m_aantal.at(teller)->setText("0");
        teller++;
    }
}

void MainWindow::on_afrekenen_clicked()
{
    double totaalprijs = 0;
    int teller = 0;
    char msg[200];
    QFile file("aantalMenu.txt");
    QFile logFile("log.txt");
    QList<int> aantalMenu;
    QString buffer;
    int tellerFile = 0;

    //Checken of de prijs niet 0 is

    //AantalMenu file inlezen
    if(!file.open(QIODevice::ReadOnly))
    {
        QMessageBox::warning(0, "Error!", "Kon aantalMenu file niet openen!");
        return;
    }

    QTextStream in(&file);

    while(!in.atEnd())
    {
        buffer = in.readLine();
        aantalMenu.append(buffer.toInt());
        tellerFile++;
    }

    file.close();

    if(tellerFile != m_prijs.count())
    {
        QMessageBox::warning(0, "Error!", "Verschil tussen aantal elementen.");
        return;
    }

    //AantalMenu file inlezen
    if(!file.open(QFile::WriteOnly|QFile::Truncate))
    {
        QMessageBox::warning(0, "Error!", "Kon aantalMenu file niet openen om te overschrijven!");
        return;
    }

    QTextStream out(&file);

    //prijs berekenen
    foreach(double prijs, m_prijs)
    {
        totaalprijs += prijs * m_aantal.at(teller)->text().toInt();

        //aantallen berekenen en wegschrijven naar de aantalMenu file
        aantalMenu[teller] += m_aantal.at(teller)->text().toInt();
        out << QString::number(aantalMenu[teller]) << endl;

        teller++;
    }

    file.close();

    //Prijs weergeven
    qDebug() << totaalprijs;
    afrekenen *afrekenScherm = new afrekenen;
    afrekenScherm->show();
    afrekenScherm->setPrijs(totaalprijs);

    //Logfile bijwerken
    if(!logFile.open(QIODevice::WriteOnly | QIODevice::Append))
    {
        QMessageBox::warning(0, "Error!", "Kon logFile file niet openen om te appenden!");
        return;
    }

    QTextStream logOut(&logFile);

    logOut << QDateTime::currentDateTime().toString() << "; " << QString::number(totaalprijs) << endl;

    logFile.close();

    clear();
}

void MainWindow::on_clear_clicked()
{
    clear();
}

void MainWindow::on_actionAantallen_triggered()
{
    aantallen *menuAantallen = new aantallen;
    menuAantallen->show();
}

void MainWindow::on_actionLog_triggered()
{
    logScherm *menuLog = new logScherm;
    menuLog->show();
}
