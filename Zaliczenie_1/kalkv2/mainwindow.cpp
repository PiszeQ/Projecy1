#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QPixmap>
#include <QMessageBox>
#include <string>
#include "p_zapis.h"
#include <QFile>
#include <QTextStream>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    QPixmap pix(":/zasoby/zasoby/slonce_pl.jpg");
    int w = ui->naslonecznienie->width();
    int h = ui->naslonecznienie->height();
    ui->naslonecznienie->setPixmap(pix.scaled(w,h,Qt::KeepAspectRatio));
}

MainWindow::~MainWindow()
{
    delete ui;
}

////////////////////////

class Obliczenia
{
 public:
    std::string cena;
    float d_kierunek;
    float d_nachylenie;
    float d_cien;
    float d_region;
    float skutecznosc;
    float moc;
    float instalacja;
    float d_rachunek;

////////////////////////

    void fskut()
    {
        if (d_kierunek*d_nachylenie*d_cien != 0)
        {
            skutecznosc=d_kierunek*d_nachylenie*d_cien*100;

        }
    }

    void fmoc()
    {

        d_rachunek=d_rachunek*0.7;
        moc=((d_rachunek*0.2)+((d_rachunek*0.8)/0.8))/(d_region*12);
    }

    void finsta()
    {
        if (skutecznosc!= 0)
        {
            instalacja+=moc;
        }


    }

    void zapis()
    {
        QFile dane("C:/Users/PiszeQ/Desktop/2 rok 1 semestr/Projekt/kalkv2/zasoby/dane.txt");
        dane.open(QIODevice::WriteOnly | QIODevice::Text);
        QTextStream out (&dane);
        out <<instalacja;
    }

    void fostzapis()
    {
        p_zapis zapis;
        zapis.setModal(true);
        zapis.exec();
    }
};

////////////////////////

Obliczenia op;
    void MainWindow::on_radioButton11_clicked()
    {
        op.d_kierunek = 1;
    }

    void MainWindow::on_radioButton12_clicked()
    {
        op.d_kierunek = 0.5;
    }

    void MainWindow::on_radioButton13_clicked()
    {
        op.d_kierunek = 0.75;
    }

////////////////////////

    void MainWindow::on_radioButton21_clicked()
    {
        op.d_nachylenie = 0.95;
    }

    void MainWindow::on_radioButton22_clicked()
    {
        op.d_nachylenie = 0.85;
    }

    void MainWindow::on_radioButton23_clicked()
    {
        op.d_nachylenie = 0.7;
    }

    void MainWindow::on_radioButton24_clicked()
    {
        op.d_nachylenie = 0.6;
    }

////////////////////////

    void MainWindow::on_radioButton31_clicked()
    {
        op.d_cien = 0.95;
    }

    void MainWindow::on_radioButton32_clicked()
    {
        op.d_cien = 0.85;
    }

    void MainWindow::on_radioButton33_clicked()
    {
        op.d_cien = 0.65;
    }

////////////////////////

    void MainWindow::on_radioButton41_clicked()
    {
        op.d_region = 1048;
    }

    void MainWindow::on_radioButton42_clicked()
    {
        op.d_region = 126;
    }

    void MainWindow::on_radioButton43_clicked()
    {
        op.d_region = 1014;
    }

    void MainWindow::on_radioButton44_clicked()
    {
        op.d_region = 996;
    }

////////////////////////

    void MainWindow::on_pushButton_clicked()
    {
        if (op.d_kierunek*op.d_nachylenie*op.d_cien != 0)
        {
            op.fskut();
            ui->label_skutecznosc->setNum(op.skutecznosc);
        }
        else
        {
            QMessageBox::critical(this,"Błąd","Sprawdź czy podano wszystkie dane.");
        }
    }

////////////////////////

    void MainWindow::on_pushButton_2_clicked()
    {
        if (op.skutecznosc!= 0)
        {
            QString cena=ui->lineEdit_0->text();
            op.d_rachunek=cena.toFloat();
            ui->label_moc->setNum(op.d_rachunek);
            op.fmoc();
            ui->label_moc->setNum(op.moc);
        }
        else
        {
            QMessageBox::critical(this,"Błąd","Nie obliczono skuteczności.");
        }

    }

////////////////////////

    void MainWindow::on_pushButton_3_clicked()
    {
        if (op.skutecznosc!= 0)
        {
            op.finsta();
            ui->label_9->setNum(op.instalacja);
        }
        else
        {
            QMessageBox::critical(this,"Błąd","Brak mocy panelu.");
        }
        op.zapis();
    }

////////////////////////

    void MainWindow::on_pushButton_4_clicked()
    {
        op.fostzapis();
    }

////////////////////////
