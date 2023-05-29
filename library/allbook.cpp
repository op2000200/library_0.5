#include "allbook.h"
#include "qdatetime.h"
#include "ui_allbook.h"
#include <qfile.h>
#include "book.h"

QString Curpath5 = "C:\\Git\\Library05\\library_0.5\\library\\resourses\\DataBase\\shared\\books"+ QDate::currentDate().toString().replace(QRegularExpression("[ ]"), "_")+"_"+QTime::currentTime().toString().replace(QRegularExpression("[:]"), "_")+".txt";
QFile file8("C:\\Git\\Library05\\library_0.5\\library\\resourses\\DataBase\\shared\\books.txt");

QFile file9(Curpath5);

allbook::allbook(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::allbook)
{
    ui->setupUi(this);
    this->setWindowFlag(Qt::FramelessWindowHint);
    file8.open(QIODevice::ReadOnly | QIODevice::Text);
    file9.open(QIODevice::ReadWrite | QIODevice::Text);
    QString q = file8.readLine();
    int c = q.toInt();
    QStringList *a = new QStringList[c];
    QString b;
    for (int j = 0; j < c; j++)
    {
        b = file8.readLine();
        a[j] = b.split(" ");
    }
    QTextStream writeStream(&file9);
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
    file8.seek(0);
    file8.close();
    file9.flush();
}

allbook::~allbook()
{
    delete ui;
}

void allbook::refresh(QFile& f)
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
    for (int i = 0; i < c; i++)
        ui->tableWidget->resizeRowToContents(i);
    f.seek(0);
}

void allbook::on_toolButton_clicked()
{
    this->destroy();
}


void allbook::on_pushButton_clicked()
{
    refresh(file9);
}


void allbook::on_tableWidget_cellDoubleClicked(int row, int column)
{
    bk = new book;
    connect(this, &allbook::sendbook, bk, &book::openBook);
    //qDebug() << ui->tableWidget_4->item(row,5)->text().toInt();
    emit sendbook(ui->tableWidget->item(row,0)->text().toInt());
    bk->show();
}

