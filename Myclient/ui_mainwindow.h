/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.1.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QTextBrowser *textBrowser;
    QPushButton *pushButton_2;
    QLineEdit *lineEdit;
    QLabel *label;
    QPushButton *pushButton;
    QLabel *label_2;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(685, 295);
        MainWindow->setStyleSheet(QString::fromUtf8("background-color: rgb(148, 99, 0);"));
        MainWindow->setTabShape(QTabWidget::Rounded);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        textBrowser = new QTextBrowser(centralwidget);
        textBrowser->setObjectName(QString::fromUtf8("textBrowser"));
        textBrowser->setGeometry(QRect(9, 49, 331, 201));
        QFont font;
        font.setFamilies({QString::fromUtf8("Times New Roman")});
        font.setPointSize(8);
        font.setItalic(true);
        textBrowser->setFont(font);
        textBrowser->setContextMenuPolicy(Qt::DefaultContextMenu);
        textBrowser->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 rgba(255, 178, 102, 255), stop:0.55 rgba(235, 148, 61, 255), stop:0.98 rgba(0, 0, 0, 255), stop:1 rgba(0, 0, 0, 0));\n"
"color: rgb(0, 0, 0);\n"
"border-left-color: rgb(61, 182, 0);\n"
"border-bottom-color: rgb(43, 130, 0);\n"
"border-right-color: rgb(61, 182, 0);\n"
"border-top-color: rgb(85, 255, 0);\n"
"border-color: rgb(85, 255, 0);"));
        pushButton_2 = new QPushButton(centralwidget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(350, 220, 321, 30));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Times New Roman")});
        font1.setPointSize(14);
        pushButton_2->setFont(font1);
        pushButton_2->setStyleSheet(QString::fromUtf8("\n"
"background-color: rgb(0, 147, 0);\n"
"color: rgb(255, 255, 255);\n"
""));
        lineEdit = new QLineEdit(centralwidget);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(350, 90, 321, 121));
        QFont font2;
        font2.setFamilies({QString::fromUtf8("Times New Roman")});
        font2.setPointSize(10);
        font2.setItalic(true);
        lineEdit->setFont(font2);
        lineEdit->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 rgba(255, 178, 102, 255), stop:0.55 rgba(235, 148, 61, 255), stop:0.98 rgba(0, 0, 0, 255), stop:1 rgba(0, 0, 0, 0));\n"
"color: rgb(0, 0, 0);\n"
"border-left-color: rgb(61, 182, 0);\n"
"border-bottom-color: rgb(43, 130, 0);\n"
"border-right-color: rgb(61, 182, 0);\n"
"border-top-color: rgb(85, 255, 0);\n"
"border-color: rgb(85, 255, 0);"));
        lineEdit->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(10, 10, 331, 27));
        label->setStyleSheet(QString::fromUtf8("\n"
"font: 700 italic 14pt \"Times New Roman\";\n"
""));
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(350, 50, 321, 30));
        pushButton->setFont(font1);
        pushButton->setStyleSheet(QString::fromUtf8("\n"
"background-color: rgb(0, 147, 0);\n"
"color: rgb(255, 255, 255);\n"
""));
        pushButton->setCheckable(false);
        pushButton->setAutoDefault(false);
        pushButton->setFlat(false);
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(350, 5, 311, 31));
        label_2->setStyleSheet(QString::fromUtf8("\n"
"font: 700 italic 14pt \"Times New Roman\";"));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 685, 22));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        pushButton->setDefault(false);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        pushButton_2->setText(QCoreApplication::translate("MainWindow", "Send", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "Chat", nullptr));
        pushButton->setText(QCoreApplication::translate("MainWindow", "Connect to the server", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "You`re not connected to the server", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
