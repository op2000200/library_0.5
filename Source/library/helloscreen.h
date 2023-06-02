#ifndef HELLOSCREEN_H
#define HELLOSCREEN_H

#include <QMainWindow>
#include <directormainwindow.h>
#include <reader.h>
#include <bibli.h>


QT_BEGIN_NAMESPACE
namespace Ui { class HelloScreen; }
QT_END_NAMESPACE

class HelloScreen : public QMainWindow
{
    Q_OBJECT

public:
    HelloScreen(QWidget *parent = nullptr);
    ~HelloScreen();
    void delay(int n);


private slots:
    void on_toolButton_clicked();

    void on_toolButton_2_clicked();

    void on_pushButton_clicked();

    void on_lineEdit_returnPressed();

    void on_lineEdit_2_returnPressed();

private:
    void StartingSequence();

private:
    Ui::HelloScreen *ui;
    DirectorMainWindow *DMW;
    reader *rdr;
    bibli *bbl;


public slots:
    void BTHS();

signals:
    void send1(int ID);
    void send2(int ID);
    void send3(int ID);


};
#endif // HELLOSCREEN_H
