#ifndef BOOK_H
#define BOOK_H

#include <QWidget>

namespace Ui {
class book;
}

class book : public QWidget
{
    Q_OBJECT

public:
    explicit book(QWidget *parent = nullptr);
    ~book();

private:
    Ui::book *ui;

public slots:
    void openBook(int ID);
private slots:
    void on_toolButton_clicked();

};

#endif // BOOK_H
