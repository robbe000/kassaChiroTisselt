/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionMenu_aanpassen;
    QAction *actionAantallen;
    QAction *actionLog;
    QAction *actionLogs_verwijderen;
    QAction *actionMake_Backup;
    QAction *actionSluiten;
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout;
    QTableWidget *menuLijst;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *clear;
    QPushButton *afrekenen;
    QMenuBar *menuBar;
    QMenu *menuOpties;
    QMenu *menuStats;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(922, 555);
        actionMenu_aanpassen = new QAction(MainWindow);
        actionMenu_aanpassen->setObjectName(QStringLiteral("actionMenu_aanpassen"));
        actionAantallen = new QAction(MainWindow);
        actionAantallen->setObjectName(QStringLiteral("actionAantallen"));
        actionLog = new QAction(MainWindow);
        actionLog->setObjectName(QStringLiteral("actionLog"));
        actionLogs_verwijderen = new QAction(MainWindow);
        actionLogs_verwijderen->setObjectName(QStringLiteral("actionLogs_verwijderen"));
        actionMake_Backup = new QAction(MainWindow);
        actionMake_Backup->setObjectName(QStringLiteral("actionMake_Backup"));
        actionSluiten = new QAction(MainWindow);
        actionSluiten->setObjectName(QStringLiteral("actionSluiten"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        verticalLayout = new QVBoxLayout(centralWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        menuLijst = new QTableWidget(centralWidget);
        menuLijst->setObjectName(QStringLiteral("menuLijst"));

        verticalLayout->addWidget(menuLijst);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        clear = new QPushButton(centralWidget);
        clear->setObjectName(QStringLiteral("clear"));

        horizontalLayout->addWidget(clear);

        afrekenen = new QPushButton(centralWidget);
        afrekenen->setObjectName(QStringLiteral("afrekenen"));

        horizontalLayout->addWidget(afrekenen);


        verticalLayout->addLayout(horizontalLayout);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 922, 26));
        menuOpties = new QMenu(menuBar);
        menuOpties->setObjectName(QStringLiteral("menuOpties"));
        menuStats = new QMenu(menuBar);
        menuStats->setObjectName(QStringLiteral("menuStats"));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        menuBar->addAction(menuOpties->menuAction());
        menuBar->addAction(menuStats->menuAction());
        menuOpties->addAction(actionMenu_aanpassen);
        menuOpties->addAction(actionLogs_verwijderen);
        menuOpties->addAction(actionMake_Backup);
        menuOpties->addSeparator();
        menuOpties->addAction(actionSluiten);
        menuStats->addAction(actionAantallen);
        menuStats->addAction(actionLog);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
        actionMenu_aanpassen->setText(QApplication::translate("MainWindow", "Menu aanpassen", nullptr));
        actionAantallen->setText(QApplication::translate("MainWindow", "Aantallen", nullptr));
        actionLog->setText(QApplication::translate("MainWindow", "Log", nullptr));
        actionLogs_verwijderen->setText(QApplication::translate("MainWindow", "Logs verwijderen", nullptr));
        actionMake_Backup->setText(QApplication::translate("MainWindow", "Make Backup", nullptr));
        actionSluiten->setText(QApplication::translate("MainWindow", "Sluiten", nullptr));
        clear->setText(QApplication::translate("MainWindow", "Clear", nullptr));
        afrekenen->setText(QApplication::translate("MainWindow", "Afrekenen", nullptr));
        menuOpties->setTitle(QApplication::translate("MainWindow", "Opties", nullptr));
        menuStats->setTitle(QApplication::translate("MainWindow", "Stats", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
