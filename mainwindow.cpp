#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <iostream>
#include <QtCore>
#include <cstdlib>
#include <dos.h>
#include <QAbstractButton>
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

}



MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_D2_clicked()  // szybki rzut d2
{
  int d1 = 0;
  d1 = (std::rand()%2+d1+1);
  ui->textEdit_historia->append("Rzut D2:"+  QString::number(d1));

}

void MainWindow::on_pushButton_D4_clicked()// szybki rzut
{
    int d1 = 0;
    d1 = (std::rand()%4+d1+1);
    ui->textEdit_historia->append("Rzut D4:"+  QString::number(d1));
}


void MainWindow::on_pushButton_D6_clicked()// szybki rzut
{
    int d1 = 0;
    d1 = (std::rand()%6+d1+1);
    ui->textEdit_historia->append("Rzut D6:"+  QString::number(d1));
}


void MainWindow::on_pushButton_D8_clicked()
{
    int d1 = 0;
    d1 = (std::rand()%8+d1+1);
    ui->textEdit_historia->append("Rzut D8:"+  QString::number(d1));
}


void MainWindow::on_pushButton_D10_clicked()
{
    int d1 = 0;
    d1 = (std::rand()%10+d1+1);
    ui->textEdit_historia->append("Rzut D10:"+  QString::number(d1));
}


void MainWindow::on_pushButton_D20_clicked()
{
    int d1 = 0;
    d1 = (std::rand()%20+d1+1);
    ui->textEdit_historia->append("Rzut D20:"+  QString::number(d1));
}


void MainWindow::on_pushButton_D100_clicked()
{
    int d1 = 0;
    d1 = (std::rand()%100+d1+1);
    ui->textEdit_historia->append("Rzut D100:"+  QString::number(d1));
}


void MainWindow::on_pushButton_rzut_clicked()
{
int q = 0; //wartosc modyfikatora
    if(ui->p0->isChecked())
    {
        q = 0;
    }

    if(ui->p10->isChecked())
    {
       q = 10;
    }

    if(ui->p20->isChecked())
    {
        q = 20;
    }

    if(ui->m20->isChecked())
    {
        q = -20;
    }

    if(ui->m10->isChecked())
    {
        q = -10;
    }

       QString spin = ui->spinBox_iloscrzutuw->text();  //wychwytuje zmiane w spinboxie
       int a = spin.toUInt();                           //przypisuje wartosc spinboxa wartosci a

       QString spin2 = ui->spinBox_iloscscianek->text();// robi to samo co partia wyzej ale z innym spinboxiem
       int b = spin2.toUInt();

       int d1 = 0;
       while (a > 0)
       {

       d1 = (std::rand()%b+d1 +1);
       ui->textEdit_historia->append("Rzut:"+  QString::number(d1+q));
       a--;
       }
    //ui->textEdit_historia->setText(QString::number(a));



    //int d1 = (std::rand()%100+d1 -100);
    //ui->textEdit_historia->setText("Rzut D100:"+  QString::number(d1));



    //int i
    //QString spin=ui->spinBox_iloscrzutuw->QString::number(i);
}



