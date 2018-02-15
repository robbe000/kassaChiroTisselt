#include "backup.h"

Backup::Backup(QObject *parent) : QObject(parent)
{
    QString pathName = QFileDialog::getExistingDirectory(0, "Waar dient de backup gemaakt te worden?", QDir::currentPath(), QFileDialog::ShowDirsOnly);
    QDateTime tijd;
    qDebug() << pathName;
    qDebug() << tijd.currentDateTime().toString("dd.MM.yyyy hh:mm:ss");

    QDir dir;
    dir.mkpath(pathName + "/" + "Kassa Chiro" + tijd.currentDateTime().toString("dd MM yyyy hh mm ss"));
    QFile logFile(pathName + "/" + "Kassa Chiro" + tijd.currentDateTime().toString("dd MM yyyy hh mm ss") + "/log.txt");

    if(!logFile.open(QIODevice::ReadWrite)){
        qDebug() << "Kon file niet maken";
    } else {
        QTextStream outLog(&logFile);

        QFile logFileInput("log.txt");
        logFileInput.open(QIODevice::ReadOnly);
        QTextStream inLog(&logFileInput);
        while(!inLog.atEnd()) {
            outLog << inLog.readLine();
            outLog << "\n";
        }

        logFile.close();
        logFileInput.close();
    }

    QFile aantalFile(pathName + "/" + "Kassa Chiro" + tijd.currentDateTime().toString("dd MM yyyy hh mm ss") + "/aantalMenu.txt");

    if(!aantalFile.open(QIODevice::ReadWrite)) {
        qDebug("Kon file niet aanmaken!");
    } else {
        QTextStream outLog(&aantalFile);

        QFile aantalFileInput("aantalMenu.txt");
        aantalFileInput.open(QIODevice::ReadOnly);
        while(!aantalFileInput.atEnd()) {
            outLog << aantalFileInput.readLine();
        }

        aantalFile.close();
        aantalFileInput.close();
    }
}
