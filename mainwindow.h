#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    int y[6][6]={   {-2,-2,0,3,3,100},
                    {0,-1,0,0,-1,100},
                    {-1,0,0,1,1,100},
                    {0,2,0,0,2,100},
                   {0,0,0,0,0,100},
                    {0,0,0,0,1,100}};

private slots:
    void on_b1_clicked();

    void on_copyButton_clicked();

    void on_b2_clicked();

    void on_b3_clicked();

    void on_b4_clicked();

    void on_b5_clicked();

    void on_checkBox_checkStateChanged(const Qt::CheckState &arg1);

    void on_pushButton_clicked();

    void on_checkBox_2_checkStateChanged(const Qt::CheckState &arg1);

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
