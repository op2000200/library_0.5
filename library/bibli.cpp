#include "bibli.h"
#include "ui_bibli.h"
#include <QPicture>
#include <QImage>
#include <QPainter>
#include <QPainterPath>
#include <QGraphicsScene>
#include <QGraphicsView>
#include <QFile>
#include <QDate>
#include <QDateTime>

int userID3;
bool pr1 = 0, pr2 = 0, pr3 = 0, vd1 = 0, vd2 = 0,vd3 = 0, rg1 = 0;
QString Curpath6 = "C:\\Git\\Library05\\library_0.5\\library\\resourses\\DataBase\\shared\\books"+ QDate::currentDate().toString().replace(QRegularExpression("[ ]"), "_")+"_"+QTime::currentTime().toString().replace(QRegularExpression("[:]"), "_")+".txt";
QFile file10("C:\\Git\\Library05\\library_0.5\\library\\resourses\\DataBase\\shared\\books.txt");

QFile file11(Curpath6);

bibli::bibli(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::bibli)
{
    ui->setupUi(this);
    ui->label_17->hide();
    ui->checkBox_3->hide();
    QString aa = "border-radius: 200px; background-color: rgb(" + QString::number(rand()%255) + "," + QString::number(rand()%255) + "," + QString::number(rand()%255) + ");";
    ui->label->setStyleSheet(aa);
    ui->pushButton_5->setEnabled(0);
    ui->pushButton_6->setEnabled(0);
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


void bibli::on_pushButton_7_clicked()
{
    ui->stackedWidget_2->setCurrentIndex(0);
}


void bibli::on_checkBox_4_clicked()
{
    if (ui->checkBox_4->isChecked())
    {
        ui->pushButton_6->setEnabled(1);
    }
    else
    {
        ui->pushButton_6->setEnabled(0);
    }
}


void bibli::on_checkBox_3_clicked()
{
    if (pr1 == 1 and pr2 == 1 and (ui->checkBox_3->isChecked() == 1 or pr3 == 0))
    {
        ui->pushButton_5->setEnabled(1);
    }
    else
    {
        ui->pushButton_5->setEnabled(0);
    }
}

void bibli::refreshFile()
{
    file10.open(QIODevice::ReadOnly);
    file11.open(QIODevice::ReadWrite | QIODevice::Text);
    QString q = file10.readLine();
    int c = q.toInt();
    QStringList *a = new QStringList[c];
    QString b;
    for (int j = 0; j < c; j++)
    {
        b = file10.readLine();
        a[j] = b.split(" ");
    }
    QTextStream writeStream(&file11);
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
    file10.seek(0);
    file10.close();
    file11.flush();
}

bool bibli::loginExist(QString login)
{
    QFile file("C:\\Git\\Library05\\library_0.5\\library\\resourses\\DataBase\\login\\login.txt");
    file.open(QIODevice::ReadOnly);
    QString q = file.readLine();
    int c = q.toInt();
    QStringList *a = new QStringList[c];
    QString b;
    for (int j = 0; j < c; j++)
    {
        b = file.readLine();
        a[j] = b.split(" ");
    }
    for (int j = 0; j < c; j++)
    {
        if (a[j][1] == login)
        {
            return 1;
        }
    }


    file.close();
    return 0;
}

bool bibli::bookExist(QString login,QString ID)
{
    QString format = "dd.MM.yyyy";
    QFile file("C:\\Git\\Library05\\library_0.5\\library\\resourses\\DataBase\\login\\login.txt");
    file.open(QIODevice::ReadOnly);
    QString q = file.readLine();
    int c = q.toInt();
    QStringList *a = new QStringList[c];
    QString b;
    QString id;
    for (int j = 0; j < c; j++)
    {
        b = file.readLine();
        a[j] = b.split(" ");
    }
    for (int j = 0; j < c; j++)
    {
        if (a[j][1] == login)
        {
            id = a[j][0];
        }
    }
    file.close();
    QFile file1("C:\\Git\\Library05\\library_0.5\\library\\resourses\\DataBase\\user\\"+id+"\\bookfornow.txt");
    //"C:\\Git\\Library05\\library_0.5\\library\\resourses\\DataBase\\user\\3\\bookfornow.txt";


    file1.open(QIODevice::ReadOnly | QIODevice::Text);


    q = file1.readLine();
    c = q.toInt();
    a = new QStringList[c];
    for (int j = 0; j < c; j++)
    {
        b = file1.readLine();
        a[j] = b.split(" ");
    }
    for (int j = 0; j < c; j++)
    {
        if (a[j][0] == ID)
        {
            QDateTime dt;
            dt = QDateTime::fromString(a[j][1], format);
            qDebug() << dt;
            if (a[j][2].toInt() < dt.daysTo(QDateTime::currentDateTime()))
            {
                pr3 = 1;
            }
            else
            {
                pr3 = 0;
            }

            return 1;
        }
    }
    file1.close();


    return 0;
}

bool bibli::bookExist(QString ID)
{
    QFile file("C:\\Git\\Library05\\library_0.5\\library\\resourses\\DataBase\\shared\\book.txt");
    file.open(QIODevice::ReadOnly);
    QString q = file.readLine();
    int c = q.toInt();
    QStringList *a = new QStringList[c];
    QString b;
    QString id;
    for (int j = 0; j < c; j++)
    {
        b = file.readLine();
        a[j] = b.split(" ");
    }
    for (int j = 0; j < c; j++)
    {
        if (a[j][0] == ID)
        {
            return 1;
        }
    }

    return 0;
}

void bibli::on_lineEdit_returnPressed()
{
    pr1 = loginExist(ui->lineEdit->text());
    if (pr1 == 1)
    {
        QString aa = "background-color: green;border-radius: 15px;";
        ui->label_18->setStyleSheet(aa);
    }
    else
    {
        QString aa = "background-color: red;border-radius: 15px;";
        ui->label_18->setStyleSheet(aa);
    }
    if (pr1 == 1 and pr2 == 1 and (ui->checkBox_3->isChecked() == 1 or pr3 == 0))
    {
        ui->pushButton_5->setEnabled(1);
    }
    else
    {
        ui->pushButton_5->setEnabled(0);
    }
    ui->label->setFocus();
    if (pr3 == 1)
    {
        ui->label_17->show();
        ui->checkBox_3->show();
    }
    else
    {
        ui->label_17->hide();
        ui->checkBox_3->hide();
        ui->checkBox_3->setCheckState(Qt::Unchecked);
    }
}


void bibli::on_lineEdit_2_returnPressed()
{
    pr2 = bookExist(ui->lineEdit->text(),ui->lineEdit_2->text());
    if (pr2 == 1)
    {
        QString aa = "background-color: green; border-radius: 15px;";
        ui->label_20->setStyleSheet(aa);
    }
    else
    {
        QString aa = "background-color: red;border-radius: 15px;";
        ui->label_20->setStyleSheet(aa);
    }
    if (pr1 == 1 and pr2 == 1 and (ui->checkBox_3->isChecked() == 1 or pr3 == 0))
    {
        ui->pushButton_5->setEnabled(1);
    }
    else
    {
        ui->pushButton_5->setEnabled(0);
    }
    ui->label->setFocus();
    if (pr3 == 1)
    {
        ui->label_17->show();
        ui->checkBox_3->show();
    }
    else
    {
        ui->label_17->hide();
        ui->checkBox_3->hide();
        ui->checkBox_3->setCheckState(Qt::Unchecked);
    }

}


void bibli::on_pushButton_5_clicked()
{
    QFile file("C:\\Git\\Library05\\library_0.5\\library\\resourses\\DataBase\\login\\login.txt");
    file.open(QIODevice::ReadOnly);
    QString q = file.readLine();
    int c = q.toInt();
    QStringList *a = new QStringList[c];
    QString b;
    QString id;
    for (int j = 0; j < c; j++)
    {
        b = file.readLine();
        a[j] = b.split(" ");
    }
    for (int j = 0; j < c; j++)
    {
        if (a[j][1] == ui->lineEdit->text())
        {
            id = a[j][0];
        }
    }
    file.close();
    QFile file1("C:\\Git\\Library05\\library_0.5\\library\\resourses\\DataBase\\user\\"+id+"\\bookfornow.txt");
    file1.open(QIODevice::ReadWrite | QIODevice::Text);

    QString bufBook;
    int bufID;

    q = file1.readLine();
    c = q.toInt();
    a = new QStringList[c];
    for (int j = 0; j < c; j++)
    {
        b = file1.readLine();
        a[j] = b.split(" ");
    }

    for (int j = 0; j < c; j++)
    {
        if (a[j][0] == ui->lineEdit_2->text())
        {
            bufBook = a[j].join(" ");
            bufID = j;
        }
    }

    file1.seek(0);
    file1.write(QString::number(c-1).toUtf8());
    for (int j = 0; j < c; j++)
    {
        if (j != bufID)
        {
            file1.write("\n"+a[j].join(" ").toUtf8());
        }
    }
    file1.write("\n");









    QFile file2("C:\\Git\\Library05\\library_0.5\\library\\resourses\\DataBase\\user\\"+id+"\\history.txt");
    file2.open(QIODevice::ReadWrite | QIODevice::Text);

    q = file2.readLine();
    c = q.toInt();
    a = new QStringList[c];
    for (int j = 0; j < c; j++)
    {
        b = file2.readLine();
        a[j] = b.split(" ");
    }

    file2.seek(0);
    file2.write(QString::number(c+1).toUtf8());
    for (int j = 0; j < c; j++)
    {
        file2.write("\n"+a[j].join(" ").toUtf8());
    }
    file2.write("\n"+bufBook.toUtf8()+"\n");






    file1.close();
    file2.close();
}


void bibli::on_lineEdit_4_returnPressed()
{
    vd1 = loginExist(ui->lineEdit_4->text());
    if (vd1 == 1)
    {
        QString aa = "background-color: green;border-radius: 15px;";
        ui->label_22->setStyleSheet(aa);
    }
    else
    {
        QString aa = "background-color: red;border-radius: 15px;";
        ui->label_22->setStyleSheet(aa);
    }
    if (vd1 == 1 and vd2 == 1 and vd3 == 0)
    {
        ui->pushButton_6->setEnabled(1);
    }
    else
    {
        ui->pushButton_6->setEnabled(0);
    }
    ui->label->setFocus();
}


void bibli::on_lineEdit_3_returnPressed()
{
    vd2 = bookExist(ui->lineEdit_3->text());
    if (vd2 == 1)
    {
        QString aa = "background-color: green;border-radius: 15px;";
        ui->label_22->setStyleSheet(aa);
    }
    else
    {
        QString aa = "background-color: red;border-radius: 15px;";
        ui->label_22->setStyleSheet(aa);
    }
    if (vd1 == 1 and vd2 == 1 and vd3 == 0)
    {
        ui->pushButton_6->setEnabled(1);
    }
    else
    {
        ui->pushButton_6->setEnabled(0);
    }
    ui->label->setFocus();
}


void bibli::on_lineEdit_5_returnPressed()
{
    QFile file("C:\\Git\\Library05\\library_0.5\\library\\resourses\\DataBase\\shared\\book.txt");
    file.open(QIODevice::ReadOnly);
    QString q = file.readLine();
    int c = q.toInt();
    QStringList *a = new QStringList[c];
    QString b;
    QString id;
    for (int j = 0; j < c; j++)
    {
        b = file.readLine();
        a[j] = b.split(" ");
    }
    for (int j = 0; j < c; j++)
    {
        if (a[j][1] == ui->lineEdit->text())
        {
            id = a[j][0];
        }
    }
    file.close();
}

