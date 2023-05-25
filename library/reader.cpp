#include "reader.h"
#include "ui_reader.h"
#include <QPicture>
#include <QImage>
#include <QPainter>
#include <QPainterPath>
#include <QGraphicsScene>
#include <QGraphicsView>


reader::reader(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::reader)
{
    ui->setupUi(this);
    //QImage nnn("C:\\library\\resourses\\avaholder.png");

    //создать стартовую последовать
    //ui->label->setPixmap(reader::GetNew((nnn)));
    //ui->tableWidget->setRowCount(8);
    ui->tableWidget_4->setColumnCount(5);
    QStringList a = { "Название", "Дата выдачи", "Срок конца аренды", "Оставшееся количество дней", "Штраф"};
    ui->tableWidget_4->setHorizontalHeaderLabels(a);
    ui->tableWidget_4->horizontalHeader()->setSortIndicatorShown(true);
    ui->tableWidget_4->setSortingEnabled(1);
    ui->tableWidget_4->horizontalHeader()->resizeSection(0,400);
    ui->tableWidget_4->horizontalHeader()->resizeSection(1,200);
    ui->tableWidget_4->horizontalHeader()->resizeSection(2,280);
    ui->tableWidget_4->horizontalHeader()->resizeSection(3,280);
    ui->tableWidget_4->horizontalHeader()->resizeSection(4,90);
    a = {"Название", "Дата выдачи", "Срок конца аренды"};
    //ui->tableWidget_2->setRowCount(20);
    ui->tableWidget_2->setColumnCount(3);
    ui->tableWidget_2->setHorizontalHeaderLabels(a);
    ui->tableWidget_2->horizontalHeader()->setSortIndicatorShown(true);
    ui->tableWidget_2->setSortingEnabled(1);
    ui->tableWidget_2->horizontalHeader()->resizeSection(0,410);
    ui->tableWidget_2->horizontalHeader()->resizeSection(1,410);
    ui->tableWidget_2->horizontalHeader()->resizeSection(2,410);

}

reader::~reader()
{
    delete ui;
}

void reader::on_toolButton_clicked()
{
    QWidget::close();
}


void reader::on_toolButton_2_clicked()
{
    QWidget::showMinimized();
}

QPixmap reader::GetNew(QImage& img)
{
    QImage imageOut(400, 400, QImage::Format_ARGB32_Premultiplied);
    imageOut.fill(QColor(217, 217, 217));

    QPainterPath path;
    path.addEllipse(0,0,400, 400);

    QPainter painter(&imageOut);
    painter.setClipPath(path);
    painter.drawImage(0,0,img);

    return QPixmap::fromImage(imageOut);

}

void reader::readData(int ID)
{
    ui->label_14->setText(QString::number(ID));
}



void reader::on_toolButton_3_clicked()
{
    emit exiting();
    this->destroy();
}

