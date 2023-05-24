#ifndef DIRECTORMAINWINDOW_H
#define DIRECTORMAINWINDOW_H

#include <QWidget>
#include <QPainter>


namespace Ui {
class DirectorMainWindow;
}

class DirectorMainWindow : public QWidget
{
    Q_OBJECT

public:
    explicit DirectorMainWindow(QWidget *parent = nullptr);
    ~DirectorMainWindow();

private slots:
    void on_toolButton_clicked();

    void on_toolButton_2_clicked();

private:
    Ui::DirectorMainWindow *ui;
};

#endif // DIRECTORMAINWINDOW_H
