#include "book.h"
#include "ui_book.h"
#include <QMouseEvent>

book::book(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::book)
{
    ui->setupUi(this);
    this->setWindowFlag(Qt::WindowCloseButtonHint, false);
    this->setWindowFlag(Qt::FramelessWindowHint);
}

book::~book()
{
    delete ui;
}

void book::on_toolButton_clicked()
{
    this->destroy();
}

void book::openBook(int ID)
{
    ui->label->setText(QString::number(ID));
}

