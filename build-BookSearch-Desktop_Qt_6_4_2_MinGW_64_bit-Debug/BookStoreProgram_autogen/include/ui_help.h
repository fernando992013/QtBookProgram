/********************************************************************************
** Form generated from reading UI file 'help.ui'
**
** Created by: Qt User Interface Compiler version 6.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HELP_H
#define UI_HELP_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>

QT_BEGIN_NAMESPACE

class Ui_help
{
public:
    QTableWidget *tableHardware;
    QPushButton *pushButtonHelpAbout;

    void setupUi(QDialog *help)
    {
        if (help->objectName().isEmpty())
            help->setObjectName("help");
        help->resize(650, 347);
        tableHardware = new QTableWidget(help);
        if (tableHardware->columnCount() < 2)
            tableHardware->setColumnCount(2);
        if (tableHardware->rowCount() < 2)
            tableHardware->setRowCount(2);
        tableHardware->setObjectName("tableHardware");
        tableHardware->setGeometry(QRect(20, 10, 601, 291));
        tableHardware->setRowCount(2);
        tableHardware->setColumnCount(2);
        pushButtonHelpAbout = new QPushButton(help);
        pushButtonHelpAbout->setObjectName("pushButtonHelpAbout");
        pushButtonHelpAbout->setGeometry(QRect(540, 310, 75, 24));

        retranslateUi(help);
        QObject::connect(pushButtonHelpAbout, &QPushButton::clicked, help, qOverload<>(&QDialog::hide));

        QMetaObject::connectSlotsByName(help);
    } // setupUi

    void retranslateUi(QDialog *help)
    {
        help->setWindowTitle(QCoreApplication::translate("help", "Help", nullptr));
        pushButtonHelpAbout->setText(QCoreApplication::translate("help", "OK", nullptr));
    } // retranslateUi

};

namespace Ui {
    class help: public Ui_help {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HELP_H
