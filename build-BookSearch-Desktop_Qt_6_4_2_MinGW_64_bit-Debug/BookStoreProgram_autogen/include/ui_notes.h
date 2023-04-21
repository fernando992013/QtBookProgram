/********************************************************************************
** Form generated from reading UI file 'notes.ui'
**
** Created by: Qt User Interface Compiler version 6.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NOTES_H
#define UI_NOTES_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_notes
{
public:
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QTextEdit *noteEdit;
    QPushButton *saveNoteBttn;
    QPushButton *newNoteBttn;
    QPushButton *exitButton;

    void setupUi(QDialog *notes)
    {
        if (notes->objectName().isEmpty())
            notes->setObjectName("notes");
        notes->resize(402, 335);
        verticalLayoutWidget = new QWidget(notes);
        verticalLayoutWidget->setObjectName("verticalLayoutWidget");
        verticalLayoutWidget->setGeometry(QRect(10, 10, 381, 221));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        noteEdit = new QTextEdit(verticalLayoutWidget);
        noteEdit->setObjectName("noteEdit");

        verticalLayout->addWidget(noteEdit);

        saveNoteBttn = new QPushButton(notes);
        saveNoteBttn->setObjectName("saveNoteBttn");
        saveNoteBttn->setGeometry(QRect(320, 240, 75, 24));
        newNoteBttn = new QPushButton(notes);
        newNoteBttn->setObjectName("newNoteBttn");
        newNoteBttn->setGeometry(QRect(10, 240, 75, 24));
        exitButton = new QPushButton(notes);
        exitButton->setObjectName("exitButton");
        exitButton->setGeometry(QRect(320, 300, 75, 24));

        retranslateUi(notes);
        QObject::connect(newNoteBttn, SIGNAL(clicked()), notes, SLOT(on_newNoteBttn_clicked()));
        QObject::connect(saveNoteBttn, SIGNAL(clicked()), notes, SLOT(on_saveNoteBttn_clicked()));
        QObject::connect(exitButton, SIGNAL(clicked()), notes, SLOT(on_exitButton_clicked()));

        QMetaObject::connectSlotsByName(notes);
    } // setupUi

    void retranslateUi(QDialog *notes)
    {
        notes->setWindowTitle(QCoreApplication::translate("notes", "Notes", nullptr));
        saveNoteBttn->setText(QCoreApplication::translate("notes", "Save", nullptr));
        newNoteBttn->setText(QCoreApplication::translate("notes", "New Note", nullptr));
        exitButton->setText(QCoreApplication::translate("notes", "Exit", nullptr));
    } // retranslateUi

};

namespace Ui {
    class notes: public Ui_notes {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NOTES_H
