#include "calc.h"
#include "ui_calc.h"
#include "QDebug"
int op;
float a,b,c;
calc::calc(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::calc)
{
    ui->setupUi(this);
}

calc::~calc()
{
    delete ui;
}

void calc::on_pushButton_9_clicked()
{
    ui->lineEdit->insert("0");
}

void calc::on_pushButton_16_clicked()
{
    ui->lineEdit->insert("1");
}

void calc::on_pushButton_12_clicked()
{
    ui->lineEdit->insert("2");
}

void calc::on_pushButton_8_clicked()
{
    ui->lineEdit->insert("3");
}

void calc::on_pushButton_15_clicked()
{
    ui->lineEdit->insert("4");
}

void calc::on_pushButton_11_clicked()
{
    ui->lineEdit->insert("5");
}

void calc::on_pushButton_7_clicked()
{
    ui->lineEdit->insert("6");
}

void calc::on_pushButton_14_clicked()
{

    ui->lineEdit->insert("7");
}

void calc::on_pushButton_10_clicked()
{
    ui->lineEdit->insert("8");
}

void calc::on_pushButton_6_clicked()
{
    ui->lineEdit->insert("9");
}

void calc::on_pushButton_13_clicked()
{
    ui->lineEdit->insert(".");
}

void calc::on_pushButton_4_clicked()
{
    a=ui->lineEdit->text().toDouble();
  op=1;
  ui->lineEdit->clear();
}

void calc::on_pushButton_2_clicked()
{
    a=ui->lineEdit->text().toDouble();
  op=2;
  ui->lineEdit->clear();
}

void calc::on_pushButton_3_clicked()
{
    a=ui->lineEdit->text().toDouble();
  op=3;
  ui->lineEdit->clear();
}

void calc::on_pushButton_clicked()
{
    a=ui->lineEdit->text().toDouble();
  op=4;
  ui->lineEdit->clear();
}

void calc::on_pushButton_5_clicked()
{
    b=ui->lineEdit->text().toDouble();
    ui->lineEdit->clear();
    switch (op) {
    case 1:c=a+b;  ui->lineEdit->setText(QString::number(c));
     case 2:c=a-b;  ui->lineEdit->setText(QString::number(c));
       case 3:c=a*b;  ui->lineEdit->setText(QString::number(c));
    case 4:c=a/b;  ui->lineEdit->setText(QString::number(c));
    }
}
