/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.10.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QPushButton *b1;
    QPushButton *b2;
    QPushButton *b3;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *b4;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *b5;
    QLabel *xyz_label;
    QWidget *horizontalLayoutWidget_4;
    QHBoxLayout *horizontalLayout_4;
    QTextEdit *tx;
    QTextEdit *tz;
    QTextEdit *ty;
    QLabel *l1;
    QCheckBox *checkBox_is_x;
    QLabel *label;
    QCheckBox *checkBox;
    QPushButton *pushButton;
    QPushButton *copyButton;
    QTextEdit *text_ok;
    QCheckBox *air_one;
    QCheckBox *com;
    QCheckBox *checkBox_2;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(435, 338);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        horizontalLayoutWidget = new QWidget(centralwidget);
        horizontalLayoutWidget->setObjectName("horizontalLayoutWidget");
        horizontalLayoutWidget->setGeometry(QRect(20, 140, 405, 28));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        b1 = new QPushButton(horizontalLayoutWidget);
        b1->setObjectName("b1");

        horizontalLayout->addWidget(b1);

        b2 = new QPushButton(horizontalLayoutWidget);
        b2->setObjectName("b2");

        horizontalLayout->addWidget(b2);

        b3 = new QPushButton(horizontalLayoutWidget);
        b3->setObjectName("b3");

        horizontalLayout->addWidget(b3);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        b4 = new QPushButton(horizontalLayoutWidget);
        b4->setObjectName("b4");

        horizontalLayout_3->addWidget(b4);


        horizontalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        b5 = new QPushButton(horizontalLayoutWidget);
        b5->setObjectName("b5");

        horizontalLayout_2->addWidget(b5);


        horizontalLayout->addLayout(horizontalLayout_2);

        xyz_label = new QLabel(centralwidget);
        xyz_label->setObjectName("xyz_label");
        xyz_label->setGeometry(QRect(10, 30, 91, 61));
        horizontalLayoutWidget_4 = new QWidget(centralwidget);
        horizontalLayoutWidget_4->setObjectName("horizontalLayoutWidget_4");
        horizontalLayoutWidget_4->setGeometry(QRect(110, 30, 301, 80));
        horizontalLayout_4 = new QHBoxLayout(horizontalLayoutWidget_4);
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        tx = new QTextEdit(horizontalLayoutWidget_4);
        tx->setObjectName("tx");

        horizontalLayout_4->addWidget(tx);

        tz = new QTextEdit(horizontalLayoutWidget_4);
        tz->setObjectName("tz");

        horizontalLayout_4->addWidget(tz);

        ty = new QTextEdit(horizontalLayoutWidget_4);
        ty->setObjectName("ty");

        horizontalLayout_4->addWidget(ty);

        l1 = new QLabel(centralwidget);
        l1->setObjectName("l1");
        l1->setGeometry(QRect(10, 210, 54, 16));
        checkBox_is_x = new QCheckBox(centralwidget);
        checkBox_is_x->setObjectName("checkBox_is_x");
        checkBox_is_x->setGeometry(QRect(20, 120, 111, 20));
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(110, 10, 301, 16));
        checkBox = new QCheckBox(centralwidget);
        checkBox->setObjectName("checkBox");
        checkBox->setGeometry(QRect(130, 120, 79, 20));
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(0, 0, 75, 24));
        copyButton = new QPushButton(centralwidget);
        copyButton->setObjectName("copyButton");
        copyButton->setGeometry(QRect(330, 190, 75, 91));
        text_ok = new QTextEdit(centralwidget);
        text_ok->setObjectName("text_ok");
        text_ok->setGeometry(QRect(20, 190, 291, 91));
        text_ok->setReadOnly(true);
        air_one = new QCheckBox(centralwidget);
        air_one->setObjectName("air_one");
        air_one->setGeometry(QRect(200, 120, 91, 20));
        com = new QCheckBox(centralwidget);
        com->setObjectName("com");
        com->setGeometry(QRect(290, 120, 121, 20));
        checkBox_2 = new QCheckBox(centralwidget);
        checkBox_2->setObjectName("checkBox_2");
        checkBox_2->setGeometry(QRect(330, 300, 79, 20));
        MainWindow->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MC\351\200\240\345\234\260\351\223\201\346\214\207\344\273\244\345\267\245\345\205\267", nullptr));
        b1->setText(QCoreApplication::translate("MainWindow", "\345\261\217\351\232\234", nullptr));
        b2->setText(QCoreApplication::translate("MainWindow", "\347\272\242\347\237\263\345\235\227", nullptr));
        b3->setText(QCoreApplication::translate("MainWindow", "\347\251\272\346\260\224", nullptr));
        b4->setText(QCoreApplication::translate("MainWindow", "\347\201\257", nullptr));
        b5->setText(QCoreApplication::translate("MainWindow", "\351\223\201\350\275\250", nullptr));
        xyz_label->setText(QCoreApplication::translate("MainWindow", "\350\257\267\350\276\223\345\205\245\344\275\240\347\232\204\345\235\220\346\240\207", nullptr));
        l1->setText(QString());
        checkBox_is_x->setText(QCoreApplication::translate("MainWindow", "\344\275\277\347\224\250X\345\235\220\346\240\207\345\274\200\346\214\226", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "          x                             z                           y", nullptr));
        checkBox->setText(QCoreApplication::translate("MainWindow", "\346\214\226 -100", nullptr));
        pushButton->setText(QCoreApplication::translate("MainWindow", "\346\270\205\347\251\272\346\226\207\346\234\254", nullptr));
        copyButton->setText(QCoreApplication::translate("MainWindow", "\345\244\215\345\210\266", nullptr));
        air_one->setText(QCoreApplication::translate("MainWindow", "\344\273\205\346\214\2262\346\240\274\347\251\272\346\260\224", nullptr));
        com->setText(QCoreApplication::translate("MainWindow", "\345\205\274\345\256\271\346\250\241\345\274\217(\346\227\240mod)", nullptr));
        checkBox_2->setText(QCoreApplication::translate("MainWindow", "\347\252\227\345\217\243\347\275\256\351\241\266", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
