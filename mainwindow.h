#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

private:
    QTimer *timer_1s;

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void Change();

    void on_startbtn_clicked();

    void on_stopbtn_clicked();

    void on_redbtn_clicked();

    void on_bluebtn_clicked();

    void on_yellowbtn_clicked();



private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
