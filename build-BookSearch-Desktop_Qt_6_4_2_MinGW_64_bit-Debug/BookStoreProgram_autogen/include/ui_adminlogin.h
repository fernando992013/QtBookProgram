/********************************************************************************
** Form generated from reading UI file 'adminlogin.ui'
**
** Created by: Qt User Interface Compiler version 6.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADMINLOGIN_H
#define UI_ADMINLOGIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_adminlogin
{
public:
    QWidget *centralwidget;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLineEdit *lineEdit_adminUser;
    QLineEdit *lineEdit_adminPass;
    QPushButton *adminloginBttn;
    QPushButton *exitBttn;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *adminlogin)
    {
        if (adminlogin->objectName().isEmpty())
            adminlogin->setObjectName("adminlogin");
        adminlogin->resize(365, 277);
        centralwidget = new QWidget(adminlogin);
        centralwidget->setObjectName("centralwidget");
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(90, 30, 171, 31));
        QFont font;
        font.setPointSize(18);
        font.setBold(true);
        label->setFont(font);
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(90, 90, 71, 16));
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(90, 130, 71, 16));
        lineEdit_adminUser = new QLineEdit(centralwidget);
        lineEdit_adminUser->setObjectName("lineEdit_adminUser");
        lineEdit_adminUser->setGeometry(QRect(150, 90, 113, 22));
        lineEdit_adminPass = new QLineEdit(centralwidget);
        lineEdit_adminPass->setObjectName("lineEdit_adminPass");
        lineEdit_adminPass->setGeometry(QRect(150, 130, 113, 22));
        lineEdit_adminPass->setEchoMode(QLineEdit::Password);
        adminloginBttn = new QPushButton(centralwidget);
        adminloginBttn->setObjectName("adminloginBttn");
        adminloginBttn->setGeometry(QRect(100, 170, 75, 24));
        exitBttn = new QPushButton(centralwidget);
        exitBttn->setObjectName("exitBttn");
        exitBttn->setGeometry(QRect(180, 170, 75, 24));
        adminlogin->setCentralWidget(centralwidget);
        menubar = new QMenuBar(adminlogin);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 365, 22));
        adminlogin->setMenuBar(menubar);
        statusbar = new QStatusBar(adminlogin);
        statusbar->setObjectName("statusbar");
        adminlogin->setStatusBar(statusbar);

        retranslateUi(adminlogin);
        QObject::connect(exitBttn, &QPushButton::clicked, adminlogin, qOverload<>(&QMainWindow::close));

        QMetaObject::connectSlotsByName(adminlogin);
    } // setupUi

    void retranslateUi(QMainWindow *adminlogin)
    {
        adminlogin->setWindowTitle(QCoreApplication::translate("adminlogin", "Admin Login", nullptr));
        label->setText(QCoreApplication::translate("adminlogin", "Admin Login", nullptr));
        label_2->setText(QCoreApplication::translate("adminlogin", "Username:", nullptr));
        label_3->setText(QCoreApplication::translate("adminlogin", "Password:", nullptr));
        adminloginBttn->setText(QCoreApplication::translate("adminlogin", "Enter", nullptr));
        exitBttn->setText(QCoreApplication::translate("adminlogin", "Exit", nullptr));
    } // retranslateUi

};

namespace Ui {
    class adminlogin: public Ui_adminlogin {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADMINLOGIN_H
