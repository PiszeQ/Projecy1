/********************************************************************************
** Form generated from reading UI file 'p_zapis.ui'
**
** Created by: Qt User Interface Compiler version 6.2.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_P_ZAPIS_H
#define UI_P_ZAPIS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_p_zapis
{
public:
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QLineEdit *lineEdit_1;
    QSpacerItem *verticalSpacer_2;
    QPushButton *pushButton;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_2;
    QLineEdit *lineEdit_2;
    QSpacerItem *verticalSpacer;
    QPushButton *pushButton_2;

    void setupUi(QDialog *p_zapis)
    {
        if (p_zapis->objectName().isEmpty())
            p_zapis->setObjectName(QString::fromUtf8("p_zapis"));
        p_zapis->resize(404, 238);
        horizontalLayout = new QHBoxLayout(p_zapis);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label = new QLabel(p_zapis);
        label->setObjectName(QString::fromUtf8("label"));

        verticalLayout->addWidget(label);

        lineEdit_1 = new QLineEdit(p_zapis);
        lineEdit_1->setObjectName(QString::fromUtf8("lineEdit_1"));

        verticalLayout->addWidget(lineEdit_1);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Preferred);

        verticalLayout->addItem(verticalSpacer_2);

        pushButton = new QPushButton(p_zapis);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        verticalLayout->addWidget(pushButton);


        horizontalLayout->addLayout(verticalLayout);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        label_2 = new QLabel(p_zapis);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        verticalLayout_2->addWidget(label_2);

        lineEdit_2 = new QLineEdit(p_zapis);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));

        verticalLayout_2->addWidget(lineEdit_2);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Preferred);

        verticalLayout_2->addItem(verticalSpacer);

        pushButton_2 = new QPushButton(p_zapis);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));

        verticalLayout_2->addWidget(pushButton_2);


        horizontalLayout->addLayout(verticalLayout_2);


        retranslateUi(p_zapis);

        QMetaObject::connectSlotsByName(p_zapis);
    } // setupUi

    void retranslateUi(QDialog *p_zapis)
    {
        p_zapis->setWindowTitle(QCoreApplication::translate("p_zapis", "Zapisz", nullptr));
        label->setText(QCoreApplication::translate("p_zapis", "<html><head/><body><p align=\"center\"><span style=\" font-size:10pt;\">Podaj miejsce zapisu pliku:</span></p></body></html>", nullptr));
        pushButton->setText(QCoreApplication::translate("p_zapis", "Pulpit", nullptr));
        label_2->setText(QCoreApplication::translate("p_zapis", "<html><head/><body><p align=\"center\"><span style=\" font-size:10pt;\">Nazwa pliku :</span></p></body></html>", nullptr));
        pushButton_2->setText(QCoreApplication::translate("p_zapis", "Zapisz ", nullptr));
    } // retranslateUi

};

namespace Ui {
    class p_zapis: public Ui_p_zapis {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_P_ZAPIS_H
