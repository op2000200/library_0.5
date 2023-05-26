/********************************************************************************
** Form generated from reading UI file 'allbook.ui'
**
** Created by: Qt User Interface Compiler version 6.4.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ALLBOOK_H
#define UI_ALLBOOK_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_allbook
{
public:
    QTableWidget *tableWidget;
    QToolButton *toolButton;
    QPushButton *pushButton;
    QFrame *frame;

    void setupUi(QWidget *allbook)
    {
        if (allbook->objectName().isEmpty())
            allbook->setObjectName("allbook");
        allbook->resize(1312, 753);
        allbook->setStyleSheet(QString::fromUtf8("background-color: rgb(151, 172, 138);"));
        tableWidget = new QTableWidget(allbook);
        tableWidget->setObjectName("tableWidget");
        tableWidget->setGeometry(QRect(10, 80, 1291, 661));
        tableWidget->setFrameShape(QFrame::NoFrame);
        tableWidget->horizontalHeader()->setMinimumSectionSize(0);
        toolButton = new QToolButton(allbook);
        toolButton->setObjectName("toolButton");
        toolButton->setGeometry(QRect(1260, 10, 41, 41));
        toolButton->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 0, 0);\n"
"border-radius: 20px;"));
        pushButton = new QPushButton(allbook);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(10, 10, 79, 48));
        pushButton->setStyleSheet(QString::fromUtf8("background-color: rgb(91, 102, 96);\n"
"border-radius: 10px;"));
        frame = new QFrame(allbook);
        frame->setObjectName("frame");
        frame->setGeometry(QRect(0, 0, 1311, 751));
        frame->setStyleSheet(QString::fromUtf8("border: 5px solid rgb(51,51,51);"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        frame->setLineWidth(5);
        frame->raise();
        tableWidget->raise();
        toolButton->raise();
        pushButton->raise();
        toolButton->raise();
        pushButton->raise();

        retranslateUi(allbook);

        QMetaObject::connectSlotsByName(allbook);
    } // setupUi

    void retranslateUi(QWidget *allbook)
    {
        allbook->setWindowTitle(QCoreApplication::translate("allbook", "Form", nullptr));
        toolButton->setText(QString());
        pushButton->setText(QCoreApplication::translate("allbook", "\n"
"\320\236\320\261\320\275\320\276\320\262\320\270\321\202\321\214\n"
"", nullptr));
    } // retranslateUi

};

namespace Ui {
    class allbook: public Ui_allbook {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ALLBOOK_H
