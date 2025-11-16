#include "mainwindow.h"

#include <QApplication>
#include <QClipboard>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.setFixedSize(435, 338);
    w.show();
    return a.exec();
}
