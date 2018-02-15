/********************************************************************************
** Form generated from reading UI file 'logscherm.ui'
**
** Created by: Qt User Interface Compiler version 5.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGSCHERM_H
#define UI_LOGSCHERM_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_logScherm
{
public:
    QVBoxLayout *verticalLayout;
    QListWidget *lijst;

    void setupUi(QWidget *logScherm)
    {
        if (logScherm->objectName().isEmpty())
            logScherm->setObjectName(QStringLiteral("logScherm"));
        logScherm->resize(400, 300);
        verticalLayout = new QVBoxLayout(logScherm);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        lijst = new QListWidget(logScherm);
        lijst->setObjectName(QStringLiteral("lijst"));

        verticalLayout->addWidget(lijst);


        retranslateUi(logScherm);

        QMetaObject::connectSlotsByName(logScherm);
    } // setupUi

    void retranslateUi(QWidget *logScherm)
    {
        logScherm->setWindowTitle(QApplication::translate("logScherm", "Form", nullptr));
    } // retranslateUi

};

namespace Ui {
    class logScherm: public Ui_logScherm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGSCHERM_H
