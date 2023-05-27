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
    bool loginExist(QString login);
    bool bookExist(QString login,QString ID);
    bool bookExist(QString ID);
    bool loginUnique(QString login);
    void refreshFile();

private slots:
    void on_toolButton_2_clicked();

    void on_toolButton_clicked();

    void on_toolButton_3_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_7_clicked();

    void on_checkBox_4_clicked();

    void on_checkBox_3_clicked();

    void on_lineEdit_returnPressed();

    void on_lineEdit_2_returnPressed();

    void on_pushButton_5_clicked();

    void on_lineEdit_4_returnPressed();

    void on_lineEdit_3_returnPressed();

    void on_lineEdit_5_returnPressed();

    void on_pushButton_6_clicked();

    void on_lineEdit_6_returnPressed();

    void on_lineEdit_7_returnPressed();

    void on_toolButton_4_clicked();

    void on_pushButton_9_clicked();

    void on_lineEdit_9_returnPressed();

    void on_lineEdit_10_returnPressed();

    void on_lineEdit_11_returnPressed();

    void on_lineEdit_12_returnPressed();

    void on_lineEdit_13_returnPressed();

    void on_pushButton_10_clicked();

private:
    Ui::bibli *ui;

public slots:
    void readData(int ID);

signals:
    void exiting();
};

#endif // BIBLI_H
