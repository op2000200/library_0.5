#include "reader.h"
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
    ui->tableWidget_4->setColumnCount(5);
    QStringList a1 = { "Название", "Дата выдачи", "Срок конца аренды", "Оставшееся количество дней", "Штраф"};
    ui->tableWidget_4->setHorizontalHeaderLabels(a1);
    ui->tableWidget_4->horizontalHeader()->setSortIndicatorShown(true);
    ui->tableWidget_4->setSortingEnabled(1);
    ui->tableWidget_4->horizontalHeader()->resizeSection(0,400);
    ui->tableWidget_4->horizontalHeader()->resizeSection(1,200);
    ui->tableWidget_4->horizontalHeader()->resizeSection(2,280);
    ui->tableWidget_4->horizontalHeader()->resizeSection(3,280);
    ui->tableWidget_4->horizontalHeader()->resizeSection(4,90);
    a1 = {"Название", "Дата выдачи", "Срок конца аренды"};
    //ui->tableWidget_2->setRowCount(20);
    ui->tableWidget_2->setColumnCount(3);
    ui->tableWidget_2->setHorizontalHeaderLabels(a1);
    ui->tableWidget_2->horizontalHeader()->setSortIndicatorShown(true);
    ui->tableWidget_2->setSortingEnabled(1);
    ui->tableWidget_2->horizontalHeader()->resizeSection(0,410);
    ui->tableWidget_2->horizontalHeader()->resizeSection(1,410);
    ui->tableWidget_2->horizontalHeader()->resizeSection(2,410);

    file5.open(QIODevice::ReadOnly);
    file4.open(QIODevice::ReadWrite | QIODevice::Text);
    QString q = file4.readLine();
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
    writeStream << c << "\n";
    for (int i = 0; i < c; i++)
    {
        for (int j = 0; j < a[i].size(); j++)
        {
            buf+=a[i][j].replace(QRegularExpression("[ ]+"), "_") + " ";
        }
        buf.chop(1);
        writeStream << buf;
        buf = "";
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

void reader::refresh(QFile &f){
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
    list.open(QIODevice::ReadOnly);
    q = list.readLine();
    c = q.toInt();
    QStringList d;
    for (int i = 0; i < c; i++)
    {
        d[i] = list.readLine();
    }

    QTableWidgetItem *qq;
    qq = new QTableWidgetItem();
    QString format = "dd.MM.yyyy";
    QDateTime begin, end;
    int diff, hell; //diffihelman hahahah

    for (int i = 0; i < c; i++)
    {
        for (int o = 0; o < c; o++)
        {
            if (a[o][0] == d[i])
            {
                qq->setData(Qt::DisplayRole, QVariant(a[o][1].replace(QRegularExpression("[_]"), " ")));
                hell = a[o][4].toInt();
            }
        }
        ui->tableWidget_4->setItem(i,0,qq);

        qq->setData(Qt::DisplayRole, QVariant(d[1]));

        ui->tableWidget_4->setItem(i,1,qq);

        begin.fromString(d[1], format);
        end = begin.addDays(d[2].toInt());

        qq->setData(Qt::DisplayRole, QVariant(end.toString(format)));

        ui->tableWidget_4->setItem(i,2,qq);

        begin.fromString(d[1], format);

        diff = d[2].toInt() - begin.daysTo(end);

        if (diff < 0)
        {
            qq->setData(Qt::DisplayRole, QVariant("0"));
            ui->tableWidget_4->setItem(i,3,qq);
            diff*=-1;
            diff = diff * hell * 2;
            qq->setData(Qt::DisplayRole, QVariant(QString::number(diff) + " руб."));
        }
        else
        {
            qq->setData(Qt::DisplayRole, QVariant(diff));
            ui->tableWidget_4->setItem(i,3,qq);
            qq->setData(Qt::DisplayRole, QVariant("Отсутствует"));
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
    refresh(file5);
}

