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
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
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
    QFrame *frame;
    QWidget *horizontalLayoutWidget_2;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *pushButton_3;
    QLabel *label_25;
    QLabel *label_26;
    QLabel *label_27;
    QLabel *label_28;
    QLabel *label_29;
    QLabel *label_30;
    QLabel *label_31;
    QLabel *label_32;
    QLabel *label_33;
    QFrame *frame_2;
    QTableWidget *tableWidget_4;
    QWidget *tab_2;
    QFrame *frame_3;
    QWidget *horizontalLayoutWidget_3;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *pushButton;
    QLabel *label_34;
    QLabel *label_35;
    QLabel *label_36;
    QLabel *label_37;
    QLabel *label_38;
    QLabel *label_39;
    QLabel *label_40;
    QLabel *label_41;
    QLabel *label_42;
    QFrame *frame_4;
    QTableWidget *tableWidget_2;
    QToolButton *toolButton_2;
    QLabel *label_10;
    QLabel *label_8;
    QLabel *label_4;
    QLabel *label_11;
    QToolButton *toolButton;
    QLabel *label_6;
    QLabel *DATA;
    QLabel *label_3;
    QLabel *label;
    QLabel *label_15;
    QLabel *label_7;
    QLabel *label_14;
    QLabel *label_9;
    QToolButton *toolButton_3;
    QPushButton *pushButton_2;

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
        frame = new QFrame(tab);
        frame->setObjectName("frame");
        frame->setGeometry(QRect(0, 0, 1281, 81));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        horizontalLayoutWidget_2 = new QWidget(frame);
        horizontalLayoutWidget_2->setObjectName("horizontalLayoutWidget_2");
        horizontalLayoutWidget_2->setGeometry(QRect(10, 10, 1261, 61));
        horizontalLayout_2 = new QHBoxLayout(horizontalLayoutWidget_2);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        pushButton_3 = new QPushButton(horizontalLayoutWidget_2);
        pushButton_3->setObjectName("pushButton_3");
        pushButton_3->setStyleSheet(QString::fromUtf8("background-color: rgb(91, 102, 96);\n"
"border-radius: 10px;"));

        horizontalLayout_2->addWidget(pushButton_3);

        label_25 = new QLabel(horizontalLayoutWidget_2);
        label_25->setObjectName("label_25");

        horizontalLayout_2->addWidget(label_25);

        label_26 = new QLabel(horizontalLayoutWidget_2);
        label_26->setObjectName("label_26");

        horizontalLayout_2->addWidget(label_26);

        label_27 = new QLabel(horizontalLayoutWidget_2);
        label_27->setObjectName("label_27");

        horizontalLayout_2->addWidget(label_27);

        label_28 = new QLabel(horizontalLayoutWidget_2);
        label_28->setObjectName("label_28");

        horizontalLayout_2->addWidget(label_28);

        label_29 = new QLabel(horizontalLayoutWidget_2);
        label_29->setObjectName("label_29");

        horizontalLayout_2->addWidget(label_29);

        label_30 = new QLabel(horizontalLayoutWidget_2);
        label_30->setObjectName("label_30");

        horizontalLayout_2->addWidget(label_30);

        label_31 = new QLabel(horizontalLayoutWidget_2);
        label_31->setObjectName("label_31");

        horizontalLayout_2->addWidget(label_31);

        label_32 = new QLabel(horizontalLayoutWidget_2);
        label_32->setObjectName("label_32");

        horizontalLayout_2->addWidget(label_32);

        label_33 = new QLabel(horizontalLayoutWidget_2);
        label_33->setObjectName("label_33");

        horizontalLayout_2->addWidget(label_33);

        frame_2 = new QFrame(tab);
        frame_2->setObjectName("frame_2");
        frame_2->setGeometry(QRect(0, 90, 1281, 751));
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);
        tableWidget_4 = new QTableWidget(frame_2);
        tableWidget_4->setObjectName("tableWidget_4");
        tableWidget_4->setGeometry(QRect(10, 10, 1261, 731));
        tableWidget_4->setFrameShape(QFrame::NoFrame);
        tableWidget_4->setCornerButtonEnabled(false);
        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName("tab_2");
        frame_3 = new QFrame(tab_2);
        frame_3->setObjectName("frame_3");
        frame_3->setGeometry(QRect(0, 0, 1281, 81));
        frame_3->setFrameShape(QFrame::StyledPanel);
        frame_3->setFrameShadow(QFrame::Raised);
        horizontalLayoutWidget_3 = new QWidget(frame_3);
        horizontalLayoutWidget_3->setObjectName("horizontalLayoutWidget_3");
        horizontalLayoutWidget_3->setGeometry(QRect(10, 10, 1261, 61));
        horizontalLayout_3 = new QHBoxLayout(horizontalLayoutWidget_3);
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        pushButton = new QPushButton(horizontalLayoutWidget_3);
        pushButton->setObjectName("pushButton");
        pushButton->setStyleSheet(QString::fromUtf8("background-color: rgb(91, 102, 96);\n"
"border-radius: 10px;"));

        horizontalLayout_3->addWidget(pushButton);

        label_34 = new QLabel(horizontalLayoutWidget_3);
        label_34->setObjectName("label_34");

        horizontalLayout_3->addWidget(label_34);

        label_35 = new QLabel(horizontalLayoutWidget_3);
        label_35->setObjectName("label_35");

        horizontalLayout_3->addWidget(label_35);

        label_36 = new QLabel(horizontalLayoutWidget_3);
        label_36->setObjectName("label_36");

        horizontalLayout_3->addWidget(label_36);

        label_37 = new QLabel(horizontalLayoutWidget_3);
        label_37->setObjectName("label_37");

        horizontalLayout_3->addWidget(label_37);

        label_38 = new QLabel(horizontalLayoutWidget_3);
        label_38->setObjectName("label_38");

        horizontalLayout_3->addWidget(label_38);

        label_39 = new QLabel(horizontalLayoutWidget_3);
        label_39->setObjectName("label_39");

        horizontalLayout_3->addWidget(label_39);

        label_40 = new QLabel(horizontalLayoutWidget_3);
        label_40->setObjectName("label_40");

        horizontalLayout_3->addWidget(label_40);

        label_41 = new QLabel(horizontalLayoutWidget_3);
        label_41->setObjectName("label_41");

        horizontalLayout_3->addWidget(label_41);

        label_42 = new QLabel(horizontalLayoutWidget_3);
        label_42->setObjectName("label_42");

        horizontalLayout_3->addWidget(label_42);

        frame_4 = new QFrame(tab_2);
        frame_4->setObjectName("frame_4");
        frame_4->setGeometry(QRect(0, 90, 1281, 751));
        frame_4->setFrameShape(QFrame::StyledPanel);
        frame_4->setFrameShadow(QFrame::Raised);
        tableWidget_2 = new QTableWidget(frame_4);
        tableWidget_2->setObjectName("tableWidget_2");
        tableWidget_2->setGeometry(QRect(10, 10, 1261, 731));
        tableWidget_2->setFrameShape(QFrame::NoFrame);
        tableWidget_2->setCornerButtonEnabled(false);
        tabWidget->addTab(tab_2, QString());
        toolButton_2 = new QToolButton(reader);
        toolButton_2->setObjectName("toolButton_2");
        toolButton_2->setGeometry(QRect(1810, 11, 40, 40));
        toolButton_2->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 255, 0);\n"
"border-radius: 20px;"));
        label_10 = new QLabel(reader);
        label_10->setObjectName("label_10");
        label_10->setGeometry(QRect(1829, 151, 20, 891));
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
        DATA = new QLabel(reader);
        DATA->setObjectName("DATA");
        DATA->setGeometry(QRect(50, 580, 321, 101));
        QFont font1;
        font1.setPointSize(48);
        DATA->setFont(font1);
        DATA->setStyleSheet(QString::fromUtf8("background-color: rgb(217, 217, 217);\n"
"color: rgb(51, 51, 51);"));
        DATA->setAlignment(Qt::AlignCenter);
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
        label_9->setGeometry(QRect(490, 120, 1401, 931));
        label_9->setStyleSheet(QString::fromUtf8("background-color: rgb(172, 172, 172);\n"
"border-radius: 30px;"));
        toolButton_3 = new QToolButton(reader);
        toolButton_3->setObjectName("toolButton_3");
        toolButton_3->setGeometry(QRect(1810, 60, 91, 40));
        toolButton_3->setStyleSheet(QString::fromUtf8("background-color: rgb(86, 86, 86);\n"
"border-radius: 20px;"));
        pushButton_2 = new QPushButton(reader);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(40, 750, 391, 281));
        QFont font2;
        font2.setPointSize(52);
        pushButton_2->setFont(font2);
        pushButton_2->setStyleSheet(QString::fromUtf8("background-color: rgb(91, 102, 96);\n"
"border-radius: 30px;"));
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
        DATA->raise();
        toolButton_3->raise();
        pushButton_2->raise();

        retranslateUi(reader);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(reader);
    } // setupUi

    void retranslateUi(QWidget *reader)
    {
        reader->setWindowTitle(QCoreApplication::translate("reader", "Form", nullptr));
        label_5->setText(QString());
        label_2->setText(QString());
        pushButton_3->setText(QCoreApplication::translate("reader", "\n"
"\320\236\320\261\320\275\320\276\320\262\320\270\321\202\321\214\n"
"", nullptr));
        label_25->setText(QString());
        label_26->setText(QString());
        label_27->setText(QString());
        label_28->setText(QString());
        label_29->setText(QString());
        label_30->setText(QString());
        label_31->setText(QString());
        label_32->setText(QString());
        label_33->setText(QString());
        tabWidget->setTabText(tabWidget->indexOf(tab), QCoreApplication::translate("reader", " \320\234\320\276\320\270 \320\272\320\275\320\270\320\263\320\270", nullptr));
        pushButton->setText(QCoreApplication::translate("reader", "\n"
"\320\236\320\261\320\275\320\276\320\262\320\270\321\202\321\214\n"
"", nullptr));
        label_34->setText(QString());
        label_35->setText(QString());
        label_36->setText(QString());
        label_37->setText(QString());
        label_38->setText(QString());
        label_39->setText(QString());
        label_40->setText(QString());
        label_41->setText(QString());
        label_42->setText(QString());
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QCoreApplication::translate("reader", "\320\230\321\201\321\202\320\276\321\200\320\270\321\217 \320\262\320\267\321\217\321\202\321\213\321\205 \320\272\320\275\320\270\320\263", nullptr));
        toolButton_2->setText(QString());
        label_10->setText(QString());
        label_8->setText(QString());
        label_4->setText(QCoreApplication::translate("reader", "\320\247\320\270\321\202\320\260\321\202\320\265\320\273\321\214", nullptr));
        label_11->setText(QString());
        toolButton->setText(QString());
        label_6->setText(QString());
        DATA->setText(QCoreApplication::translate("reader", "\320\264\320\260\321\202\320\260", nullptr));
        label_3->setText(QString());
        label->setText(QString());
        label_15->setText(QString());
        label_7->setText(QString());
        label_14->setText(QCoreApplication::translate("reader", "\320\230\320\274\321\217 \320\244\320\260\320\274\320\270\320\273\320\270\321\217 \320\236\321\202\321\207\320\265\321\201\321\202\320\262\320\276", nullptr));
        label_9->setText(QString());
        toolButton_3->setText(QCoreApplication::translate("reader", "\320\222\320\253\320\245\320\236\320\224", nullptr));
        pushButton_2->setText(QCoreApplication::translate("reader", "\320\241\320\274\320\276\321\202\321\200\320\265\321\202\321\214\n"
"\320\262\321\201\320\265 \320\272\320\275\320\270\320\263\320\270", nullptr));
    } // retranslateUi

};

namespace Ui {
    class reader: public Ui_reader {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_READER_H
