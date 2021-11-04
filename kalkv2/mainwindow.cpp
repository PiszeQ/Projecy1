#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QPixmap>
#include <QMessageBox>
#include <string>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    QPixmap pix("C:/Users/PiszeQ/Desktop/2 rok 1 semestr/Projekt/Zdjęcia/slonce_pl.jpg");
    int w = ui->naslonecznienie->width();
    int h = ui->naslonecznienie->height();
    ui->naslonecznienie->setPixmap(pix.scaled(w,h,Qt::KeepAspectRatio));
}

MainWindow::~MainWindow()
{
    delete ui;
}

////////////////////////

    float dane1, dane2, dane3, dane4,dane5, skutecznosc,moc,instalacja;

////////////////////////

void MainWindow::on_radioButton11_clicked()
{
    dane1 = 1;
}


void MainWindow::on_radioButton12_clicked()
{
    dane1 = 0.5;
}


void MainWindow::on_radioButton13_clicked()
{
    dane1 = 0.75;
}

////////////////////////


void MainWindow::on_radioButton21_clicked()
{
    dane2 = 0.95;
}


void MainWindow::on_radioButton22_clicked()
{
    dane2 = 0.85;
}


void MainWindow::on_radioButton23_clicked()
{
    dane2 = 0.7;
}


void MainWindow::on_radioButton24_clicked()
{
    dane2 = 0.6;
}

////////////////////////


void MainWindow::on_radioButton31_clicked()
{
    dane3 = 0.95;
}


void MainWindow::on_radioButton32_clicked()
{
    dane3 = 0.85;
}


void MainWindow::on_radioButton33_clicked()
{
    dane3 = 0.65;
}

////////////////////////

void MainWindow::on_radioButton41_clicked()
{
    dane4 = 1048;
}


void MainWindow::on_radioButton42_clicked()
{
    dane4 = 126;
}


void MainWindow::on_radioButton43_clicked()
{
    dane4 = 1014;
}


void MainWindow::on_radioButton44_clicked()
{
    dane4 = 996;
}

////////////////////////


void MainWindow::on_pushButton_clicked()
{
    if (dane1*dane2*dane3 != 0)
    {
        skutecznosc=dane1*dane2*dane3*100;
        ui->label_skutecznosc->setNum(skutecznosc);
    }
    else
    {
        QMessageBox::critical(this,"Błąd","Sprawdź czy podano wszystkie dane.");
    }
}

////////////////////////


void MainWindow::on_pushButton_2_clicked()
{
    if (skutecznosc!= 0)
    {
        QString cena=ui->lineEdit->text();
        dane5=cena.toFloat();
        ui->label_moc->setNum(dane5);
        dane5=dane5*0.7;
        moc=((dane5*0.2)+((dane5*0.8)/0.8))/(dane4*12);
        ui->label_moc->setNum(moc);
    }
    else
    {
        QMessageBox::critical(this,"Błąd","Nie obliczono skuteczności.");
    }

}


void MainWindow::on_pushButton_3_clicked()
{

    if (skutecznosc!= 0)
    {
        instalacja+=moc;
        ui->label_9->setNum(instalacja);
    }
    else
    {
        QMessageBox::critical(this,"Błąd","Brak mocy panelu.");
    }
}

