#ifndef READER_H
#define READER_H

#include <QWidget>
#include <QFile>
#include <book.h>
#include "allbook.h"

namespace Ui {
class reader;
}

class reader : public QWidget
{
    Q_OBJECT

public:
    explicit reader(QWidget *parent = nullptr);
    ~reader();

private slots:
    void on_toolButton_clicked();

    void on_toolButton_2_clicked();

    void on_toolButton_3_clicked();

    void on_pushButton_3_clicked();

    void on_tableWidget_4_cellDoubleClicked(int row, int column);

    void on_pushButton_clicked();

    void on_tableWidget_2_cellDoubleClicked(int row, int column);

    void on_pushButton_2_clicked();

private:
    Ui::reader *ui;
    book *bk;
    allbook *llbk;

public:

    QPixmap GetNew(QImage& img);
    void refresh(QFile &f);
    void refresh1(QFile &f);


public slots:
    void readData(int ID);


signals:
    void exiting();
    void sendbook(int ID);
};

#endif // READER_H
