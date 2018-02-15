/********************************************************************************
** Form generated from reading UI file 'menu.ui'
**
** Created by: Qt User Interface Compiler version 5.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MENU_H
#define UI_MENU_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_menu
{
public:
    QVBoxLayout *verticalLayout;
    QTableWidget *menuLijst;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *lineEdit;
    QLabel *label_2;
    QLineEdit *lineEdit_2;
    QPushButton *pushButton;
    QPushButton *aanpassen;
    QPushButton *pushButton_3;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer;
    QPushButton *save;
    QPushButton *cancel;

    void setupUi(QDialog *menu)
    {
        if (menu->objectName().isEmpty())
            menu->setObjectName(QStringLiteral("menu"));
        menu->resize(761, 540);
        verticalLayout = new QVBoxLayout(menu);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        menuLijst = new QTableWidget(menu);
        menuLijst->setObjectName(QStringLiteral("menuLijst"));

        verticalLayout->addWidget(menuLijst);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label = new QLabel(menu);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout->addWidget(label);

        lineEdit = new QLineEdit(menu);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));

        horizontalLayout->addWidget(lineEdit);

        label_2 = new QLabel(menu);
        label_2->setObjectName(QStringLiteral("label_2"));

        horizontalLayout->addWidget(label_2);

        lineEdit_2 = new QLineEdit(menu);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));

        horizontalLayout->addWidget(lineEdit_2);

        pushButton = new QPushButton(menu);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        horizontalLayout->addWidget(pushButton);


        verticalLayout->addLayout(horizontalLayout);

        aanpassen = new QPushButton(menu);
        aanpassen->setObjectName(QStringLiteral("aanpassen"));

        verticalLayout->addWidget(aanpassen);

        pushButton_3 = new QPushButton(menu);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));

        verticalLayout->addWidget(pushButton_3);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        save = new QPushButton(menu);
        save->setObjectName(QStringLiteral("save"));

        horizontalLayout_2->addWidget(save);

        cancel = new QPushButton(menu);
        cancel->setObjectName(QStringLiteral("cancel"));

        horizontalLayout_2->addWidget(cancel);


        verticalLayout->addLayout(horizontalLayout_2);


        retranslateUi(menu);

        QMetaObject::connectSlotsByName(menu);
    } // setupUi

    void retranslateUi(QDialog *menu)
    {
        menu->setWindowTitle(QApplication::translate("menu", "Dialog", nullptr));
        label->setText(QApplication::translate("menu", "Naam:", nullptr));
        label_2->setText(QApplication::translate("menu", "Prijs:", nullptr));
        pushButton->setText(QApplication::translate("menu", "Toevoegen", nullptr));
        aanpassen->setText(QApplication::translate("menu", "Verwijderen", nullptr));
        pushButton_3->setText(QApplication::translate("menu", "Aanpassen", nullptr));
        save->setText(QApplication::translate("menu", "Save", nullptr));
        cancel->setText(QApplication::translate("menu", "Cancel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class menu: public Ui_menu {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MENU_H
