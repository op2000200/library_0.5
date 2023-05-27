#include "directormainwindow.h"
#include "ui_directormainwindow.h"
#include <QPicture>
#include <QImage>
#include <QPainter>
#include <QPainterPath>
#include <QGraphicsScene>
#include <QGraphicsView>
#include <QMainWindow>
#include <QTime>
#include <QThread>
#include <iostream>
#include <QFile>
#include <QDateTime>
//#include <main.h>
//#include
//#include <main.cpp>


QString Curpath = "C:\\Git\\Library05\\library_0.5\\library\\resourses\\DataBase\\shared\\books"+ QDate::currentDate().toString().replace(QRegularExpression("[ ]"), "_")+"_"+QTime::currentTime().toString().replace(QRegularExpression("[:]"), "_")+".txt";
QFile file("C:\\Git\\Library05\\library_0.5\\library\\resourses\\DataBase\\shared\\books.txt");

QFile file1(Curpath);
int userID1;
QDateTime d_m_w_launchDate = QDateTime::currentDateTime();
//bool flag = 0;
//QStringList abc;


DirectorMainWindow::DirectorMainWindow(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::DirectorMainWindow)
{

    ui->setupUi(this);
    //QImage nnn("C:\\library\\resourses\\avaholder.png");
    //ui->label->setPixmap(GetNew((nnn)));
    srand(time(0));
    QString aa = "border-radius: 200px; background-color: rgb(" + QString::number(rand()%255) + "," + QString::number(rand()%255) + "," + QString::number(rand()%255) + ");";
    ui->label->setStyleSheet(aa);
    ui->DATA->setText(QString::number( QDate::currentDate().day()));

    ui->tableWidget->setHidden(1);
    ui->tableWidget_2->setHidden(1);
    ui->tableWidget_3->setHidden(1);
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

QPixmap  DirectorMainWindow::GetNew(QImage& img)
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

void DirectorMainWindow::refresh(QFile& f)
{
    f.seek(0);
    QTableWidgetItem *qq;
    qq = new QTableWidgetItem();

    QString q = f.readLine();
    int c = q.toInt();


    ui->tableWidget->setRowCount(c);
    ui->tableWidget->verticalHeader()->hide();
    ui->tableWidget->setColumnCount(7);
    QStringList er = {"ID", "Название", "Автор", "Год выхода", "Цена в день", "Жанр", "Описание"};
    ui->tableWidget->setHorizontalHeaderLabels(er);
    ui->tableWidget->horizontalHeader()->resizeSection(1,10);
    ui->tableWidget->horizontalHeader()->resizeSection(1,200);
    ui->tableWidget->horizontalHeader()->resizeSection(2,200);
    ui->tableWidget->horizontalHeader()->resizeSection(3,150);
    ui->tableWidget->horizontalHeader()->resizeSection(4,150);
    ui->tableWidget->horizontalHeader()->resizeSection(5,190);
    ui->tableWidget->horizontalHeader()->resizeSection(6,290);

    QStringList *a = new QStringList[c];
    QString b;
    for (int j = 0; j < c; j++)
    {
        b = f.readLine();
        a[j] = b.split(" ");
        for (int i = 0; i < a[j].size(); i++)
        {
            qq = new QTableWidgetItem();
            qq->setData(Qt::DisplayRole, QVariant(a[j][i].replace(QRegularExpression("[_]"), " ")));
            ui->tableWidget->setItem(j,i,qq);
            //ui->textBrowser->append();
        }
    }
    delete[] a;
    for (int i = 0; i < 7; i++)
        ui->tableWidget->resizeRowToContents(i);
    f.seek(0);
}

void DirectorMainWindow::refreshtime()
{

        QTime time = QTime::currentTime();
    ui->TIME->setText(time.toString());
        QThread::sleep(1);

}


void DirectorMainWindow::on_pushButton_clicked()
{
    if (ui->tableWidget_2->isHidden())
        ui->tableWidget_2->show();
}


void DirectorMainWindow::on_pushButton_2_clicked()
{
    if (ui->tableWidget_3->isHidden())
        ui->tableWidget_3->show();
}


void DirectorMainWindow::on_pushButton_3_clicked()
{
    if (ui->tableWidget->isHidden())
        ui->tableWidget->show();
    //ui->textBrowser->clear();
    file1.seek(0);

    //ui->tableWidget->setRowCount(2);
    //QTableWidgetItem *qq;
    //qq = new QTableWidgetItem();
    //qq->setData(Qt::DisplayRole, QVariant("gfsdjh"));
    //ui->tableWidget->setItem(0,1,qq);
    refresh(file1);
}

void DirectorMainWindow::readData(int ID)
{
    ui->TIME->setText(QString::number(ID));
    userID1 = ID;
    QString inf = "C:\\Git\\Library05\\library_0.5\\library\\resourses\\DataBase\\user\\" + QString::number(userID1) + "\\info.txt";
    QFile info(inf);
    info.open(QIODevice::ReadOnly);
    inf = info.readLine();
    ui->label_14->setText(inf);
    info.close();
}



void DirectorMainWindow::on_toolButton_3_clicked()
{
    emit exiting();
    this->destroy();

}

void DirectorMainWindow::collectRegularUsers()
{
    ;
}

