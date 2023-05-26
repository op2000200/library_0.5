#ifndef READER_H
#define READER_H

#include <QWidget>
#include <QFile>
#include <book.h>

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

private:
    Ui::reader *ui;
    book *bk;

public:

    QPixmap GetNew(QImage& img);
    void refresh(QFile &f);


public slots:
    void readData(int ID);


signals:
    void exiting();
    void sendbook(int ID);
};

#endif // READER_H
