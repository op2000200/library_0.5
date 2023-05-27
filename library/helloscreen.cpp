#include "helloscreen.h"
#include "qregularexpression.h"
#include "ui_helloscreen.h"
#include "QTime"
#include "directormainwindow.h"
#include "bibli.h"
#include "reader.h"
#include <QFile>
#include <QDir>


QString Curpath1 = "C:\\Git\\Library05\\library_0.5\\library\\resourses\\DataBase\\login\\login"+ QDate::currentDate().toString().replace(QRegularExpression("[ ]"), "_")+"_"+QTime::currentTime().toString().replace(QRegularExpression("[:]"), "_")+".txt";
QFile file2("C:\\Git\\Library05\\library_0.5\\library\\resourses\\DataBase\\login\\login.txt");
QFile file3(Curpath1);
//bool flag = 0;
//QStringList abc;



HelloScreen::HelloScreen(QWidget *parent):
    QMainWindow(parent),
    ui(new Ui::HelloScreen)
{
    ui->setupUi(this);
    //QString path = "C:\\Git\\Library05\\library_0.5\\library\\resourses\\DataBase\\user\\5";
    //QDir().mkdir(path);
    StartingSequence();
}

void HelloScreen::StartingSequence()
{

    /*
    connect(m, &Form::signal, this, &MainWindow::slot);
        if (a == 1)
    {
        DMW.showFullScreen();
    }
    if (a == 2)
    {
        rdr.showFullScreen();
    }
    if (a == 3)
    {
        bbl.showFullScreen();
    }
    */

    ui->label_4->setVisible(0);
    ui->label_5->setVisible(0);
    file2.open(QIODevice::ReadOnly);
    file3.open(QIODevice::ReadWrite | QIODevice::Text);
    QString q = file2.readLine();
    int c = q.toInt();
    QStringList *a = new QStringList[c];
    QString b;
    for (int j = 0; j < c; j++)
    {
        b = file2.readLine();
        a[j] = b.split(" ");
    }
    QTextStream writeStream(&file3);
    QString buf;
    writeStream << c << "\n";
    for (int i = 0; i < c; i++)
    {
        buf = a[i].join(" ");
        buf.chop(1);
        writeStream << buf;
        buf = "";
    }
    writeStream << "\n";

    delete[] a;
    file2.seek(0);
    file2.close();
    file3.flush();

    /*
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
    file.seek(0);
    file.close();
    file1.flush();
    */

}

HelloScreen::~HelloScreen()
{
    delete ui;
}

void HelloScreen::on_toolButton_clicked()
{
    QWidget::close();
}

int loginCheck (QString login, QString password)
{
    file3.open(QIODevice::ReadOnly);
    QString q = file3.readLine();
    int c = q.toInt();
    QStringList *a = new QStringList[c];
    QString b;
    for (int j = 0; j < c; j++)
    {
        b = file3.readLine();
        a[j] = b.split(" ");
    }
    for (int i = 0; i < c; i++)
    {
        for (int j = 0; j < a[j].size(); j++)
        {
            if (login == a[j][1] and password == a[j][2])
            {
                //file2.close();
                return a[j][3].toInt();
            }
        }
    }
    //file2.close();
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
    DMW = new DirectorMainWindow;
    rdr = new reader;
    bbl = new bibli;
    connect(this, &HelloScreen::send1, DMW, &DirectorMainWindow::readData);
    connect(this, &HelloScreen::send2, rdr, &reader::readData);
    connect(this, &HelloScreen::send3, bbl, &bibli::readData);

    connect(DMW, &DirectorMainWindow::exiting, this, &HelloScreen::BTHS);
    connect(rdr, &reader::exiting, this, &HelloScreen::BTHS);
    connect(bbl, &bibli::exiting, this, &HelloScreen::BTHS);
    int a1;
    QString login = ui->lineEdit->text(), password = ui->lineEdit_2->text();
    file2.open(QIODevice::ReadOnly);
    QString q = file2.readLine();
    int c = q.toInt();
    QStringList *a = new QStringList[c];
    QString b;
    for (int j = 0; j < c; j++)
    {
        b = file2.readLine();
        a[j] = b.split(" ");
    }
    for (int i = 0; i < c; i++)
    {
        for (int j = 0; j < a[j].size()+1; j++)
        {
            if (login == a[j][1] and password == a[j][2])
            {
                a1 = a[j][3].toInt();
                ui->label_4->setVisible(0);
                ui->label_5->setVisible(1);
                delay(1);
                ui->label_5->setVisible(0);
                if (a1 == 1)
                {
                    DMW->showFullScreen();
                    emit send1(a[j][0].toInt());
                }
                if (a1 == 2)
                {
                    rdr->showFullScreen();
                    emit send2(a[j][0].toInt());
                }
                if (a1 == 3)
                {
                    bbl->showFullScreen();
                    emit send3(a[j][0].toInt());
                }
                this->hide();
                goto endgame;
            }
        }
        ui->label_4->setVisible(1);
        ui->label_5->setVisible(0);
        ui->lineEdit_2->setText("");
        delay(2);
        ui->label_4->setVisible(0);
        goto endgame;
    }
    endgame:
    file2.seek(0);
    delete[] a;
}





void HelloScreen::on_lineEdit_returnPressed()
{
    ui->lineEdit_2->setFocus();
}


void HelloScreen::on_lineEdit_2_returnPressed()
{
    ui->pushButton->click();
}

void HelloScreen::BTHS()
{
    this->showFullScreen();
    ui->lineEdit->clear();
    ui->lineEdit_2->clear();
    ui->label->setFocus();
    StartingSequence();
}

