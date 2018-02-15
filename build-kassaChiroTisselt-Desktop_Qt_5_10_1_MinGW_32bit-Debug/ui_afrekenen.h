/********************************************************************************
** Form generated from reading UI file 'afrekenen.ui'
**
** Created by: Qt User Interface Compiler version 5.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_AFREKENEN_H
#define UI_AFREKENEN_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_afrekenen
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLabel *prijs;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_3;
    QLineEdit *ontvangen;
    QPushButton *berekenen;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_4;
    QLabel *terug;
    QPushButton *pushButton;

    void setupUi(QWidget *afrekenen)
    {
        if (afrekenen->objectName().isEmpty())
            afrekenen->setObjectName(QStringLiteral("afrekenen"));
        afrekenen->resize(400, 341);
        verticalLayout = new QVBoxLayout(afrekenen);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label = new QLabel(afrekenen);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout->addWidget(label);

        prijs = new QLabel(afrekenen);
        prijs->setObjectName(QStringLiteral("prijs"));
        QFont font;
        font.setPointSize(16);
        prijs->setFont(font);

        horizontalLayout->addWidget(prijs);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label_3 = new QLabel(afrekenen);
        label_3->setObjectName(QStringLiteral("label_3"));

        horizontalLayout_2->addWidget(label_3);

        ontvangen = new QLineEdit(afrekenen);
        ontvangen->setObjectName(QStringLiteral("ontvangen"));

        horizontalLayout_2->addWidget(ontvangen);


        verticalLayout->addLayout(horizontalLayout_2);

        berekenen = new QPushButton(afrekenen);
        berekenen->setObjectName(QStringLiteral("berekenen"));

        verticalLayout->addWidget(berekenen);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        label_4 = new QLabel(afrekenen);
        label_4->setObjectName(QStringLiteral("label_4"));

        horizontalLayout_3->addWidget(label_4);

        terug = new QLabel(afrekenen);
        terug->setObjectName(QStringLiteral("terug"));
        QFont font1;
        font1.setPointSize(14);
        terug->setFont(font1);

        horizontalLayout_3->addWidget(terug);


        verticalLayout->addLayout(horizontalLayout_3);

        pushButton = new QPushButton(afrekenen);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        verticalLayout->addWidget(pushButton);


        retranslateUi(afrekenen);

        QMetaObject::connectSlotsByName(afrekenen);
    } // setupUi

    void retranslateUi(QWidget *afrekenen)
    {
        afrekenen->setWindowTitle(QApplication::translate("afrekenen", "Form", nullptr));
        label->setText(QApplication::translate("afrekenen", "Totaalprijs:", nullptr));
        prijs->setText(QApplication::translate("afrekenen", "Prijs", nullptr));
        label_3->setText(QApplication::translate("afrekenen", "Ontvangen bedrag:", nullptr));
        berekenen->setText(QApplication::translate("afrekenen", "Berekenen", nullptr));
        label_4->setText(QApplication::translate("afrekenen", "Terug: ", nullptr));
        terug->setText(QApplication::translate("afrekenen", "0.0 euro", nullptr));
        pushButton->setText(QApplication::translate("afrekenen", "Afronden", nullptr));
    } // retranslateUi

};

namespace Ui {
    class afrekenen: public Ui_afrekenen {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_AFREKENEN_H
