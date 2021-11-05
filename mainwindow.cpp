#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <iostream>
#include <QtCore>
#include <cstdlib>
#include <dos.h>
#include <QAbstractButton> //to raczej nie jest potrzebne
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


void MainWindow::on_pushButton_D100_clicked() //ostatni szybki rzut
{
    int d1 = 0; //zerowanie wartosci rzutu przed
    d1 = (std::rand()%100+d1+1);    //pprzypisanie losowej wartosci do d1
    ui->textEdit_historia->append("Rzut D100:"+  QString::number(d1));  //po przycisnieciu przyciksu dodaje do teskstu text rzut D100  wartosc którą przyjeło d1
}


void MainWindow::on_pushButton_rzut_clicked()   //jesli nacisniemy przycisk rzuc!                                            --POCZĄTEK RZUT MODYFIKOWANY--
{
int q = 0; //wartosc modyfikatora wyzerowana na starcie                                                                      --USTALANIE MODYFIKATORA Q--
    if(ui->p0->isChecked()) //sprawdza czy jest zaznaczony jesli tak to
    {
        q = 0;      //przypisuje wartosc q
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

       QString spin = ui->spinBox_iloscrzutuw->text();  //wychwytuje zmiane w spinboxie                                     --SPIN BOX ILOSC RZUTÓW A--
       int a = spin.toUInt();                           //przypisuje wartosc spinboxa wartosci a

       QString spin2 = ui->spinBox_iloscscianek->text();// robi to samo co partia wyzej ale z innym spinboxiem              --SPIN BOX ZAKRES RZUTU B--
       int b = spin2.toUInt();

       int d1 = 0;  //zeruje wartosc d1
       int dM = 0;
       while (a > 0)    //powtarza wszystko poki wartosc a jest wieksza od zera
       {
       dM = d1;

       d1 = (std::rand()%b+d1 +1);  //przypisuje d1 losową wartość do zakresu z b

       if (d1+q<=0)
{
           ui->textEdit_historia->append("Rzut z mod: " + QString::number(q) + " Rzut: 1" + " Suma= (1)");
           a--; //odejmuej 1 z wartosci a
 }
       else {
           ui->textEdit_historia->append("Rzut z mod: " + QString::number(q) + " Rzut: " + QString::number(d1 - dM)  + " Suma= (" + QString::number(d1+q) + ")");  //dodaje wynik d1 wyswietlajac go na lisice uwzgledniajac modyfikator q
                 a--; //odejmuej 1 z wartosci a
       }
       }

}                                                                                   //                                      --KONIEC RZUT MODYFIKOWANY--



