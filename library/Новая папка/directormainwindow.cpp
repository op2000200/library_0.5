#include "directormainwindow.h"
#include "ui_directormainwindow.h"
#include <QPicture>
#include <QImage>
#include <QPainter>
#include <QPainterPath>
#include <QGraphicsScene>
#include <QGraphicsView>
#include <QMainWindow>>

QPixmap GetNew(QImage& img);

DirectorMainWindow::DirectorMainWindow(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::DirectorMainWindow)
{
    ui->setupUi(this);
    QImage nnn("D:/Users/Mine/Desktop/library/resourses/avaholder.png");
    ui->label->setPixmap(GetNew((nnn)));
}

DirectorMainWindow::~DirectorMainWindow()
{
    delete ui;
}

void DirectorMainWindow::on_toolButton_clicked()
{
    QWidget::close();
}


void DirectorMainWindow::on_toolButton_2_clicked()
{
    QWidget::showMinimized();
}

QPixmap GetNew(QImage& img)
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
