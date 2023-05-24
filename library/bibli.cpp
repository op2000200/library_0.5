#include "bibli.h"
#include "ui_bibli.h"
#include <QPicture>
#include <QImage>
#include <QPainter>
#include <QPainterPath>
#include <QGraphicsScene>
#include <QGraphicsView>

bibli::bibli(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::bibli)
{
    ui->setupUi(this);
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
    ui->label_14->setText(QString::number(ID));
}

void bibli::on_toolButton_3_clicked()
{
    emit exiting();
    this->destroy();
}

