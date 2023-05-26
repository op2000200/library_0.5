#ifndef BIBLI_H
#define BIBLI_H

#include <QWidget>

namespace Ui {
class bibli;
}

class bibli : public QWidget
{
    Q_OBJECT

public:
    explicit bibli(QWidget *parent = nullptr);
    ~bibli();

private slots:
    void on_toolButton_2_clicked();

    void on_toolButton_clicked();

    void on_toolButton_3_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_4_clicked();

private:
    Ui::bibli *ui;

public slots:
    void readData(int ID);

signals:
    void exiting();
};

#endif // BIBLI_H
