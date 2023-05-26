#include "bibli.h"
#include "ui_bibli.h"
#include <QPicture>
#include <QImage>
#include <QPainter>
#include <QPainterPath>
#include <QGraphicsScene>
#include <QGraphicsView>
#include <QFile>

int userID3;

bibli::bibli(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::bibli)
{
    ui->setupUi(this);
    QString aa = "border-radius: 200px; background-color: rgb(" + QString::number(rand()%255) + "," + QString::number(rand()%255) + "," + QString::number(rand()%255) + ");";
    ui->label->setStyleSheet(aa);
}

bibli::~bibli()
{
    delete ui;
}

void bibli::on_toolButton_2_clicked()
{
    QWidget::showMinimized();
}


void bibli::on_toolButton_clicked()
{
    QWidget::close();
}

void bibli::readData(int ID)
{
    userID3 = ID;
    QString inf = "C:\\Git\\Library05\\library_0.5\\library\\resourses\\DataBase\\user\\" + QString::number(userID3) + "\\info.txt";
    QFile info(inf);
    info.open(QIODevice::ReadOnly);
    inf = info.readLine();
    ui->label_14->setText(inf);
    info.close();
}

void bibli::on_toolButton_3_clicked()
{
    emit exiting();
    this->destroy();
}


void bibli::on_pushButton_3_clicked()
{
    ui->stackedWidget->setCurrentIndex(0);
}


void bibli::on_pushButton_4_clicked()
{
    ui->stackedWidget->setCurrentIndex(1);
}

