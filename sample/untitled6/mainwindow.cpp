#include "mainwindow.h"
#include "qregularexpression.h"
#include "ui_mainwindow.h"
#include "QFile"
#include "QRegularExpression"
#include <QTime>
#include <QDate>

QString Curpath = "C:\\sample\\books"+ QDate::currentDate().toString().replace(QRegularExpression("[ ]"), "_")+"_"+QTime::currentTime().toString().replace(QRegularExpression("[:]"), "_")+".txt";
QFile file("C:\\sample\\books.txt");
QFile file1(Curpath);
bool flag = 0;
QStringList abc;

void delay(int n)
{
    QTime dieTime= QTime::currentTime().addSecs(n);
    while (QTime::currentTime() < dieTime)
        QCoreApplication::processEvents(QEventLoop::AllEvents, 100);
}

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    //ui->textBrowser->append(Curpath);
    file.open(QIODevice::ReadOnly);
    file1.open(QIODevice::ReadWrite | QIODevice::Text);
    QString q = file.readLine();
    int c = q.toInt();
    QStringList *a = new QStringList[c];
    QString b;
    for (int j = 0; j < c; j++)
    {
        b = file.readLine();
        a[j] = b.split(" ");
    }
    QTextStream writeStream(&file1);
    QString buf;
    writeStream << c << "\n";
    for (int i = 0; i < c; i++)
    {
        for (int j = 0; j < a[i].size(); j++)
        {
            buf+=a[i][j].replace(QRegularExpression("[ ]+"), "_") + " ";
        }
        writeStream << buf;
        buf = "";
    }

    delete[] a;
    file.seek(0);
    file1.flush();

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::refresh(QFile& f)
{
    QString q = f.readLine();
    int c = q.toInt();
    QStringList *a = new QStringList[c];
    QString b;
    for (int j = 0; j < c; j++)
    {
        b = f.readLine();
        a[j] = b.split(" ");
        for (int i = 0; i < a[j].size(); i++)
        {
            ui->textBrowser->append(a[j][i].replace(QRegularExpression("[_]"), " "));
        }
    }
    delete[] a;
    f.seek(0);
}

void MainWindow::on_pushButton_clicked()
{
    ui->textBrowser->clear();
    file1.seek(0);
    refresh(file1);
}


void MainWindow::on_pushButton_2_clicked()
{
    m = new Form;
    connect(m, &Form::signal, this, &MainWindow::slot);
    m->show();
    while(flag != 1)
    {
        delay(3);
    }
    ui->textBrowser->append("done");
    flag = 0;
    QTextStream writeStream(&file1);
    QString buf = "\n";
    //writeStream << c << "\n";
    for (int j = 0; j < abc.size(); j++)
    {
        buf+=abc[j].replace(QRegularExpression("[ ]"), "_") + " ";
    }
    file1.close();
    file1.open(QIODevice::Append);
    writeStream << buf;
    ui->textBrowser->append(buf);
    buf = "";
    file1.flush();
    file1.close();
    file1.open(QIODevice::ReadWrite | QIODevice::Text);
    file1.seek(0);
    buf = file1.readLine();
    file1.seek(0);
    writeStream << QString::number(buf.toInt()+1);
    file1.seek(0);

}

void MainWindow::slot(QStringList in)
{
    flag = 1;
    abc = in;
    //ui->textBrowser->append("1");
}


void MainWindow::on_pushButton_4_clicked()
{

    this->close();
}

