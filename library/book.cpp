#include "book.h"
#include "qdatetime.h"
#include "qregularexpression.h"
#include "ui_book.h"
#include <QMouseEvent>
#include <QFile>


QString Curpath4 = "C:\\Git\\Library05\\library_0.5\\library\\resourses\\DataBase\\shared\\books"+ QDate::currentDate().toString().replace(QRegularExpression("[ ]"), "_")+"_"+QTime::currentTime().toString().replace(QRegularExpression("[:]"), "_")+".txt";
QFile file6("C:\\Git\\Library05\\library_0.5\\library\\resourses\\DataBase\\shared\\books.txt");

QFile file7(Curpath4);

book::book(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::book)
{
    ui->setupUi(this);
    this->setWindowFlag(Qt::WindowCloseButtonHint, false);
    this->setWindowFlag(Qt::FramelessWindowHint);
    ui->plainTextEdit->setReadOnly(1);

    file6.open(QIODevice::ReadOnly | QIODevice::Text);
    file7.open(QIODevice::ReadWrite | QIODevice::Text);
    QString q = file6.readLine();
    int c = q.toInt();
    QStringList *a = new QStringList[c];
    QString b;
    for (int j = 0; j < c; j++)
    {
        b = file6.readLine();
        a[j] = b.split(" ");
    }
    QTextStream writeStream(&file7);
    QString buf, buff;
    writeStream << c;
    for (int i = 0; i < c; i++)
    {

        buf = a[i].join(" ");
        buf.chop(1);
        //qDebug() << buf;

        //buf = "hell";
        //qDebug() << buff;
        //file1.write(buf.toUtf8());
        writeStream << "\n" << buf;
        buf = ""; buff = "";
    }

    delete[] a;
    file6.seek(0);
    file6.close();
    file7.flush();
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
    file7.seek(0);
    QString q = file7.readLine();
    int c = q.toInt();
    QStringList *a = new QStringList[c];
    QString b;
    for (int j = 0; j < c; j++)
    {
        b = file7.readLine();
        a[j] = b.split(" ");
    }
    for (int i = 0; i < c; i++)
    {
        if (a[i][0].toInt() == ID)
        {
            ui->label_7->setText(a[i][1].replace(QRegularExpression("[_]"), " "));
            ui->label_8->setText(a[i][2].replace(QRegularExpression("[_]"), " "));
            ui->label_9->setText(a[i][3].replace(QRegularExpression("[_]"), " "));
            ui->label_10->setText(a[i][4].replace(QRegularExpression("[_]"), " "));
            ui->label_11->setText(a[i][5].replace(QRegularExpression("[_]"), " "));
            ui->plainTextEdit->setPlainText(a[i][6].replace(QRegularExpression("[_]"), " "));
        }
    }

}

