#ifndef HELLOSCREEN_H
#define HELLOSCREEN_H

#include <QMainWindow>
#include <directormainwindow.h>

QT_BEGIN_NAMESPACE
namespace Ui { class HelloScreen; }
QT_END_NAMESPACE

class HelloScreen : public QMainWindow
{
    Q_OBJECT

public:
    HelloScreen(QWidget *parent = nullptr);
    ~HelloScreen();

private slots:
    void on_toolButton_clicked();

    void on_toolButton_2_clicked();

    void on_pushButton_clicked();

private:
    void StartingSequence();

private:
    Ui::HelloScreen *ui;
    DirectorMainWindow DMW;
};
#endif // HELLOSCREEN_H
