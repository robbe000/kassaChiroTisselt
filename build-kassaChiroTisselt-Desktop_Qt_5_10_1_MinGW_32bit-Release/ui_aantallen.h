/********************************************************************************
** Form generated from reading UI file 'aantallen.ui'
**
** Created by: Qt User Interface Compiler version 5.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_AANTALLEN_H
#define UI_AANTALLEN_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_aantallen
{
public:
    QVBoxLayout *verticalLayout;
    QTableWidget *menuLijst;

    void setupUi(QWidget *aantallen)
    {
        if (aantallen->objectName().isEmpty())
            aantallen->setObjectName(QStringLiteral("aantallen"));
        aantallen->resize(400, 300);
        verticalLayout = new QVBoxLayout(aantallen);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        menuLijst = new QTableWidget(aantallen);
        menuLijst->setObjectName(QStringLiteral("menuLijst"));

        verticalLayout->addWidget(menuLijst);


        retranslateUi(aantallen);

        QMetaObject::connectSlotsByName(aantallen);
    } // setupUi

    void retranslateUi(QWidget *aantallen)
    {
        aantallen->setWindowTitle(QApplication::translate("aantallen", "Form", nullptr));
    } // retranslateUi

};

namespace Ui {
    class aantallen: public Ui_aantallen {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_AANTALLEN_H
