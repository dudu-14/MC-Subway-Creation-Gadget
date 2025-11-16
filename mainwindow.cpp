#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QApplication>
#include <QClipboard>
#include <QTimer>
#include <QWindow>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    this->setWindowIcon(QIcon(":/icon.ico"));
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_b1_clicked()
{
    int button_pos=0;
    QString temp_x = ui->tx->toPlainText();
    int x1=temp_x.toInt();
    int x2=temp_x.toInt();
    QString temp_y = ui->ty->toPlainText();
    int y1=temp_y.toInt();
    int y2=temp_y.toInt();
    QString temp_z = ui->tz->toPlainText();
    int z1=temp_z.toInt();
    int z2=temp_z.toInt();
    if(ui->checkBox_is_x->isChecked())
    {
        int temp;
        temp=x1;x1=y1;y1=temp;
        temp=x2;x2=y2;y2=temp;
    }
    x1+=y[button_pos][0];
    z1+=y[button_pos][1];
    y1+=y[button_pos][2];
    x2+=y[button_pos][3];
    z2+=y[button_pos][4];
    y2+=y[button_pos][5];
    char* s=new char[1000];
    if(ui->checkBox_is_x->isChecked())
    {
        int temp;
        temp=x1;x1=y1;y1=temp;
        temp=x2;x2=y2;y2=temp;
    }
    sprintf(s,"/fill %d %d %d %d %d %d minecraft:barrier",x1,z1,y1,x2,z2,y2);
    ui->text_ok->setText(s);
    QClipboard *clipboard = QApplication::clipboard();
    clipboard->setText(s);
    ui->copyButton->setText("已复制");
    QEventLoop loop;//定义一个新的事件循环
    QTimer::singleShot(1000,&loop,SLOT(quit()));//创建单次定时器，槽函数为事件循环的退出函数
    loop.exec();//事件循环开始执行，程序会卡在这里，直到定时时间到，本循环被退出
    ui->copyButton->setText("复制");
}


void MainWindow::on_copyButton_clicked()
{
    QString s=ui->text_ok->toPlainText();
    QClipboard *clipboard = QApplication::clipboard();
    clipboard->setText(s);
    ui->copyButton->setText("已复制");
    QEventLoop loop;//定义一个新的事件循环
    QTimer::singleShot(1000,&loop,SLOT(quit()));//创建单次定时器，槽函数为事件循环的退出函数
    loop.exec();//事件循环开始执行，程序会卡在这里，直到定时时间到，本循环被退出
    ui->copyButton->setText("复制");
}


void MainWindow::on_b2_clicked()
{
    int button_pos=1;
    QString temp_x = ui->tx->toPlainText();
    int x1=temp_x.toInt();
    int x2=temp_x.toInt();
    QString temp_y = ui->ty->toPlainText();
    int y1=temp_y.toInt();
    int y2=temp_y.toInt();
    QString temp_z = ui->tz->toPlainText();
    int z1=temp_z.toInt();
    int z2=temp_z.toInt();
    if(ui->checkBox_is_x->isChecked())
    {
        int temp;
        temp=x1;x1=y1;y1=temp;
        temp=x2;x2=y2;y2=temp;
    }
    x1+=y[button_pos][0];
    z1+=y[button_pos][1];
    y1+=y[button_pos][2];
    x2+=y[button_pos][3];
    z2+=y[button_pos][4];
    y2+=y[button_pos][5];
    char* s=new char[1000];
    if(ui->checkBox_is_x->isChecked())
    {
        int temp;
        temp=x1;x1=y1;y1=temp;
        temp=x2;x2=y2;y2=temp;
    }
    sprintf(s,"/fill %d %d %d %d %d %d redstone_block",x1,z1,y1,x2,z2,y2);
    ui->text_ok->setText(s);
    QClipboard *clipboard = QApplication::clipboard();
    clipboard->setText(s);
    ui->copyButton->setText("已复制");
    QEventLoop loop;//定义一个新的事件循环
    QTimer::singleShot(1000,&loop,SLOT(quit()));//创建单次定时器，槽函数为事件循环的退出函数
    loop.exec();//事件循环开始执行，程序会卡在这里，直到定时时间到，本循环被退出
    ui->copyButton->setText("复制");
}


void MainWindow::on_b3_clicked()
{
    int button_pos=2;
    if(ui->air_one->isChecked())button_pos=5;
    QString temp_x = ui->tx->toPlainText();
    int x1=temp_x.toInt();
    int x2=temp_x.toInt();
    QString temp_y = ui->ty->toPlainText();
    int y1=temp_y.toInt();
    int y2=temp_y.toInt();
    QString temp_z = ui->tz->toPlainText();
    int z1=temp_z.toInt();
    int z2=temp_z.toInt();
    if(ui->checkBox_is_x->isChecked())
    {
        int temp;
        temp=x1;x1=y1;y1=temp;
        temp=x2;x2=y2;y2=temp;
    }
    x1+=y[button_pos][0];
    z1+=y[button_pos][1];
    y1+=y[button_pos][2];
    x2+=y[button_pos][3];
    z2+=y[button_pos][4];
    y2+=y[button_pos][5];
    char* s=new char[1000];
    if(ui->checkBox_is_x->isChecked())
    {
        int temp;
        temp=x1;x1=y1;y1=temp;
        temp=x2;x2=y2;y2=temp;
    }
    sprintf(s,"/fill %d %d %d %d %d %d air",x1,z1,y1,x2,z2,y2);
    ui->text_ok->setText(s);
    QClipboard *clipboard = QApplication::clipboard();
    clipboard->setText(s);
    ui->copyButton->setText("已复制");
    QEventLoop loop;//定义一个新的事件循环
    QTimer::singleShot(1000,&loop,SLOT(quit()));//创建单次定时器，槽函数为事件循环的退出函数
    loop.exec();//事件循环开始执行，程序会卡在这里，直到定时时间到，本循环被退出
    ui->copyButton->setText("复制");
}


void MainWindow::on_b4_clicked()
{
    int button_pos=3;
    QString temp_x = ui->tx->toPlainText();
    int x1=temp_x.toInt();
    int x2=temp_x.toInt();
    QString temp_y = ui->ty->toPlainText();
    int y1=temp_y.toInt();
    int y2=temp_y.toInt();
    QString temp_z = ui->tz->toPlainText();
    int z1=temp_z.toInt();
    int z2=temp_z.toInt();
    if(ui->checkBox_is_x->isChecked())
    {
        int temp;
        temp=x1;x1=y1;y1=temp;
        temp=x2;x2=y2;y2=temp;
    }
    x1+=y[button_pos][0];
    z1+=y[button_pos][1];
    y1+=y[button_pos][2];
    x2+=y[button_pos][3];
    z2+=y[button_pos][4];
    y2+=y[button_pos][5];
    char* s=new char[1000];
    if(ui->checkBox_is_x->isChecked())
    {
        int temp;
        temp=x1;x1=y1;y1=temp;
        temp=x2;x2=y2;y2=temp;
    }
    sprintf(s,"/fill %d %d %d %d %d %d minecraft:pearlescent_froglight",x1,z1,y1,x2,z2,y2);
    ui->text_ok->setText(s);
    QClipboard *clipboard = QApplication::clipboard();
    clipboard->setText(s);
    ui->copyButton->setText("已复制");
    QEventLoop loop;//定义一个新的事件循环
    QTimer::singleShot(1000,&loop,SLOT(quit()));//创建单次定时器，槽函数为事件循环的退出函数
    loop.exec();//事件循环开始执行，程序会卡在这里，直到定时时间到，本循环被退出
    ui->copyButton->setText("复制");
}


void MainWindow::on_b5_clicked()
{
    int button_pos=4;
    QString temp_x = ui->tx->toPlainText();
    int x1=temp_x.toInt();
    int x2=temp_x.toInt();
    QString temp_y = ui->ty->toPlainText();
    int y1=temp_y.toInt();
    int y2=temp_y.toInt();
    QString temp_z = ui->tz->toPlainText();
    int z1=temp_z.toInt();
    int z2=temp_z.toInt();
    if(ui->checkBox_is_x->isChecked())
    {
        int temp;
        temp=x1;x1=y1;y1=temp;
        temp=x2;x2=y2;y2=temp;
    }
    x1+=y[button_pos][0];
    z1+=y[button_pos][1];
    y1+=y[button_pos][2];
    x2+=y[button_pos][3];
    z2+=y[button_pos][4];
    y2+=y[button_pos][5];
    char* s=new char[1000];
    if(ui->checkBox_is_x->isChecked())
    {
        int temp;
        temp=x1;x1=y1;y1=temp;
        temp=x2;x2=y2;y2=temp;
    }
    if(ui->com->isChecked()){
        sprintf(s,"/fill %d %d %d %d %d %d powered_rail",x1,z1,y1,x2,z2,y2);
    }
    else
        sprintf(s,"/fill %d %d %d %d %d %d usefulrailroads:highspeed_rail",x1,z1,y1,x2,z2,y2);
    ui->text_ok->setText(s);
    QClipboard *clipboard = QApplication::clipboard();
    clipboard->setText(s);
    ui->copyButton->setText("已复制");
    QEventLoop loop;//定义一个新的事件循环
    QTimer::singleShot(1000,&loop,SLOT(quit()));//创建单次定时器，槽函数为事件循环的退出函数
    loop.exec();//事件循环开始执行，程序会卡在这里，直到定时时间到，本循环被退出
    ui->copyButton->setText("复制");
}


void MainWindow::on_checkBox_checkStateChanged(const Qt::CheckState &arg1)
{
    if(arg1){
        y[0][5]=-100;
        y[1][5]=-100;
        y[2][5]=-100;
        y[3][5]=-100;
        y[4][5]=-100;
    }
    else{
        y[0][5]=100;
        y[1][5]=100;
        y[2][5]=100;
        y[3][5]=100;
        y[4][5]=100;
    }
}


void MainWindow::on_pushButton_clicked()
{
    ui->tx->setText("");
    ui->ty->setText("");
    ui->tz->setText("");
    ui->text_ok->setText("");
}


void MainWindow::on_checkBox_2_checkStateChanged(const Qt::CheckState &arg1)
{
    if(arg1)
    {
        this->setWindowFlags(windowFlags() | Qt::WindowStaysOnTopHint); // 添加置顶
        this->show();
    }
    else
    {
        this->setWindowFlags(windowFlags() & ~Qt::WindowStaysOnTopHint); // 移除置顶
        this->show();
    }
}

