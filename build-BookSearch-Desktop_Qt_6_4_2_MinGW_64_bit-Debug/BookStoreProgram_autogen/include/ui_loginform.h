/********************************************************************************
** Form generated from reading UI file 'loginform.ui'
**
** Created by: Qt User Interface Compiler version 6.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGINFORM_H
#define UI_LOGINFORM_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_LoginForm
{
public:
    QAction *actionRegister_Account;
    QAction *actionRegister;
    QAction *actionAdmin_Login;
    QWidget *centralwidget;
    QLineEdit *txtUsername;
    QLineEdit *txtPass;
    QPushButton *btnLogin;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QPushButton *btnLoginExit;
    QMenuBar *menubar;
    QMenu *menuRegister;
    QMenu *menuAdmin;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *LoginForm)
    {
        if (LoginForm->objectName().isEmpty())
            LoginForm->setObjectName("LoginForm");
        LoginForm->resize(365, 277);
        QIcon icon;
        QString iconThemeName = QString::fromUtf8("face-uncertain");
        if (QIcon::hasThemeIcon(iconThemeName)) {
            icon = QIcon::fromTheme(iconThemeName);
        } else {
            icon.addFile(QString::fromUtf8("../../../Downloads/clueless.ico"), QSize(), QIcon::Normal, QIcon::Off);
        }
        LoginForm->setWindowIcon(icon);
        actionRegister_Account = new QAction(LoginForm);
        actionRegister_Account->setObjectName("actionRegister_Account");
        actionRegister = new QAction(LoginForm);
        actionRegister->setObjectName("actionRegister");
        actionAdmin_Login = new QAction(LoginForm);
        actionAdmin_Login->setObjectName("actionAdmin_Login");
        centralwidget = new QWidget(LoginForm);
        centralwidget->setObjectName("centralwidget");
        txtUsername = new QLineEdit(centralwidget);
        txtUsername->setObjectName("txtUsername");
        txtUsername->setGeometry(QRect(140, 90, 113, 22));
        txtPass = new QLineEdit(centralwidget);
        txtPass->setObjectName("txtPass");
        txtPass->setGeometry(QRect(140, 130, 113, 22));
        txtPass->setEchoMode(QLineEdit::Password);
        btnLogin = new QPushButton(centralwidget);
        btnLogin->setObjectName("btnLogin");
        btnLogin->setGeometry(QRect(80, 170, 75, 24));
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(80, 20, 191, 31));
        QFont font;
        font.setPointSize(18);
        font.setBold(true);
        label->setFont(font);
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(80, 90, 61, 16));
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(80, 130, 61, 16));
        btnLoginExit = new QPushButton(centralwidget);
        btnLoginExit->setObjectName("btnLoginExit");
        btnLoginExit->setGeometry(QRect(170, 170, 80, 24));
        LoginForm->setCentralWidget(centralwidget);
        menubar = new QMenuBar(LoginForm);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 365, 22));
        menuRegister = new QMenu(menubar);
        menuRegister->setObjectName("menuRegister");
        menuAdmin = new QMenu(menubar);
        menuAdmin->setObjectName("menuAdmin");
        LoginForm->setMenuBar(menubar);
        statusbar = new QStatusBar(LoginForm);
        statusbar->setObjectName("statusbar");
        LoginForm->setStatusBar(statusbar);

        menubar->addAction(menuRegister->menuAction());
        menubar->addAction(menuAdmin->menuAction());
        menuRegister->addAction(actionRegister);
        menuAdmin->addAction(actionAdmin_Login);

        retranslateUi(LoginForm);
        QObject::connect(btnLoginExit, &QPushButton::clicked, LoginForm, qOverload<>(&QMainWindow::close));
        QObject::connect(btnLogin, SIGNAL(clicked()), LoginForm, SLOT(on_btnLogin_clicked()));
        QObject::connect(actionRegister, SIGNAL(triggered()), LoginForm, SLOT(newRegister()));
        QObject::connect(actionAdmin_Login, SIGNAL(triggered()), LoginForm, SLOT(adminLogin()));

        btnLogin->setDefault(false);


        QMetaObject::connectSlotsByName(LoginForm);
    } // setupUi

    void retranslateUi(QMainWindow *LoginForm)
    {
        LoginForm->setWindowTitle(QCoreApplication::translate("LoginForm", "Login", nullptr));
        actionRegister_Account->setText(QCoreApplication::translate("LoginForm", "Register Account", nullptr));
        actionRegister->setText(QCoreApplication::translate("LoginForm", "Create Account", nullptr));
        actionAdmin_Login->setText(QCoreApplication::translate("LoginForm", "Admin Login", nullptr));
        btnLogin->setText(QCoreApplication::translate("LoginForm", "Login", nullptr));
        label->setText(QCoreApplication::translate("LoginForm", "Customer Login", nullptr));
        label_2->setText(QCoreApplication::translate("LoginForm", "Username:", nullptr));
        label_3->setText(QCoreApplication::translate("LoginForm", "Password:", nullptr));
        btnLoginExit->setText(QCoreApplication::translate("LoginForm", "Exit", nullptr));
        menuRegister->setTitle(QCoreApplication::translate("LoginForm", "Register", nullptr));
        menuAdmin->setTitle(QCoreApplication::translate("LoginForm", "Admin", nullptr));
    } // retranslateUi

};

namespace Ui {
    class LoginForm: public Ui_LoginForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGINFORM_H
