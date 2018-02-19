/********************************************************************************
** Form generated from reading UI file 'verwijderen.ui'
**
** Created by: Qt User Interface Compiler version 5.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VERWIJDEREN_H
#define UI_VERWIJDEREN_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_Verwijderen
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QPushButton *pushButton_2;
    QPushButton *pushButton;

    void setupUi(QDialog *Verwijderen)
    {
        if (Verwijderen->objectName().isEmpty())
            Verwijderen->setObjectName(QStringLiteral("Verwijderen"));
        Verwijderen->resize(359, 128);
        verticalLayout = new QVBoxLayout(Verwijderen);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        label = new QLabel(Verwijderen);
        label->setObjectName(QStringLiteral("label"));

        verticalLayout->addWidget(label);

        pushButton_2 = new QPushButton(Verwijderen);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));

        verticalLayout->addWidget(pushButton_2);

        pushButton = new QPushButton(Verwijderen);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        verticalLayout->addWidget(pushButton);


        retranslateUi(Verwijderen);

        QMetaObject::connectSlotsByName(Verwijderen);
    } // setupUi

    void retranslateUi(QDialog *Verwijderen)
    {
        Verwijderen->setWindowTitle(QApplication::translate("Verwijderen", "Dialog", nullptr));
        label->setText(QApplication::translate("Verwijderen", "Bent u zeker dat u al de log's wenst te verwijderen?", nullptr));
        pushButton_2->setText(QApplication::translate("Verwijderen", "Ja", nullptr));
        pushButton->setText(QApplication::translate("Verwijderen", "Neen", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Verwijderen: public Ui_Verwijderen {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VERWIJDEREN_H
