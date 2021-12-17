#ifndef P_ZAPIS_H
#define P_ZAPIS_H

#include <QDialog>

namespace Ui {
class p_zapis;
}

class p_zapis : public QDialog
{
    Q_OBJECT

public:
    explicit p_zapis(QWidget *parent = nullptr);
    ~p_zapis();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::p_zapis *ui;
};

#endif // P_ZAPIS_H
