#include "reader.h"
#include "book.h"
#include "ui_reader.h"
#include <QPicture>
#include <QImage>
#include <QPainter>
#include <QPainterPath>
#include <QGraphicsScene>
#include <QGraphicsView>
#include <QFile>
#include <QDateTime>

int userID2;
QString Curpath3 = "C:\\Git\\Library05\\library_0.5\\library\\resourses\\DataBase\\shared\\books"+ QDate::currentDate().toString().replace(QRegularExpression("[ ]"), "_")+"_"+QTime::currentTime().toString().replace(QRegularExpression("[:]"), "_")+".txt";
QFile file5("C:\\Git\\Library05\\library_0.5\\library\\resourses\\DataBase\\shared\\books.txt");

QFile file4(Curpath3);

reader::reader(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::reader)
{
    ui->setupUi(this);
    QString aa = "border-radius: 200px; background-color: rgb(" + QString::number(rand()%255) + "," + QString::number(rand()%255) + "," + QString::number(rand()%255) + ");";
    ui->label->setStyleSheet(aa);
    //QImage nnn("C:\\library\\resourses\\avaholder.png");

    //создать стартовую последовать
    //ui->label->setPixmap(reader::GetNew((nnn)));
    //ui->tableWidget->setRowCount(8);
    ui->tableWidget_4->setColumnCount(6);
    QStringList a1 = { "Название", "Дата выдачи", "Срок конца аренды", "Оставшееся количество дней", "Штраф"};
    ui->tableWidget_4->setHorizontalHeaderLabels(a1);
    ui->tableWidget_4->horizontalHeader()->setSortIndicatorShown(true);
    ui->tableWidget_4->setSortingEnabled(1);
    ui->tableWidget_4->horizontalHeader()->resizeSection(0,400);
    ui->tableWidget_4->horizontalHeader()->resizeSection(1,200);
    ui->tableWidget_4->horizontalHeader()->resizeSection(2,280);
    ui->tableWidget_4->horizontalHeader()->resizeSection(3,280);
    ui->tableWidget_4->horizontalHeader()->resizeSection(4,90);
    ui->tableWidget_4->hideColumn(5);
    a1 = {"Название", "Дата выдачи", "Срок конца аренды"};
    //ui->tableWidget_2->setRowCount(20);
    ui->tableWidget_2->setColumnCount(3);
    ui->tableWidget_2->setHorizontalHeaderLabels(a1);
    ui->tableWidget_2->horizontalHeader()->setSortIndicatorShown(true);
    ui->tableWidget_2->setSortingEnabled(1);
    ui->tableWidget_2->horizontalHeader()->resizeSection(0,410);
    ui->tableWidget_2->horizontalHeader()->resizeSection(1,410);
    ui->tableWidget_2->horizontalHeader()->resizeSection(2,410);

    ui->tableWidget_4->setEditTriggers(QAbstractItemView::NoEditTriggers);
    ui->tableWidget_2->setEditTriggers(QAbstractItemView::NoEditTriggers);

    file5.open(QIODevice::ReadOnly);
    file4.open(QIODevice::ReadWrite | QIODevice::Text);
    QString q = file5.readLine();
    int c = q.toInt();
    QStringList *a = new QStringList[c];
    QString b;
    for (int j = 0; j < c; j++)
    {
        b = file5.readLine();
        a[j] = b.split(" ");
    }
    QTextStream writeStream(&file4);
    QString buf;
    writeStream << c;
    for (int i = 0; i < c; i++)
    {
        buf = a[i].join(" ");
        buf.chop(1);
        //qDebug() << buf;

        //buf = "hell";
        //qDebug() << buff;
        //file4.write(buf.toUtf8());
        writeStream << "\n" << buf;
        buf = ""; //buff = "";
    }

    delete[] a;
    file5.seek(0);
    file4.flush();

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
    userID2 = ID;
    QString inf = "C:\\Git\\Library05\\library_0.5\\library\\resourses\\DataBase\\user\\" + QString::number(userID2) + "\\info.txt";
    QFile info(inf);
    info.open(QIODevice::ReadOnly);
    inf = info.readLine();
    ui->label_14->setText(inf);
    info.close();
    QString date = QDateTime::currentDateTime().toString("dd.MM.yyyy");
    ui->DATA->setText(date);
    //ui->label_14->setText(QString::number(ID));
}



void reader::on_toolButton_3_clicked()
{
    emit exiting();
    this->destroy();
}

void reader::refresh(QFile &f)
{

    f.seek(0);
    QString q = f.readLine();

    int c = q.toInt();
    QStringList *a = new QStringList[c];
    QString b;
    for (int j = 0; j < c; j++)
    {
        b = f.readLine();
        a[j] = b.split(" ");
    }
    QFile list("C:\\Git\\Library05\\library_0.5\\library\\resourses\\DataBase\\user\\" + QString::number(userID2) + "\\bookfornow.txt");
    list.open(QIODevice::ReadOnly | QIODevice::Text);
    list.seek(0);
    q = list.readLine();
    c = q.toInt();

    QStringList *d = new QStringList[c];
    for (int i = 0; i < c; i++)
    {
        b = list.readLine();
        d[i] = b.split(' ');
    }

    QTableWidgetItem *qq;
    qq = new QTableWidgetItem();
    QString format = "dd.MM.yyyy";
    QDateTime begin, end;
    int diff, hell; //diffihelman hahahah
    ui->tableWidget_4->setRowCount(c);
    ui->tableWidget_4->verticalHeader()->hide();
    for (int i = 0; i < c; i++)
        ui->tableWidget_4->resizeRowToContents(i);
    for (int i = 0; i < c; i++)
    {
        for (int o = 0; o < c; o++)
        {
            if (a[o][0] == d[i][0])
            {
                qq = new QTableWidgetItem();
                qq->setData(Qt::DisplayRole, QVariant(a[o][1].replace(QRegularExpression("[_]"), " ")));
                hell = a[o][4].toInt();

            }
        }
        ui->tableWidget_4->setItem(i,0,qq);


        qq = new QTableWidgetItem();
        qq->setData(Qt::DisplayRole, QVariant(d[i][0]));
        ui->tableWidget_4->setItem(i,5,qq);

        qq = new QTableWidgetItem();
        qq->setData(Qt::DisplayRole, QVariant(d[i][1]));



        qDebug() << d[i][1];

        ui->tableWidget_4->setItem(i,1,qq);

        begin = QDateTime::fromString(d[i][1], format);
        end = QDateTime::fromString(d[i][1], format);
        end = end.addDays(d[i][2].toInt());

        qDebug() << begin;

        qq = new QTableWidgetItem();
        qq->setData(Qt::DisplayRole, QVariant(end.toString(format)));

        ui->tableWidget_4->setItem(i,2,qq);

        begin.fromString(d[i][1], format);

        diff = d[i][2].toInt() - begin.daysTo(QDateTime::currentDateTime());
        qDebug() << diff;
        if (diff < 0)
        {
            qq = new QTableWidgetItem();
            qq->setData(Qt::DisplayRole, QVariant("0"));
            ui->tableWidget_4->setItem(i,3,qq);
            diff*=-1;
            diff = diff * hell * 2;
            qq = new QTableWidgetItem();
            qq->setData(Qt::DisplayRole, QVariant(QString::number(diff) + " руб."));
            ui->tableWidget_4->setItem(i,4,qq);
        }
        else
        {
            qq = new QTableWidgetItem();
            qq->setData(Qt::DisplayRole, QVariant(diff));
            ui->tableWidget_4->setItem(i,3,qq);
            qq = new QTableWidgetItem();
            qq->setData(Qt::DisplayRole, QVariant("Отсутствует"));
            ui->tableWidget_4->setItem(i,4,qq);
        }
    }



    delete[] a;
    list.close();



    /*

    QDateTime a = QDateTime::currentDateTime();
    ui->textBrowser->append(a.toString());
    QString from = "12.05.2023", format = "dd.MM.yyyy";
    QDateTime fromDT = QDateTime::fromString(from, format);
    ui->textBrowser->append(fromDT.toString());
    ui->textBrowser->append(a.toString());

    ui->textBrowser->append(QString::number( fromDT.daysTo(a)));


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
    */



}
void reader::on_pushButton_3_clicked()
{
    refresh(file4);
}


void reader::on_tableWidget_4_cellDoubleClicked(int row, int column)
{
    bk = new book;
    connect(this, &reader::sendbook, bk, &book::openBook);
    //qDebug() << ui->tableWidget_4->item(row,5)->text().toInt();
    emit sendbook(ui->tableWidget_4->item(row,5)->text().toInt());
    bk->show();
}

