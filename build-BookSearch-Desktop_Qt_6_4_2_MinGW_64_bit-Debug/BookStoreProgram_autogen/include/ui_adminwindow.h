/********************************************************************************
** Form generated from reading UI file 'adminwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADMINWINDOW_H
#define UI_ADMINWINDOW_H

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

class Ui_adminwindow
{
public:
    QWidget *centralwidget;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLineEdit *lineEdit_adminCUser;
    QLineEdit *lineEdit_adminCPass;
    QPushButton *adminAddUserbttn;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;
    QLineEdit *lineEdit_changeUser;
    QLineEdit *lineEdit_changePass;
    QPushButton *changePassBttn;
    QPushButton *importBttn;
    QLabel *label_8;
    QLabel *label_9;
    QLabel *label_10;
    QLabel *label_11;
    QLineEdit *lineEdit_newAdminUser;
    QLineEdit *lineEdit_newAdminPass;
    QPushButton *addAdminbttn;
    QPushButton *backbttn;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *adminwindow)
    {
        if (adminwindow->objectName().isEmpty())
            adminwindow->setObjectName("adminwindow");
        adminwindow->resize(511, 444);
        centralwidget = new QWidget(adminwindow);
        centralwidget->setObjectName("centralwidget");
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(180, 10, 141, 31));
        QFont font;
        font.setPointSize(16);
        font.setBold(true);
        label->setFont(font);
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(20, 90, 121, 16));
        QFont font1;
        font1.setBold(true);
        label_2->setFont(font1);
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(20, 120, 91, 16));
        label_4 = new QLabel(centralwidget);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(20, 150, 61, 16));
        lineEdit_adminCUser = new QLineEdit(centralwidget);
        lineEdit_adminCUser->setObjectName("lineEdit_adminCUser");
        lineEdit_adminCUser->setGeometry(QRect(80, 120, 113, 22));
        lineEdit_adminCPass = new QLineEdit(centralwidget);
        lineEdit_adminCPass->setObjectName("lineEdit_adminCPass");
        lineEdit_adminCPass->setGeometry(QRect(80, 150, 113, 22));
        adminAddUserbttn = new QPushButton(centralwidget);
        adminAddUserbttn->setObjectName("adminAddUserbttn");
        adminAddUserbttn->setGeometry(QRect(120, 180, 75, 24));
        label_5 = new QLabel(centralwidget);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(20, 270, 141, 16));
        label_5->setFont(font1);
        label_6 = new QLabel(centralwidget);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(20, 300, 71, 16));
        label_7 = new QLabel(centralwidget);
        label_7->setObjectName("label_7");
        label_7->setGeometry(QRect(20, 330, 91, 16));
        lineEdit_changeUser = new QLineEdit(centralwidget);
        lineEdit_changeUser->setObjectName("lineEdit_changeUser");
        lineEdit_changeUser->setGeometry(QRect(110, 300, 113, 22));
        lineEdit_changePass = new QLineEdit(centralwidget);
        lineEdit_changePass->setObjectName("lineEdit_changePass");
        lineEdit_changePass->setGeometry(QRect(110, 330, 113, 22));
        changePassBttn = new QPushButton(centralwidget);
        changePassBttn->setObjectName("changePassBttn");
        changePassBttn->setGeometry(QRect(110, 360, 111, 24));
        importBttn = new QPushButton(centralwidget);
        importBttn->setObjectName("importBttn");
        importBttn->setGeometry(QRect(278, 300, 75, 24));
        label_8 = new QLabel(centralwidget);
        label_8->setObjectName("label_8");
        label_8->setGeometry(QRect(280, 270, 81, 16));
        label_8->setFont(font1);
        label_9 = new QLabel(centralwidget);
        label_9->setObjectName("label_9");
        label_9->setGeometry(QRect(280, 120, 111, 16));
        label_10 = new QLabel(centralwidget);
        label_10->setObjectName("label_10");
        label_10->setGeometry(QRect(280, 150, 101, 16));
        label_11 = new QLabel(centralwidget);
        label_11->setObjectName("label_11");
        label_11->setGeometry(QRect(280, 90, 121, 16));
        label_11->setFont(font1);
        lineEdit_newAdminUser = new QLineEdit(centralwidget);
        lineEdit_newAdminUser->setObjectName("lineEdit_newAdminUser");
        lineEdit_newAdminUser->setGeometry(QRect(380, 120, 113, 22));
        lineEdit_newAdminPass = new QLineEdit(centralwidget);
        lineEdit_newAdminPass->setObjectName("lineEdit_newAdminPass");
        lineEdit_newAdminPass->setGeometry(QRect(380, 150, 113, 22));
        addAdminbttn = new QPushButton(centralwidget);
        addAdminbttn->setObjectName("addAdminbttn");
        addAdminbttn->setGeometry(QRect(420, 180, 75, 24));
        backbttn = new QPushButton(centralwidget);
        backbttn->setObjectName("backbttn");
        backbttn->setGeometry(QRect(430, 360, 75, 24));
        adminwindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(adminwindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 511, 21));
        adminwindow->setMenuBar(menubar);
        statusbar = new QStatusBar(adminwindow);
        statusbar->setObjectName("statusbar");
        adminwindow->setStatusBar(statusbar);

        retranslateUi(adminwindow);
        QObject::connect(backbttn, &QPushButton::clicked, adminwindow, qOverload<>(&QMainWindow::hide));
        QObject::connect(adminAddUserbttn, SIGNAL(clicked()), adminwindow, SLOT(on_adminAddUserbttn_clicked()));
        QObject::connect(addAdminbttn, SIGNAL(clicked()), adminwindow, SLOT(on_addAdminbttn_clicked()));
        QObject::connect(importBttn, SIGNAL(clicked()), adminwindow, SLOT(on_importBttn_clicked()));
        QObject::connect(changePassBttn, SIGNAL(clicked()), adminwindow, SLOT(on_changePassBttn_clicked()));

        QMetaObject::connectSlotsByName(adminwindow);
    } // setupUi

    void retranslateUi(QMainWindow *adminwindow)
    {
        adminwindow->setWindowTitle(QCoreApplication::translate("adminwindow", "Admin Window", nullptr));
        label->setText(QCoreApplication::translate("adminwindow", "Admin Menu", nullptr));
        label_2->setText(QCoreApplication::translate("adminwindow", "Create a new user", nullptr));
        label_3->setText(QCoreApplication::translate("adminwindow", "Username:", nullptr));
        label_4->setText(QCoreApplication::translate("adminwindow", "Password:", nullptr));
        adminAddUserbttn->setText(QCoreApplication::translate("adminwindow", "Add User", nullptr));
        label_5->setText(QCoreApplication::translate("adminwindow", "Change a user's password", nullptr));
        label_6->setText(QCoreApplication::translate("adminwindow", "Username:", nullptr));
        label_7->setText(QCoreApplication::translate("adminwindow", "New Password:", nullptr));
        changePassBttn->setText(QCoreApplication::translate("adminwindow", "Change Password", nullptr));
        importBttn->setText(QCoreApplication::translate("adminwindow", "Import", nullptr));
        label_8->setText(QCoreApplication::translate("adminwindow", "Import a file", nullptr));
        label_9->setText(QCoreApplication::translate("adminwindow", "Admin Username:", nullptr));
        label_10->setText(QCoreApplication::translate("adminwindow", "Admin Password:", nullptr));
        label_11->setText(QCoreApplication::translate("adminwindow", "Create a new admin", nullptr));
        addAdminbttn->setText(QCoreApplication::translate("adminwindow", "Add Admin", nullptr));
        backbttn->setText(QCoreApplication::translate("adminwindow", "Back", nullptr));
    } // retranslateUi

};

namespace Ui {
    class adminwindow: public Ui_adminwindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADMINWINDOW_H
