/********************************************************************************
** Form generated from reading UI file 'register.ui'
**
** Created by: Qt User Interface Compiler version 6.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REGISTER_H
#define UI_REGISTER_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_RegisterForm
{
public:
    QPushButton *btnRegister;
    QPushButton *btnCancel;
    QLineEdit *lineUsername;
    QLineEdit *linePassword;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;

    void setupUi(QDialog *RegisterForm)
    {
        if (RegisterForm->objectName().isEmpty())
            RegisterForm->setObjectName("RegisterForm");
        RegisterForm->resize(365, 277);
        QIcon icon;
        QString iconThemeName = QString::fromUtf8("face-uncertain");
        if (QIcon::hasThemeIcon(iconThemeName)) {
            icon = QIcon::fromTheme(iconThemeName);
        } else {
            icon.addFile(QString::fromUtf8("clueless.png"), QSize(), QIcon::Normal, QIcon::Off);
        }
        RegisterForm->setWindowIcon(icon);
        btnRegister = new QPushButton(RegisterForm);
        btnRegister->setObjectName("btnRegister");
        btnRegister->setGeometry(QRect(100, 180, 80, 24));
        btnCancel = new QPushButton(RegisterForm);
        btnCancel->setObjectName("btnCancel");
        btnCancel->setGeometry(QRect(190, 180, 80, 24));
        lineUsername = new QLineEdit(RegisterForm);
        lineUsername->setObjectName("lineUsername");
        lineUsername->setGeometry(QRect(170, 90, 113, 24));
        linePassword = new QLineEdit(RegisterForm);
        linePassword->setObjectName("linePassword");
        linePassword->setGeometry(QRect(170, 130, 113, 24));
        linePassword->setEchoMode(QLineEdit::Password);
        label = new QLabel(RegisterForm);
        label->setObjectName("label");
        label->setGeometry(QRect(80, 90, 91, 16));
        label_2 = new QLabel(RegisterForm);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(80, 130, 101, 16));
        label_3 = new QLabel(RegisterForm);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(130, 20, 111, 31));

        retranslateUi(RegisterForm);
        QObject::connect(btnCancel, &QPushButton::clicked, RegisterForm, qOverload<>(&QDialog::hide));

        QMetaObject::connectSlotsByName(RegisterForm);
    } // setupUi

    void retranslateUi(QDialog *RegisterForm)
    {
        RegisterForm->setWindowTitle(QCoreApplication::translate("RegisterForm", "Register", nullptr));
        btnRegister->setText(QCoreApplication::translate("RegisterForm", "Register", nullptr));
        btnCancel->setText(QCoreApplication::translate("RegisterForm", "Cancel", nullptr));
        label->setText(QCoreApplication::translate("RegisterForm", "New username:", nullptr));
        label_2->setText(QCoreApplication::translate("RegisterForm", "New password:", nullptr));
        label_3->setText(QCoreApplication::translate("RegisterForm", "<html><head/><body><p><span style=\" font-size:14pt; font-weight:700;\">Registration</span></p></body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class RegisterForm: public Ui_RegisterForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REGISTER_H
