#ifndef CALC_H
#define CALC_H

#include <QWidget>

namespace Ui {
class calc;
}

class calc : public QWidget
{
    Q_OBJECT

public:
    explicit calc(QWidget *parent = 0);
    ~calc();

private slots:
    void on_pushButton_9_clicked();

    void on_pushButton_16_clicked();

    void on_pushButton_12_clicked();

    void on_pushButton_8_clicked();

    void on_pushButton_15_clicked();

    void on_pushButton_11_clicked();

    void on_pushButton_7_clicked();

    void on_pushButton_14_clicked();

    void on_pushButton_10_clicked();

    void on_pushButton_6_clicked();

    void on_pushButton_13_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_clicked();

    void on_pushButton_2_clicked();
    
    void on_pushButton_3_clicked();
    
    void on_pushButton_5_clicked();

private:
    Ui::calc *ui;
};

#endif // CALC_H
