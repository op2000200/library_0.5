#include "helloscreen.h"
#include "qpainter.h"
#include "ui_helloscreen.h"
#include "QTime"
#include "directormainwindow.h"

HelloScreen::HelloScreen(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::HelloScreen)
{
    ui->setupUi(this);
    StartingSequence();
}

void HelloScreen::StartingSequence()
{
    ui->label_4->setVisible(0);
    ui->label_5->setVisible(0);
}

HelloScreen::~HelloScreen()
{
    delete ui;
}

void HelloScreen::on_toolButton_clicked()
{
    QWidget::close();
}

bool loginCheck (QString login, QString password)
{
    if (login == "admin")
        if (password == "admin")
            return 1;
    return 0;
}

void HelloScreen::on_toolButton_2_clicked()
{
    QWidget::showMinimized();
}

void delay(int n)
{
    QTime dieTime= QTime::currentTime().addSecs(n);
    while (QTime::currentTime() < dieTime)
        QCoreApplication::processEvents(QEventLoop::AllEvents, 100);
}

void HelloScreen::on_pushButton_clicked()
{
    if (loginCheck(ui->lineEdit->text(),ui->lineEdit_2->text()) == 0)
    {
        ui->label_4->setVisible(1);
        ui->label_5->setVisible(0);
        ui->lineEdit_2->setText("");
        delay(10);
        ui->label_4->setVisible(0);
    }
    else
    {
        ui->label_4->setVisible(0);
        ui->label_5->setVisible(1);
        delay(1);
        ui->label_5->setVisible(0);
        DMW.show/*FullScreen*/();
        QWidget::close();
    }
}




