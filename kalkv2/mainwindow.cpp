#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QPixmap>
#include <QMessageBox>

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

    float dane1, dane2, dane3, dane4, skutecznosc;

////////////////////////

void MainWindow::on_radioButton11_clicked()
{
    dane1 = 1;
}


void MainWindow::on_radioButton12_clicked()
{
    dane1 = 2;
}


void MainWindow::on_radioButton13_clicked()
{
    dane1 = 3;
}

////////////////////////


void MainWindow::on_radioButton21_clicked()
{
    dane2 = 1;
}


void MainWindow::on_radioButton22_clicked()
{
    dane2 = 2;
}


void MainWindow::on_radioButton23_clicked()
{
    dane2 = 3;
}


void MainWindow::on_radioButton24_clicked()
{
    dane2 = 4;
}

////////////////////////


void MainWindow::on_radioButton31_clicked()
{
    dane3 = 3;
}


void MainWindow::on_radioButton32_clicked()
{
    dane3 = 2;
}


void MainWindow::on_radioButton33_clicked()
{
    dane3 = 1;
}

////////////////////////
