#ifndef DIRECTORMAINWINDOW_H
#define DIRECTORMAINWINDOW_H

//#include "helloscreen.h"
#include "qdatetime.h"
#include "qthread.h"
#include <QWidget>
#include <QPainter>
#include <QFile>
#include <iostream>

namespace Ui {
class DirectorMainWindow;
}

class DirectorMainWindow : public QWidget
{
    Q_OBJECT

public:
    explicit DirectorMainWindow(QWidget *parent = nullptr);
    ~DirectorMainWindow();

public:
    void refreshtime();
    QPixmap GetNew(QImage& img);
    void refresh(QFile& f);
    void collectRegularUsers();
    void collectEmp();

private slots:
    void on_toolButton_clicked();

    void on_toolButton_2_clicked();

    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();


    void on_toolButton_3_clicked();


private:
    Ui::DirectorMainWindow *ui;
    //HelloScreen w;
    QThread *thread;


signals:
    void exiting();


public slots:
    void readData(int ID);

};

#endif // DIRECTORMAINWINDOW_H
