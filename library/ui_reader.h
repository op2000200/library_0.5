/********************************************************************************
** Form generated from reading UI file 'reader.ui'
**
** Created by: Qt User Interface Compiler version 6.4.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_READER_H
#define UI_READER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_reader
{
public:
    QLabel *label_5;
    QLabel *label_2;
    QTabWidget *tabWidget;
    QWidget *tab;
    QTableWidget *tableWidget;
    QWidget *tab_2;
    QTableWidget *tableWidget_2;
    QToolButton *toolButton_2;
    QLabel *label_10;
    QLabel *label_8;
    QLabel *label_4;
    QLabel *label_11;
    QToolButton *toolButton;
    QLabel *label_6;
    QLabel *label_12;
    QLabel *label_13;
    QLabel *label_3;
    QLabel *label;
    QLabel *label_15;
    QLabel *label_7;
    QLabel *label_14;
    QLabel *label_9;
    QToolButton *toolButton_3;

    void setupUi(QWidget *reader)
    {
        if (reader->objectName().isEmpty())
            reader->setObjectName("reader");
        reader->resize(1920, 1080);
        reader->setStyleSheet(QString::fromUtf8("background-color: rgb(151, 172, 138);"));
        label_5 = new QLabel(reader);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(35, 111, 400, 400));
        label_5->setStyleSheet(QString::fromUtf8("border-radius: 200px;\n"
"background-color: transparent;\n"
"border: 20px solid rgb(86,86,86);"));
        label_2 = new QLabel(reader);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(10, 11, 451, 1051));
        label_2->setStyleSheet(QString::fromUtf8("background-color: rgb(217, 217, 217);\n"
"border-radius: 30px;"));
        tabWidget = new QTabWidget(reader);
        tabWidget->setObjectName("tabWidget");
        tabWidget->setGeometry(QRect(530, 151, 1341, 881));
        tabWidget->setStyleSheet(QString::fromUtf8("background-color: rgb(172, 172, 172);\n"
"selection-color: rgb(172, 172, 172);\n"
"gridline-color: rgb(172, 172, 172);\n"
"border-color: rgb(172, 172, 172);\n"
"border-bottom-color: rgb(172, 172, 172);\n"
"border-right-color: rgb(172, 172, 172);\n"
""));
        tabWidget->setTabPosition(QTabWidget::East);
        tabWidget->setTabShape(QTabWidget::Rounded);
        tab = new QWidget();
        tab->setObjectName("tab");
        tab->setStyleSheet(QString::fromUtf8(""));
        tableWidget = new QTableWidget(tab);
        tableWidget->setObjectName("tableWidget");
        tableWidget->setGeometry(QRect(10, 10, 1271, 831));
        tableWidget->setStyleSheet(QString::fromUtf8("selection-background-color:  rgb(80,80,80);\n"
"border-radius: 10px;\n"
""));
        tableWidget->setFrameShape(QFrame::NoFrame);
        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName("tab_2");
        tableWidget_2 = new QTableWidget(tab_2);
        tableWidget_2->setObjectName("tableWidget_2");
        tableWidget_2->setGeometry(QRect(10, 10, 1271, 831));
        tableWidget_2->setStyleSheet(QString::fromUtf8("selection-background-color:  rgb(80,80,80);\n"
"border-radius: 10px;\n"
""));
        tableWidget_2->setFrameShape(QFrame::NoFrame);
        tabWidget->addTab(tab_2, QString());
        toolButton_2 = new QToolButton(reader);
        toolButton_2->setObjectName("toolButton_2");
        toolButton_2->setGeometry(QRect(1810, 11, 40, 40));
        toolButton_2->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 255, 0);\n"
"border-radius: 20px;"));
        label_10 = new QLabel(reader);
        label_10->setObjectName("label_10");
        label_10->setGeometry(QRect(1829, 381, 21, 661));
        label_10->setStyleSheet(QString::fromUtf8("background-color: rgb(172, 172, 172);"));
        label_8 = new QLabel(reader);
        label_8->setObjectName("label_8");
        label_8->setGeometry(QRect(30, 741, 411, 301));
        label_8->setStyleSheet(QString::fromUtf8("background: #C4C1C1;\n"
"border-radius: 30px;"));
        label_4 = new QLabel(reader);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(40, 31, 390, 60));
        QFont font;
        font.setPointSize(36);
        label_4->setFont(font);
        label_4->setStyleSheet(QString::fromUtf8("background: #C4C1C1;\n"
"border-radius: 30px;\n"
"color: rgb(51,51,51);"));
        label_4->setAlignment(Qt::AlignCenter);
        label_11 = new QLabel(reader);
        label_11->setObjectName("label_11");
        label_11->setGeometry(QRect(520, 1006, 1321, 41));
        label_11->setStyleSheet(QString::fromUtf8("background-color: rgb(172, 172, 172);"));
        toolButton = new QToolButton(reader);
        toolButton->setObjectName("toolButton");
        toolButton->setGeometry(QRect(1860, 11, 40, 40));
        toolButton->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 0, 0);\n"
"border-radius: 20px;"));
        label_6 = new QLabel(reader);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(480, 110, 1421, 951));
        label_6->setStyleSheet(QString::fromUtf8("background-color: rgb(217, 217, 217);\n"
"border-radius: 30px;"));
        label_12 = new QLabel(reader);
        label_12->setObjectName("label_12");
        label_12->setGeometry(QRect(100, 781, 49, 16));
        label_13 = new QLabel(reader);
        label_13->setObjectName("label_13");
        label_13->setGeometry(QRect(90, 891, 49, 16));
        label_3 = new QLabel(reader);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(30, 21, 411, 80));
        label_3->setStyleSheet(QString::fromUtf8("background: #ACACAC;\n"
"border-radius: 30px;"));
        label = new QLabel(reader);
        label->setObjectName("label");
        label->setGeometry(QRect(35, 111, 400, 400));
        label_15 = new QLabel(reader);
        label_15->setObjectName("label_15");
        label_15->setGeometry(QRect(480, 21, 1311, 80));
        label_15->setStyleSheet(QString::fromUtf8("background: #ACACAC;\n"
"border-radius: 30px;"));
        label_7 = new QLabel(reader);
        label_7->setObjectName("label_7");
        label_7->setGeometry(QRect(20, 731, 431, 321));
        label_7->setStyleSheet(QString::fromUtf8("background: #ACACAC;\n"
"border-radius: 30px;"));
        label_14 = new QLabel(reader);
        label_14->setObjectName("label_14");
        label_14->setGeometry(QRect(490, 31, 1291, 60));
        label_14->setFont(font);
        label_14->setStyleSheet(QString::fromUtf8("background: #C4C1C1;\n"
"border-radius: 30px;\n"
"color: rgb(51,51,51);"));
        label_14->setAlignment(Qt::AlignCenter);
        label_9 = new QLabel(reader);
        label_9->setObjectName("label_9");
        label_9->setGeometry(QRect(490, 120, 1375, 931));
        label_9->setStyleSheet(QString::fromUtf8("background-color: rgb(172, 172, 172);\n"
"border-radius: 30px;"));
        toolButton_3 = new QToolButton(reader);
        toolButton_3->setObjectName("toolButton_3");
        toolButton_3->setGeometry(QRect(1810, 60, 91, 40));
        toolButton_3->setStyleSheet(QString::fromUtf8("background-color: rgb(86, 86, 86);\n"
"border-radius: 20px;"));
        label_2->raise();
        toolButton_2->raise();
        toolButton->raise();
        label_6->raise();
        label_3->raise();
        label->raise();
        label_15->raise();
        label_7->raise();
        label_14->raise();
        label_9->raise();
        label_4->raise();
        tabWidget->raise();
        label_10->raise();
        label_11->raise();
        label_5->raise();
        label_8->raise();
        label_12->raise();
        label_13->raise();
        toolButton_3->raise();

        retranslateUi(reader);

        tabWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(reader);
    } // setupUi

    void retranslateUi(QWidget *reader)
    {
        reader->setWindowTitle(QCoreApplication::translate("reader", "Form", nullptr));
        label_5->setText(QString());
        label_2->setText(QString());
        tabWidget->setTabText(tabWidget->indexOf(tab), QCoreApplication::translate("reader", " \320\234\320\276\320\270 \320\272\320\275\320\270\320\263\320\270", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QCoreApplication::translate("reader", "\320\230\321\201\321\202\320\276\321\200\320\270\321\217 \320\262\320\267\321\217\321\202\321\213\321\205 \320\272\320\275\320\270\320\263", nullptr));
        toolButton_2->setText(QString());
        label_10->setText(QString());
        label_8->setText(QString());
        label_4->setText(QCoreApplication::translate("reader", "\320\247\320\270\321\202\320\260\321\202\320\265\320\273\321\214", nullptr));
        label_11->setText(QString());
        toolButton->setText(QString());
        label_6->setText(QString());
        label_12->setText(QCoreApplication::translate("reader", "\320\264\320\260\321\202\320\260", nullptr));
        label_13->setText(QCoreApplication::translate("reader", "\320\262\321\200\320\265\320\274\321\217", nullptr));
        label_3->setText(QString());
        label->setText(QString());
        label_15->setText(QString());
        label_7->setText(QString());
        label_14->setText(QCoreApplication::translate("reader", "\320\230\320\274\321\217 \320\244\320\260\320\274\320\270\320\273\320\270\321\217 \320\236\321\202\321\207\320\265\321\201\321\202\320\262\320\276", nullptr));
        label_9->setText(QString());
        toolButton_3->setText(QCoreApplication::translate("reader", "\320\222\320\253\320\245\320\236\320\224", nullptr));
    } // retranslateUi

};

namespace Ui {
    class reader: public Ui_reader {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_READER_H
