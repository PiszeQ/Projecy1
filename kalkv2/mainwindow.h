#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_radioButton11_clicked();

    void on_radioButton12_clicked();

    void on_radioButton13_clicked();

    void on_radioButton21_clicked();

    void on_radioButton22_clicked();

    void on_radioButton23_clicked();

    void on_radioButton24_clicked();

    void on_radioButton31_clicked();

    void on_radioButton32_clicked();

    void on_radioButton33_clicked();

    void on_radioButton41_clicked();

    void on_radioButton42_clicked();

    void on_radioButton43_clicked();

    void on_radioButton44_clicked();

    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
