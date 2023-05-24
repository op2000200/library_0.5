#ifndef READER_H
#define READER_H

#include <QWidget>

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

private:
    Ui::reader *ui;

public:

    QPixmap GetNew(QImage& img);

public slots:
    void readData(int ID);


signals:
    void exiting();
};

#endif // READER_H
