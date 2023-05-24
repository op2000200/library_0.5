/********************************************************************************
** Form generated from reading UI file 'form.ui'
**
** Created by: Qt User Interface Compiler version 6.4.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FORM_H
#define UI_FORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Form
{
public:
    QPushButton *pushButton;
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_2;
    QLineEdit *lineEdit_3;
    QLineEdit *lineEdit_4;
    QPlainTextEdit *plainTextEdit;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLineEdit *lineEdit_5;
    QLabel *label_6;

    void setupUi(QWidget *Form)
    {
        if (Form->objectName().isEmpty())
            Form->setObjectName("Form");
        Form->resize(719, 361);
        pushButton = new QPushButton(Form);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(10, 320, 241, 24));
        lineEdit = new QLineEdit(Form);
        lineEdit->setObjectName("lineEdit");
        lineEdit->setGeometry(QRect(10, 40, 251, 24));
        lineEdit_2 = new QLineEdit(Form);
        lineEdit_2->setObjectName("lineEdit_2");
        lineEdit_2->setGeometry(QRect(10, 100, 251, 24));
        lineEdit_3 = new QLineEdit(Form);
        lineEdit_3->setObjectName("lineEdit_3");
        lineEdit_3->setGeometry(QRect(10, 160, 251, 24));
        lineEdit_4 = new QLineEdit(Form);
        lineEdit_4->setObjectName("lineEdit_4");
        lineEdit_4->setGeometry(QRect(10, 220, 251, 24));
        plainTextEdit = new QPlainTextEdit(Form);
        plainTextEdit->setObjectName("plainTextEdit");
        plainTextEdit->setGeometry(QRect(270, 40, 421, 311));
        label = new QLabel(Form);
        label->setObjectName("label");
        label->setGeometry(QRect(10, 70, 141, 16));
        label_2 = new QLabel(Form);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(10, 130, 151, 16));
        label_3 = new QLabel(Form);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(10, 190, 151, 16));
        label_4 = new QLabel(Form);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(10, 10, 91, 16));
        label_5 = new QLabel(Form);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(10, 250, 151, 16));
        lineEdit_5 = new QLineEdit(Form);
        lineEdit_5->setObjectName("lineEdit_5");
        lineEdit_5->setGeometry(QRect(10, 280, 251, 24));
        label_6 = new QLabel(Form);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(270, 10, 151, 16));

        retranslateUi(Form);

        QMetaObject::connectSlotsByName(Form);
    } // setupUi

    void retranslateUi(QWidget *Form)
    {
        Form->setWindowTitle(QCoreApplication::translate("Form", "Form", nullptr));
        pushButton->setText(QCoreApplication::translate("Form", "Save", nullptr));
        label->setText(QCoreApplication::translate("Form", "\320\260\320\262\321\202\320\276\321\200", nullptr));
        label_2->setText(QCoreApplication::translate("Form", "\320\263\320\276\320\264 \320\270\320\267\320\264\320\260\321\202\320\265\320\273\321\214\321\201\321\202\320\262\320\260", nullptr));
        label_3->setText(QCoreApplication::translate("Form", "\321\201\321\202\320\276\320\270\320\274\320\276\321\201\321\202\321\214", nullptr));
        label_4->setText(QCoreApplication::translate("Form", "\320\275\320\260\320\267\320\262\320\260\320\275\320\270\320\265", nullptr));
        label_5->setText(QCoreApplication::translate("Form", "\320\266\320\260\320\275\321\200", nullptr));
        label_6->setText(QCoreApplication::translate("Form", "\320\276\320\277\320\270\321\201\320\260\320\275\320\270\320\265", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Form: public Ui_Form {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FORM_H
