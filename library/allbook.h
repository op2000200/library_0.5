#ifndef ALLBOOK_H
#define ALLBOOK_H

#include "book.h"
#include <QWidget>
#include <QFile>

namespace Ui {
class allbook;
}

class allbook : public QWidget
{
    Q_OBJECT

public:
    explicit allbook(QWidget *parent = nullptr);
    ~allbook();
    void refresh(QFile& f);

private slots:
    void on_toolButton_clicked();

    void on_pushButton_clicked();

    void on_tableWidget_cellDoubleClicked(int row, int column);

private:
    Ui::allbook *ui;
    book *bk;

signals:
    void sendbook(int ID);
};

#endif // ALLBOOK_H
