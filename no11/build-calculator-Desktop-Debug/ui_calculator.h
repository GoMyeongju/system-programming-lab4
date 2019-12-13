/********************************************************************************
** Form generated from reading UI file 'calculator.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CALCULATOR_H
#define UI_CALCULATOR_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Calculator
{
public:
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QLineEdit *lineEdit_first;
    QWidget *horizontalLayoutWidget_2;
    QHBoxLayout *horizontalLayout_2;
    QLineEdit *lineEdit_second;
    QLabel *label_equa;
    QLineEdit *lineEdit_result;
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QPushButton *pushButton_mul;
    QPushButton *pushButton_1;
    QPushButton *pushButton_0;
    QPushButton *pushButton_3;
    QPushButton *pushButton_7;
    QPushButton *pushButton_6;
    QPushButton *pushButton_pls;
    QPushButton *pushButton_5;
    QPushButton *pushButton_2;
    QPushButton *pushButton_4;
    QPushButton *pushButton_result;
    QPushButton *pushButton_min;
    QPushButton *pushButton_8;
    QPushButton *pushButton_9;
    QPushButton *pushButton_c;
    QPushButton *pushButton_div;
    QPushButton *pushButton_ac;
    QPushButton *pushButton_close;
    QLabel *label_sign;
    QLabel *label;

    void setupUi(QDialog *Calculator)
    {
        if (Calculator->objectName().isEmpty())
            Calculator->setObjectName(QStringLiteral("Calculator"));
        Calculator->resize(644, 352);
        horizontalLayoutWidget = new QWidget(Calculator);
        horizontalLayoutWidget->setObjectName(QStringLiteral("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(60, 60, 160, 91));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        lineEdit_first = new QLineEdit(horizontalLayoutWidget);
        lineEdit_first->setObjectName(QStringLiteral("lineEdit_first"));

        horizontalLayout->addWidget(lineEdit_first);

        horizontalLayoutWidget_2 = new QWidget(Calculator);
        horizontalLayoutWidget_2->setObjectName(QStringLiteral("horizontalLayoutWidget_2"));
        horizontalLayoutWidget_2->setGeometry(QRect(270, 59, 311, 91));
        horizontalLayout_2 = new QHBoxLayout(horizontalLayoutWidget_2);
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        lineEdit_second = new QLineEdit(horizontalLayoutWidget_2);
        lineEdit_second->setObjectName(QStringLiteral("lineEdit_second"));

        horizontalLayout_2->addWidget(lineEdit_second);

        label_equa = new QLabel(horizontalLayoutWidget_2);
        label_equa->setObjectName(QStringLiteral("label_equa"));

        horizontalLayout_2->addWidget(label_equa);

        lineEdit_result = new QLineEdit(horizontalLayoutWidget_2);
        lineEdit_result->setObjectName(QStringLiteral("lineEdit_result"));

        horizontalLayout_2->addWidget(lineEdit_result);

        gridLayoutWidget = new QWidget(Calculator);
        gridLayoutWidget->setObjectName(QStringLiteral("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(60, 140, 521, 171));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        pushButton_mul = new QPushButton(gridLayoutWidget);
        pushButton_mul->setObjectName(QStringLiteral("pushButton_mul"));

        gridLayout->addWidget(pushButton_mul, 2, 3, 1, 1);

        pushButton_1 = new QPushButton(gridLayoutWidget);
        pushButton_1->setObjectName(QStringLiteral("pushButton_1"));

        gridLayout->addWidget(pushButton_1, 0, 0, 1, 1);

        pushButton_0 = new QPushButton(gridLayoutWidget);
        pushButton_0->setObjectName(QStringLiteral("pushButton_0"));

        gridLayout->addWidget(pushButton_0, 3, 1, 1, 1);

        pushButton_3 = new QPushButton(gridLayoutWidget);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));

        gridLayout->addWidget(pushButton_3, 0, 2, 1, 1);

        pushButton_7 = new QPushButton(gridLayoutWidget);
        pushButton_7->setObjectName(QStringLiteral("pushButton_7"));

        gridLayout->addWidget(pushButton_7, 2, 0, 1, 1);

        pushButton_6 = new QPushButton(gridLayoutWidget);
        pushButton_6->setObjectName(QStringLiteral("pushButton_6"));

        gridLayout->addWidget(pushButton_6, 1, 2, 1, 1);

        pushButton_pls = new QPushButton(gridLayoutWidget);
        pushButton_pls->setObjectName(QStringLiteral("pushButton_pls"));

        gridLayout->addWidget(pushButton_pls, 0, 3, 1, 1);

        pushButton_5 = new QPushButton(gridLayoutWidget);
        pushButton_5->setObjectName(QStringLiteral("pushButton_5"));

        gridLayout->addWidget(pushButton_5, 1, 1, 1, 1);

        pushButton_2 = new QPushButton(gridLayoutWidget);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));

        gridLayout->addWidget(pushButton_2, 0, 1, 1, 1);

        pushButton_4 = new QPushButton(gridLayoutWidget);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));

        gridLayout->addWidget(pushButton_4, 1, 0, 1, 1);

        pushButton_result = new QPushButton(gridLayoutWidget);
        pushButton_result->setObjectName(QStringLiteral("pushButton_result"));

        gridLayout->addWidget(pushButton_result, 3, 2, 1, 1);

        pushButton_min = new QPushButton(gridLayoutWidget);
        pushButton_min->setObjectName(QStringLiteral("pushButton_min"));

        gridLayout->addWidget(pushButton_min, 1, 3, 1, 1);

        pushButton_8 = new QPushButton(gridLayoutWidget);
        pushButton_8->setObjectName(QStringLiteral("pushButton_8"));

        gridLayout->addWidget(pushButton_8, 2, 1, 1, 1);

        pushButton_9 = new QPushButton(gridLayoutWidget);
        pushButton_9->setObjectName(QStringLiteral("pushButton_9"));

        gridLayout->addWidget(pushButton_9, 2, 2, 1, 1);

        pushButton_c = new QPushButton(gridLayoutWidget);
        pushButton_c->setObjectName(QStringLiteral("pushButton_c"));

        gridLayout->addWidget(pushButton_c, 3, 0, 1, 1);

        pushButton_div = new QPushButton(gridLayoutWidget);
        pushButton_div->setObjectName(QStringLiteral("pushButton_div"));

        gridLayout->addWidget(pushButton_div, 3, 3, 1, 1);

        pushButton_ac = new QPushButton(gridLayoutWidget);
        pushButton_ac->setObjectName(QStringLiteral("pushButton_ac"));

        gridLayout->addWidget(pushButton_ac, 0, 4, 1, 1);

        pushButton_close = new QPushButton(gridLayoutWidget);
        pushButton_close->setObjectName(QStringLiteral("pushButton_close"));

        gridLayout->addWidget(pushButton_close, 3, 4, 1, 1);

        label_sign = new QLabel(Calculator);
        label_sign->setObjectName(QStringLiteral("label_sign"));
        label_sign->setGeometry(QRect(240, 100, 45, 12));
        label = new QLabel(Calculator);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(20, 10, 381, 41));
        QFont font;
        font.setFamily(QStringLiteral("Source Code Pro"));
        font.setPointSize(24);
        font.setBold(true);
        font.setWeight(75);
        label->setFont(font);

        retranslateUi(Calculator);

        QMetaObject::connectSlotsByName(Calculator);
    } // setupUi

    void retranslateUi(QDialog *Calculator)
    {
        Calculator->setWindowTitle(QApplication::translate("Calculator", "Calculator", Q_NULLPTR));
        label_equa->setText(QApplication::translate("Calculator", "=", Q_NULLPTR));
        pushButton_mul->setText(QApplication::translate("Calculator", "*", Q_NULLPTR));
        pushButton_1->setText(QApplication::translate("Calculator", "1", Q_NULLPTR));
        pushButton_0->setText(QApplication::translate("Calculator", "0", Q_NULLPTR));
        pushButton_3->setText(QApplication::translate("Calculator", "3", Q_NULLPTR));
        pushButton_7->setText(QApplication::translate("Calculator", "7", Q_NULLPTR));
        pushButton_6->setText(QApplication::translate("Calculator", "6", Q_NULLPTR));
        pushButton_pls->setText(QApplication::translate("Calculator", "+", Q_NULLPTR));
        pushButton_5->setText(QApplication::translate("Calculator", "5", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("Calculator", "2", Q_NULLPTR));
        pushButton_4->setText(QApplication::translate("Calculator", "4", Q_NULLPTR));
        pushButton_result->setText(QApplication::translate("Calculator", "=", Q_NULLPTR));
        pushButton_min->setText(QApplication::translate("Calculator", "-", Q_NULLPTR));
        pushButton_8->setText(QApplication::translate("Calculator", "8", Q_NULLPTR));
        pushButton_9->setText(QApplication::translate("Calculator", "9", Q_NULLPTR));
        pushButton_c->setText(QApplication::translate("Calculator", "C", Q_NULLPTR));
        pushButton_div->setText(QApplication::translate("Calculator", "/", Q_NULLPTR));
        pushButton_ac->setText(QApplication::translate("Calculator", "AC", Q_NULLPTR));
        pushButton_close->setText(QApplication::translate("Calculator", "CLOSE", Q_NULLPTR));
        label_sign->setText(QString());
        label->setText(QApplication::translate("Calculator", "* Myeongju's Calculator *", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Calculator: public Ui_Calculator {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CALCULATOR_H
