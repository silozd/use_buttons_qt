#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QTimer>
#include <QDebug>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    timer_1s = new QTimer(this);
    timer_1s->setInterval(1000);
    connect(timer_1s, SIGNAL(timeout()), this, SLOT(Change()));

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::Change(){
    static int second=0;

    switch(sila){
    case 0:
        ui->label->setStyleSheet("background: red");
        break;
    case 1:
        ui->label->setStyleSheet("background: blue");
        break;
    case 2:
        ui->label->setStyleSheet("background: yellow");
        break;
    }
    second++;
    if(second > 2) sila=0;

}

void MainWindow::on_startbtn_clicked()
{
    timer_1s->start();

}
void MainWindow::on_stopbtn_clicked()
{
    ui->label->setStyleSheet("background: none");
    ui->label->setText("No Color");
    timer_1s->stop();
}
void MainWindow::on_redbtn_clicked()
{
    ui->label->setStyleSheet("background: red");
}
void MainWindow::on_bluebtn_clicked()
{
    ui->label->setStyleSheet("background: blue");
}
void MainWindow::on_yellowbtn_clicked()
{
    ui->label->setStyleSheet("background: yellow");
}
