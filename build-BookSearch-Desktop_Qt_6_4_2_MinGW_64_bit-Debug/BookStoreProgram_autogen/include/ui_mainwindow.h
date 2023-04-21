/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionAbout;
    QAction *actionExit;
    QAction *actionAdmin;
    QAction *actionLogout;
    QAction *actionHelp;
    QAction *actionNotes;
    QWidget *centralwidget;
    QLabel *label;
    QPushButton *btnExit;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QLineEdit *lineISBN;
    QLineEdit *lineTitle;
    QLineEdit *lineAuthor;
    QPushButton *btnSearch;
    QPushButton *btnAddtoCart;
    QPushButton *btnClear;
    QPushButton *btnCheckout;
    QTableWidget *tableWidgetResults;
    QMenuBar *menubar;
    QMenu *menuMenu;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(963, 744);
        QIcon icon;
        QString iconThemeName = QString::fromUtf8("face-uncertain");
        if (QIcon::hasThemeIcon(iconThemeName)) {
            icon = QIcon::fromTheme(iconThemeName);
        } else {
            icon.addFile(QString::fromUtf8("../../../Downloads/clueless.ico"), QSize(), QIcon::Normal, QIcon::Off);
        }
        MainWindow->setWindowIcon(icon);
        actionAbout = new QAction(MainWindow);
        actionAbout->setObjectName("actionAbout");
        actionExit = new QAction(MainWindow);
        actionExit->setObjectName("actionExit");
        actionAdmin = new QAction(MainWindow);
        actionAdmin->setObjectName("actionAdmin");
        actionLogout = new QAction(MainWindow);
        actionLogout->setObjectName("actionLogout");
        actionHelp = new QAction(MainWindow);
        actionHelp->setObjectName("actionHelp");
        actionNotes = new QAction(MainWindow);
        actionNotes->setObjectName("actionNotes");
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(280, 0, 361, 41));
        btnExit = new QPushButton(centralwidget);
        btnExit->setObjectName("btnExit");
        btnExit->setGeometry(QRect(840, 640, 91, 41));
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(10, 140, 141, 31));
        label_4 = new QLabel(centralwidget);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(120, 180, 61, 31));
        label_5 = new QLabel(centralwidget);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(110, 300, 51, 31));
        label_6 = new QLabel(centralwidget);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(130, 240, 41, 31));
        verticalLayoutWidget = new QWidget(centralwidget);
        verticalLayoutWidget->setObjectName("verticalLayoutWidget");
        verticalLayoutWidget->setGeometry(QRect(170, 150, 160, 221));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        lineISBN = new QLineEdit(verticalLayoutWidget);
        lineISBN->setObjectName("lineISBN");

        verticalLayout->addWidget(lineISBN);

        lineTitle = new QLineEdit(verticalLayoutWidget);
        lineTitle->setObjectName("lineTitle");

        verticalLayout->addWidget(lineTitle);

        lineAuthor = new QLineEdit(verticalLayoutWidget);
        lineAuthor->setObjectName("lineAuthor");

        verticalLayout->addWidget(lineAuthor);

        btnSearch = new QPushButton(centralwidget);
        btnSearch->setObjectName("btnSearch");
        btnSearch->setGeometry(QRect(240, 370, 91, 41));
        btnAddtoCart = new QPushButton(centralwidget);
        btnAddtoCart->setObjectName("btnAddtoCart");
        btnAddtoCart->setGeometry(QRect(410, 540, 91, 41));
        btnClear = new QPushButton(centralwidget);
        btnClear->setObjectName("btnClear");
        btnClear->setGeometry(QRect(840, 540, 91, 41));
        btnCheckout = new QPushButton(centralwidget);
        btnCheckout->setObjectName("btnCheckout");
        btnCheckout->setGeometry(QRect(630, 540, 91, 41));
        tableWidgetResults = new QTableWidget(centralwidget);
        tableWidgetResults->setObjectName("tableWidgetResults");
        tableWidgetResults->setGeometry(QRect(400, 70, 541, 461));
        tableWidgetResults->setAutoFillBackground(false);
        tableWidgetResults->setEditTriggers(QAbstractItemView::NoEditTriggers);
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 963, 22));
        menuMenu = new QMenu(menubar);
        menuMenu->setObjectName("menuMenu");
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        menubar->addAction(menuMenu->menuAction());
        menuMenu->addAction(actionAbout);
        menuMenu->addAction(actionHelp);
        menuMenu->addAction(actionNotes);

        retranslateUi(MainWindow);
        QObject::connect(btnExit, &QPushButton::clicked, MainWindow, qOverload<>(&QMainWindow::close));
        QObject::connect(actionAbout, SIGNAL(triggered()), MainWindow, SLOT(about()));
        QObject::connect(actionHelp, SIGNAL(triggered()), MainWindow, SLOT(help()));
        QObject::connect(actionNotes, SIGNAL(triggered()), MainWindow, SLOT(notes()));

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "Book Store", nullptr));
        actionAbout->setText(QCoreApplication::translate("MainWindow", "About", nullptr));
        actionExit->setText(QCoreApplication::translate("MainWindow", "Exit", nullptr));
        actionAdmin->setText(QCoreApplication::translate("MainWindow", "Admin", nullptr));
        actionLogout->setText(QCoreApplication::translate("MainWindow", "Logout", nullptr));
        actionHelp->setText(QCoreApplication::translate("MainWindow", "Help", nullptr));
        actionNotes->setText(QCoreApplication::translate("MainWindow", "Notes", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p align=\"center\"><span style=\" font-size:16pt; font-weight:700;\">Welcome to the CIS 227 Book Store!</span></p></body></html>", nullptr));
        btnExit->setText(QCoreApplication::translate("MainWindow", "Exit", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:12pt;\">Search for book by:</span></p></body></html>", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:12pt;\">ISBN:</span></p></body></html>", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:12pt;\">Author:</span></p></body></html>", nullptr));
        label_6->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:12pt;\">Title:</span></p></body></html>", nullptr));
        btnSearch->setText(QCoreApplication::translate("MainWindow", "Search", nullptr));
        btnAddtoCart->setText(QCoreApplication::translate("MainWindow", "Add to Cart", nullptr));
        btnClear->setText(QCoreApplication::translate("MainWindow", "Clear", nullptr));
        btnCheckout->setText(QCoreApplication::translate("MainWindow", "Checkout", nullptr));
        menuMenu->setTitle(QCoreApplication::translate("MainWindow", "Menu", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
