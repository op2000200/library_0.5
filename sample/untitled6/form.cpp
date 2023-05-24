#include "form.h"
#include "ui_form.h"

Form::Form(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Form)
{
    ui->setupUi(this);
    //emit signal();
}

Form::~Form()
{
    delete ui;
}

void Form::on_pushButton_clicked()
{
    QStringList a = {"1", "2"};
    emit signal(a);
}

