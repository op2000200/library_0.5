/********************************************************************************
** Form generated from reading UI file 'book.ui'
**
** Created by: Qt User Interface Compiler version 6.4.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BOOK_H
#define UI_BOOK_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_book
{
public:
    QToolButton *toolButton;
    QFrame *frame;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;
    QLabel *label_8;
    QLabel *label_9;
    QLabel *label_10;
    QLabel *label_11;
    QPlainTextEdit *plainTextEdit;

    void setupUi(QWidget *book)
    {
        if (book->objectName().isEmpty())
            book->setObjectName("book");
        book->resize(800, 543);
        book->setStyleSheet(QString::fromUtf8("background-color: rgb(161, 182, 138);"));
        toolButton = new QToolButton(book);
        toolButton->setObjectName("toolButton");
        toolButton->setGeometry(QRect(740, 10, 41, 40));
        toolButton->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 0, 0);\n"
"border-radius: 20px;\n"
"border: 0px;"));
        frame = new QFrame(book);
        frame->setObjectName("frame");
        frame->setGeometry(QRect(0, 0, 801, 541));
        frame->setStyleSheet(QString::fromUtf8("border: 5px solid rgb(51,51,51);"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        frame->setLineWidth(5);
        label = new QLabel(book);
        label->setObjectName("label");
        label->setGeometry(QRect(10, 60, 106, 32));
        QFont font;
        font.setPointSize(18);
        label->setFont(font);
        label->setStyleSheet(QString::fromUtf8("color: rgb(81, 81, 81);"));
        label_2 = new QLabel(book);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(10, 100, 71, 32));
        label_2->setFont(font);
        label_2->setStyleSheet(QString::fromUtf8("color: rgb(81, 81, 81);"));
        label_3 = new QLabel(book);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(10, 140, 141, 32));
        label_3->setFont(font);
        label_3->setStyleSheet(QString::fromUtf8("color: rgb(81, 81, 81);"));
        label_4 = new QLabel(book);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(10, 180, 211, 32));
        label_4->setFont(font);
        label_4->setStyleSheet(QString::fromUtf8("color: rgb(81, 81, 81);"));
        label_5 = new QLabel(book);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(10, 220, 71, 32));
        label_5->setFont(font);
        label_5->setStyleSheet(QString::fromUtf8("color: rgb(81, 81, 81);"));
        label_6 = new QLabel(book);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(10, 260, 121, 32));
        label_6->setFont(font);
        label_6->setStyleSheet(QString::fromUtf8("color: rgb(81, 81, 81);"));
        label_7 = new QLabel(book);
        label_7->setObjectName("label_7");
        label_7->setGeometry(QRect(230, 60, 561, 32));
        label_7->setFont(font);
        label_7->setStyleSheet(QString::fromUtf8("color: rgb(81, 81, 81);"));
        label_7->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        label_8 = new QLabel(book);
        label_8->setObjectName("label_8");
        label_8->setGeometry(QRect(230, 100, 561, 32));
        label_8->setFont(font);
        label_8->setStyleSheet(QString::fromUtf8("color: rgb(81, 81, 81);"));
        label_8->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        label_9 = new QLabel(book);
        label_9->setObjectName("label_9");
        label_9->setGeometry(QRect(230, 140, 561, 32));
        label_9->setFont(font);
        label_9->setStyleSheet(QString::fromUtf8("color: rgb(81, 81, 81);"));
        label_9->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        label_10 = new QLabel(book);
        label_10->setObjectName("label_10");
        label_10->setGeometry(QRect(230, 180, 561, 32));
        label_10->setFont(font);
        label_10->setStyleSheet(QString::fromUtf8("color: rgb(81, 81, 81);"));
        label_10->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        label_11 = new QLabel(book);
        label_11->setObjectName("label_11");
        label_11->setGeometry(QRect(230, 220, 561, 32));
        label_11->setFont(font);
        label_11->setStyleSheet(QString::fromUtf8("color: rgb(81, 81, 81);"));
        label_11->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        plainTextEdit = new QPlainTextEdit(book);
        plainTextEdit->setObjectName("plainTextEdit");
        plainTextEdit->setGeometry(QRect(5, 300, 791, 231));
        plainTextEdit->setFont(font);
        plainTextEdit->setStyleSheet(QString::fromUtf8("color: rgb(81, 81, 81);"));
        plainTextEdit->setFrameShape(QFrame::NoFrame);
        frame->raise();
        toolButton->raise();
        label->raise();
        label_2->raise();
        label_3->raise();
        label_4->raise();
        label_5->raise();
        label_6->raise();
        label_7->raise();
        label_8->raise();
        label_9->raise();
        label_10->raise();
        label_11->raise();
        plainTextEdit->raise();

        retranslateUi(book);

        QMetaObject::connectSlotsByName(book);
    } // setupUi

    void retranslateUi(QWidget *book)
    {
        book->setWindowTitle(QCoreApplication::translate("book", "Form", nullptr));
        toolButton->setText(QString());
        label->setText(QCoreApplication::translate("book", "\320\235\320\260\320\267\320\262\320\260\320\275\320\270\320\265", nullptr));
        label_2->setText(QCoreApplication::translate("book", "\320\220\320\262\321\202\320\276\321\200", nullptr));
        label_3->setText(QCoreApplication::translate("book", "\320\223\320\276\320\264 \320\262\321\213\320\277\321\203\321\201\320\272\320\260", nullptr));
        label_4->setText(QCoreApplication::translate("book", "\320\241\321\202\320\276\320\270\320\274\320\276\321\201\321\202\321\214 \320\267\320\260 \320\264\320\265\320\275\321\214", nullptr));
        label_5->setText(QCoreApplication::translate("book", "\320\226\320\260\320\275\321\200", nullptr));
        label_6->setText(QCoreApplication::translate("book", "\320\236\320\277\320\270\321\201\320\260\320\275\320\270\320\265", nullptr));
        label_7->setText(QCoreApplication::translate("book", "\320\235\320\260\320\267\320\262\320\260\320\275\320\270\320\265", nullptr));
        label_8->setText(QCoreApplication::translate("book", "\320\235\320\260\320\267\320\262\320\260\320\275\320\270\320\265", nullptr));
        label_9->setText(QCoreApplication::translate("book", "\320\235\320\260\320\267\320\262\320\260\320\275\320\270\320\265", nullptr));
        label_10->setText(QCoreApplication::translate("book", "\320\235\320\260\320\267\320\262\320\260\320\275\320\270\320\265", nullptr));
        label_11->setText(QCoreApplication::translate("book", "\320\235\320\260\320\267\320\262\320\260\320\275\320\270\320\265", nullptr));
        plainTextEdit->setPlainText(QString());
    } // retranslateUi

};

namespace Ui {
    class book: public Ui_book {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BOOK_H
