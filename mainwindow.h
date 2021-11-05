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
    void on_pushButton_D2_clicked();

    void on_pushButton_D4_clicked();

    void on_pushButton_D6_clicked();

    void on_pushButton_D8_clicked();

    void on_pushButton_D10_clicked();

    void on_pushButton_D20_clicked();

    void on_pushButton_D100_clicked();

    void on_pushButton_rzut_clicked();

    void on_spinBox_iloscrzutuw_valueChanged(const QString &arg1);

    void on_spinBox_iloscscianek_valueChanged(int arg1);

private:
    Ui::MainWindow *ui;


    enum Operation
    {
        losowanie,
        dodawanie,
        odejmowanie,

    };
    int Opt;
    double historia;
};
#endif // MAINWINDOW_H
