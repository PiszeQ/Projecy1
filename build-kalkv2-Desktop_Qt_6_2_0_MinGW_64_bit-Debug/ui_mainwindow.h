/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.2.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QFormLayout *formLayout;
    QTabWidget *tabWidget;
    QWidget *tab;
    QVBoxLayout *verticalLayout_3;
    QLabel *label;
    QRadioButton *radioButton11;
    QRadioButton *radioButton12;
    QRadioButton *radioButton13;
    QWidget *tab_3;
    QVBoxLayout *verticalLayout_4;
    QLabel *label_2;
    QRadioButton *radioButton21;
    QRadioButton *radioButton22;
    QRadioButton *radioButton23;
    QRadioButton *radioButton24;
    QWidget *tab_5;
    QVBoxLayout *verticalLayout_6;
    QLabel *label_5;
    QVBoxLayout *verticalLayout_5;
    QRadioButton *radioButton31;
    QRadioButton *radioButton32;
    QRadioButton *radioButton33;
    QWidget *tab_2;
    QLabel *label_3;
    QLabel *naslonecznienie;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout_7;
    QRadioButton *radioButton41;
    QRadioButton *radioButton42;
    QRadioButton *radioButton43;
    QRadioButton *radioButton44;
    QWidget *tab_4;
    QVBoxLayout *verticalLayout;
    QLabel *label_4;
    QLineEdit *lineEdit;
    QWidget *tab_6;
    QLabel *label_6;
    QLabel *label_rachunek;
    QPushButton *pushButton;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(911, 452);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        formLayout = new QFormLayout(centralwidget);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        tabWidget = new QTabWidget(centralwidget);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        verticalLayout_3 = new QVBoxLayout(tab);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        label = new QLabel(tab);
        label->setObjectName(QString::fromUtf8("label"));
        label->setAutoFillBackground(false);
        label->setFrameShape(QFrame::Box);

        verticalLayout_3->addWidget(label);

        radioButton11 = new QRadioButton(tab);
        radioButton11->setObjectName(QString::fromUtf8("radioButton11"));

        verticalLayout_3->addWidget(radioButton11);

        radioButton12 = new QRadioButton(tab);
        radioButton12->setObjectName(QString::fromUtf8("radioButton12"));

        verticalLayout_3->addWidget(radioButton12);

        radioButton13 = new QRadioButton(tab);
        radioButton13->setObjectName(QString::fromUtf8("radioButton13"));

        verticalLayout_3->addWidget(radioButton13);

        tabWidget->addTab(tab, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName(QString::fromUtf8("tab_3"));
        verticalLayout_4 = new QVBoxLayout(tab_3);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        label_2 = new QLabel(tab_3);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setFrameShape(QFrame::Box);

        verticalLayout_4->addWidget(label_2);

        radioButton21 = new QRadioButton(tab_3);
        radioButton21->setObjectName(QString::fromUtf8("radioButton21"));

        verticalLayout_4->addWidget(radioButton21);

        radioButton22 = new QRadioButton(tab_3);
        radioButton22->setObjectName(QString::fromUtf8("radioButton22"));

        verticalLayout_4->addWidget(radioButton22);

        radioButton23 = new QRadioButton(tab_3);
        radioButton23->setObjectName(QString::fromUtf8("radioButton23"));

        verticalLayout_4->addWidget(radioButton23);

        radioButton24 = new QRadioButton(tab_3);
        radioButton24->setObjectName(QString::fromUtf8("radioButton24"));

        verticalLayout_4->addWidget(radioButton24);

        tabWidget->addTab(tab_3, QString());
        tab_5 = new QWidget();
        tab_5->setObjectName(QString::fromUtf8("tab_5"));
        verticalLayout_6 = new QVBoxLayout(tab_5);
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        label_5 = new QLabel(tab_5);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setFrameShape(QFrame::Box);

        verticalLayout_6->addWidget(label_5);

        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        radioButton31 = new QRadioButton(tab_5);
        radioButton31->setObjectName(QString::fromUtf8("radioButton31"));

        verticalLayout_5->addWidget(radioButton31);

        radioButton32 = new QRadioButton(tab_5);
        radioButton32->setObjectName(QString::fromUtf8("radioButton32"));

        verticalLayout_5->addWidget(radioButton32);

        radioButton33 = new QRadioButton(tab_5);
        radioButton33->setObjectName(QString::fromUtf8("radioButton33"));

        verticalLayout_5->addWidget(radioButton33);


        verticalLayout_6->addLayout(verticalLayout_5);

        tabWidget->addTab(tab_5, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QString::fromUtf8("tab_2"));
        label_3 = new QLabel(tab_2);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(40, 20, 441, 81));
        label_3->setFrameShape(QFrame::Box);
        naslonecznienie = new QLabel(tab_2);
        naslonecznienie->setObjectName(QString::fromUtf8("naslonecznienie"));
        naslonecznienie->setGeometry(QRect(40, 120, 221, 181));
        verticalLayoutWidget = new QWidget(tab_2);
        verticalLayoutWidget->setObjectName(QString::fromUtf8("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(320, 120, 160, 191));
        verticalLayout_7 = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout_7->setObjectName(QString::fromUtf8("verticalLayout_7"));
        verticalLayout_7->setContentsMargins(0, 0, 0, 0);
        radioButton41 = new QRadioButton(verticalLayoutWidget);
        radioButton41->setObjectName(QString::fromUtf8("radioButton41"));

        verticalLayout_7->addWidget(radioButton41);

        radioButton42 = new QRadioButton(verticalLayoutWidget);
        radioButton42->setObjectName(QString::fromUtf8("radioButton42"));

        verticalLayout_7->addWidget(radioButton42);

        radioButton43 = new QRadioButton(verticalLayoutWidget);
        radioButton43->setObjectName(QString::fromUtf8("radioButton43"));

        verticalLayout_7->addWidget(radioButton43);

        radioButton44 = new QRadioButton(verticalLayoutWidget);
        radioButton44->setObjectName(QString::fromUtf8("radioButton44"));

        verticalLayout_7->addWidget(radioButton44);

        tabWidget->addTab(tab_2, QString());
        tab_4 = new QWidget();
        tab_4->setObjectName(QString::fromUtf8("tab_4"));
        verticalLayout = new QVBoxLayout(tab_4);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label_4 = new QLabel(tab_4);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setFrameShape(QFrame::Box);

        verticalLayout->addWidget(label_4);

        lineEdit = new QLineEdit(tab_4);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));

        verticalLayout->addWidget(lineEdit);

        tabWidget->addTab(tab_4, QString());
        tab_6 = new QWidget();
        tab_6->setObjectName(QString::fromUtf8("tab_6"));
        label_6 = new QLabel(tab_6);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(70, 40, 191, 91));
        label_rachunek = new QLabel(tab_6);
        label_rachunek->setObjectName(QString::fromUtf8("label_rachunek"));
        label_rachunek->setGeometry(QRect(110, 240, 131, 41));
        pushButton = new QPushButton(tab_6);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(130, 150, 75, 23));
        tabWidget->addTab(tab_6, QString());

        formLayout->setWidget(0, QFormLayout::SpanningRole, tabWidget);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 911, 21));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        tabWidget->setCurrentIndex(5);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p align=\"center\"><span style=\" font-size:10pt;\">Podaj kierunek, w kt\303\263r\304\205 strone skierowane s\304\205 panele:</span></p></body></html>", nullptr));
        radioButton11->setText(QCoreApplication::translate("MainWindow", "Po\305\202udnie", nullptr));
        radioButton12->setText(QCoreApplication::translate("MainWindow", "Wsch\303\263d/Zach\303\263d", nullptr));
        radioButton13->setText(QCoreApplication::translate("MainWindow", "Sko\305\233nie", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab), QCoreApplication::translate("MainWindow", "Kierunek", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p align=\"center\"><span style=\" font-size:10pt;\">Podaj k\304\205t nachylenia paneli:</span></p></body></html>", nullptr));
        radioButton21->setText(QCoreApplication::translate("MainWindow", "P\305\202aski 0\302\260-4\302\260", nullptr));
        radioButton22->setText(QCoreApplication::translate("MainWindow", "Prawie p\305\202aski 5\302\260-24\302\260", nullptr));
        radioButton23->setText(QCoreApplication::translate("MainWindow", "Normalnie nachylony 25\302\260-35\302\260", nullptr));
        radioButton24->setText(QCoreApplication::translate("MainWindow", "Bardzo nachylony 35\302\260+", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QCoreApplication::translate("MainWindow", "Nachylenie", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p align=\"center\">Wybierz ile cienia pada na panele:</p></body></html>", nullptr));
        radioButton31->setText(QCoreApplication::translate("MainWindow", "Prawie nic", nullptr));
        radioButton32->setText(QCoreApplication::translate("MainWindow", "Troch\304\231", nullptr));
        radioButton33->setText(QCoreApplication::translate("MainWindow", "Du\305\274o cienia", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_5), QCoreApplication::translate("MainWindow", "Zacienienie", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p align=\"center\"><span style=\" font-size:10pt;\">Podaj region nas\305\202onecznienia:</span></p></body></html>", nullptr));
        naslonecznienie->setText(QString());
        radioButton41->setText(QCoreApplication::translate("MainWindow", "Czerwony", nullptr));
        radioButton42->setText(QCoreApplication::translate("MainWindow", "Pomara\305\204czowy", nullptr));
        radioButton43->setText(QCoreApplication::translate("MainWindow", "Ciemny \305\274\303\263\305\202ty", nullptr));
        radioButton44->setText(QCoreApplication::translate("MainWindow", "Jasny \305\274\303\263\305\202ty", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QCoreApplication::translate("MainWindow", "Po\305\202o\305\274enie", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p align=\"center\"><span style=\" font-size:10pt;\">Wpisz roczn\304\205 cene rachunku za pr\304\205d (PLN):</span></p></body></html>", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_4), QCoreApplication::translate("MainWindow", "Rachunek", nullptr));
        label_6->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p align=\"center\"><span style=\" font-size:10pt;\">Skuteczno\305\233\304\207 istalacji fotowoltaicznej (%):</span></p></body></html>", nullptr));
        label_rachunek->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        pushButton->setText(QCoreApplication::translate("MainWindow", "Oblicz", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_6), QCoreApplication::translate("MainWindow", "Instalacja", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
