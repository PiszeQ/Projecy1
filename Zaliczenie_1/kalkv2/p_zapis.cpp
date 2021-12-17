#include "p_zapis.h"
#include "ui_p_zapis.h"
#include "mainwindow.h"
#include <QString>
#include <string>
#include <QFile>
#include <QTextStream>

p_zapis::p_zapis(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::p_zapis)
{
    ui->setupUi(this);
}

p_zapis::~p_zapis()
{






    delete ui;
}
void p_zapis::on_pushButton_clicked()
{
    ui->lineEdit_1->setText("C:/Users/PiszeQ/Desktop");
}


void p_zapis::on_pushButton_2_clicked()
{
    QFile dane("C:/Users/PiszeQ/Desktop/2 rok 1 semestr/Projekt/kalkv2/zasoby/dane.txt");
    dane.open(QIODevice::ReadOnly | QIODevice::Text);
    QString d_dane=dane.readLine(0);
    QString nazwa=ui->lineEdit_2->text();
    QString sciezka=ui->lineEdit_1->text();
    sciezka.append("/");
    sciezka.append(nazwa);
    sciezka.append(".txt");
    QFile plik(sciezka);
    plik.open(QIODevice::Append | QIODevice::Text);
    QTextStream out (&plik);
    out <<"Instalacja fotowoltaiczna.\n"<<"Moc calkowita: "<<d_dane;
    hide();
}

