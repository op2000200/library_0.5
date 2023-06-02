/********************************************************************************
** Form generated from reading UI file 'helloscreen.ui'
**
** Created by: Qt User Interface Compiler version 6.4.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HELLOSCREEN_H
#define UI_HELLOSCREEN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_HelloScreen
{
public:
    QWidget *centralwidget;
    QToolButton *toolButton;
    QToolButton *toolButton_2;
    QLineEdit *lineEdit;
    QLabel *label;
    QLineEdit *lineEdit_2;
    QLabel *label_2;
    QLabel *label_3;
    QPushButton *pushButton;
    QLabel *label_4;
    QLabel *label_5;

    void setupUi(QMainWindow *HelloScreen)
    {
        if (HelloScreen->objectName().isEmpty())
            HelloScreen->setObjectName("HelloScreen");
        HelloScreen->setEnabled(true);
        HelloScreen->resize(1920, 1080);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(HelloScreen->sizePolicy().hasHeightForWidth());
        HelloScreen->setSizePolicy(sizePolicy);
        HelloScreen->setMinimumSize(QSize(0, 0));
        HelloScreen->setMaximumSize(QSize(1920, 1080));
        HelloScreen->setAutoFillBackground(false);
        HelloScreen->setStyleSheet(QString::fromUtf8("background-color: rgb(151, 172, 138);"));
        centralwidget = new QWidget(HelloScreen);
        centralwidget->setObjectName("centralwidget");
        toolButton = new QToolButton(centralwidget);
        toolButton->setObjectName("toolButton");
        toolButton->setGeometry(QRect(1870, 10, 40, 40));
        toolButton->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 0, 0);\n"
"border-radius: 20px;"));
        toolButton_2 = new QToolButton(centralwidget);
        toolButton_2->setObjectName("toolButton_2");
        toolButton_2->setGeometry(QRect(1820, 10, 40, 40));
        toolButton_2->setStyleSheet(QString::fromUtf8("background-color: rgb(0,255,0);\n"
"border-radius: 20px;"));
        lineEdit = new QLineEdit(centralwidget);
        lineEdit->setObjectName("lineEdit");
        lineEdit->setGeometry(QRect(810, 465, 300, 50));
        QFont font;
        font.setPointSize(26);
        lineEdit->setFont(font);
        lineEdit->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        lineEdit->setMaxLength(8);
        lineEdit->setFrame(false);
        lineEdit->setAlignment(Qt::AlignCenter);
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(785, 465, 350, 50));
        label->setStyleSheet(QString::fromUtf8("border-radius: 25px;\n"
"background-color: rgb(255, 255, 255);"));
        lineEdit_2 = new QLineEdit(centralwidget);
        lineEdit_2->setObjectName("lineEdit_2");
        lineEdit_2->setGeometry(QRect(810, 540, 300, 50));
        lineEdit_2->setFont(font);
        lineEdit_2->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        lineEdit_2->setMaxLength(14);
        lineEdit_2->setFrame(false);
        lineEdit_2->setEchoMode(QLineEdit::Password);
        lineEdit_2->setAlignment(Qt::AlignCenter);
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(785, 540, 350, 50));
        label_2->setStyleSheet(QString::fromUtf8("border-radius: 25px;\n"
"background-color: rgb(255, 255, 255);"));
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(735, 410, 450, 300));
        label_3->setStyleSheet(QString::fromUtf8("border-radius: 25px;\n"
"background-color: rgb(48, 48, 48);"));
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(860, 630, 200, 50));
        QFont font1;
        font1.setPointSize(26);
        font1.setBold(true);
        pushButton->setFont(font1);
        pushButton->setStyleSheet(QString::fromUtf8("background-color: rgb(85, 170, 255);\n"
"color: rgb(30, 30, 30);\n"
"border-radius: 25px;"));
        label_4 = new QLabel(centralwidget);
        label_4->setObjectName("label_4");
        label_4->setEnabled(true);
        label_4->setGeometry(QRect(855, 425, 210, 22));
        QFont font2;
        font2.setPointSize(12);
        label_4->setFont(font2);
        label_4->setStyleSheet(QString::fromUtf8("background-color: rgb(48, 48, 48);\n"
"color: rgb(255, 0, 0);"));
        label_5 = new QLabel(centralwidget);
        label_5->setObjectName("label_5");
        label_5->setEnabled(true);
        label_5->setGeometry(QRect(855, 425, 210, 22));
        label_5->setFont(font2);
        label_5->setStyleSheet(QString::fromUtf8("background-color: rgb(48, 48, 48);\n"
"color: green;"));
        label_5->setAlignment(Qt::AlignCenter);
        HelloScreen->setCentralWidget(centralwidget);
        label_3->raise();
        label->raise();
        toolButton->raise();
        toolButton_2->raise();
        lineEdit->raise();
        label_2->raise();
        lineEdit_2->raise();
        pushButton->raise();
        label_4->raise();
        label_5->raise();

        retranslateUi(HelloScreen);

        QMetaObject::connectSlotsByName(HelloScreen);
    } // setupUi

    void retranslateUi(QMainWindow *HelloScreen)
    {
        HelloScreen->setWindowTitle(QCoreApplication::translate("HelloScreen", "\320\221\320\270\320\261\320\273\320\270\320\276\321\202\320\265\320\272\320\260 0.5", nullptr));
        toolButton->setText(QString());
        toolButton_2->setText(QString());
        lineEdit->setPlaceholderText(QCoreApplication::translate("HelloScreen", "\320\233\320\276\320\263\320\270\320\275", nullptr));
        label->setText(QString());
        lineEdit_2->setPlaceholderText(QCoreApplication::translate("HelloScreen", "\320\237\320\260\321\200\320\276\320\273\321\214", nullptr));
        label_2->setText(QString());
        label_3->setText(QString());
        pushButton->setText(QCoreApplication::translate("HelloScreen", "\320\222\320\276\320\271\321\202\320\270", nullptr));
        label_4->setText(QCoreApplication::translate("HelloScreen", "\320\233\320\276\320\263\320\270\320\275 \320\270/\320\270\320\273\320\270 \320\277\320\260\321\200\320\276\320\273\321\214 \320\275\320\265\320\262\320\265\321\200\320\275\321\213", nullptr));
        label_5->setText(QCoreApplication::translate("HelloScreen", "\320\222\321\205\320\276\320\264 \321\203\321\201\320\277\320\265\321\210\320\265\320\275", nullptr));
    } // retranslateUi

};

namespace Ui {
    class HelloScreen: public Ui_HelloScreen {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HELLOSCREEN_H
