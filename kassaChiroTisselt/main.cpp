#include "mainwindow.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();

    return a.exec();
}

/* ToDo:
    -Checken dat de juiste bestanden bestaan bij opstart, zo niet: genereren.
    -Backup mogenlijkheid voorzien
*/
