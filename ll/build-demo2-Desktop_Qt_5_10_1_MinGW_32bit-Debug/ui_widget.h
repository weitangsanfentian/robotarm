/********************************************************************************
** Form generated from reading UI file 'widget.ui'
**
** Created by: Qt User Interface Compiler version 5.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_H
#define UI_WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QGridLayout *gridLayout_2;
    QLabel *label_8;
    QGridLayout *gridLayout;
    QPushButton *pushButton;
    QLabel *label_5;
    QPushButton *pushButton_3;
    QLineEdit *lineEdit_3;
    QLineEdit *lineEdit_4;
    QPushButton *pushButton_4;
    QLineEdit *lineEdit;
    QPushButton *pushButton_5;
    QPushButton *pushButton_6;
    QPushButton *pushButton_7;
    QLabel *label_3;
    QPushButton *pushButton_2;
    QLabel *label_2;
    QLabel *label_6;
    QLineEdit *lineEdit_2;
    QPushButton *pushButton_8;
    QSpacerItem *horizontalSpacer;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *pushButton_13;
    QSpacerItem *verticalSpacer;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QStringLiteral("Widget"));
        Widget->resize(1270, 688);
        gridLayout_2 = new QGridLayout(Widget);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        label_8 = new QLabel(Widget);
        label_8->setObjectName(QStringLiteral("label_8"));
        QFont font;
        font.setFamily(QStringLiteral("Agency FB"));
        font.setPointSize(26);
        label_8->setFont(font);

        gridLayout_2->addWidget(label_8, 0, 0, 1, 1);

        gridLayout = new QGridLayout();
        gridLayout->setSpacing(6);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        pushButton = new QPushButton(Widget);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        gridLayout->addWidget(pushButton, 1, 0, 1, 2);

        label_5 = new QLabel(Widget);
        label_5->setObjectName(QStringLiteral("label_5"));

        gridLayout->addWidget(label_5, 0, 0, 1, 1);

        pushButton_3 = new QPushButton(Widget);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));

        gridLayout->addWidget(pushButton_3, 1, 3, 1, 2);

        lineEdit_3 = new QLineEdit(Widget);
        lineEdit_3->setObjectName(QStringLiteral("lineEdit_3"));

        gridLayout->addWidget(lineEdit_3, 2, 1, 1, 2);

        lineEdit_4 = new QLineEdit(Widget);
        lineEdit_4->setObjectName(QStringLiteral("lineEdit_4"));

        gridLayout->addWidget(lineEdit_4, 2, 4, 1, 2);

        pushButton_4 = new QPushButton(Widget);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));

        gridLayout->addWidget(pushButton_4, 1, 5, 1, 1);

        lineEdit = new QLineEdit(Widget);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));

        gridLayout->addWidget(lineEdit, 0, 1, 1, 2);

        pushButton_5 = new QPushButton(Widget);
        pushButton_5->setObjectName(QStringLiteral("pushButton_5"));

        gridLayout->addWidget(pushButton_5, 3, 0, 1, 2);

        pushButton_6 = new QPushButton(Widget);
        pushButton_6->setObjectName(QStringLiteral("pushButton_6"));

        gridLayout->addWidget(pushButton_6, 3, 2, 1, 1);

        pushButton_7 = new QPushButton(Widget);
        pushButton_7->setObjectName(QStringLiteral("pushButton_7"));

        gridLayout->addWidget(pushButton_7, 3, 3, 1, 2);

        label_3 = new QLabel(Widget);
        label_3->setObjectName(QStringLiteral("label_3"));

        gridLayout->addWidget(label_3, 2, 3, 1, 1);

        pushButton_2 = new QPushButton(Widget);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));

        gridLayout->addWidget(pushButton_2, 1, 2, 1, 1);

        label_2 = new QLabel(Widget);
        label_2->setObjectName(QStringLiteral("label_2"));

        gridLayout->addWidget(label_2, 0, 3, 1, 1);

        label_6 = new QLabel(Widget);
        label_6->setObjectName(QStringLiteral("label_6"));

        gridLayout->addWidget(label_6, 2, 0, 1, 1);

        lineEdit_2 = new QLineEdit(Widget);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));

        gridLayout->addWidget(lineEdit_2, 0, 4, 1, 2);

        pushButton_8 = new QPushButton(Widget);
        pushButton_8->setObjectName(QStringLiteral("pushButton_8"));

        gridLayout->addWidget(pushButton_8, 3, 5, 1, 1);


        gridLayout_2->addLayout(gridLayout, 1, 0, 1, 1);

        horizontalSpacer = new QSpacerItem(434, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer, 1, 1, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(444, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_2, 1, 2, 1, 1);

        pushButton_13 = new QPushButton(Widget);
        pushButton_13->setObjectName(QStringLiteral("pushButton_13"));

        gridLayout_2->addWidget(pushButton_13, 2, 0, 1, 1);

        verticalSpacer = new QSpacerItem(20, 478, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_2->addItem(verticalSpacer, 3, 0, 1, 1);


        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QApplication::translate("Widget", "Widget", nullptr));
        label_8->setText(QApplication::translate("Widget", "\346\234\272\346\242\260\350\207\202\346\216\247\345\210\266\347\263\273\347\273\237", nullptr));
        pushButton->setText(QApplication::translate("Widget", "\345\211\215", nullptr));
        label_5->setText(QApplication::translate("Widget", "\350\210\265\346\234\2721", nullptr));
        pushButton_3->setText(QApplication::translate("Widget", "\344\270\212", nullptr));
        pushButton_4->setText(QApplication::translate("Widget", "\344\270\213", nullptr));
        pushButton_5->setText(QApplication::translate("Widget", "\345\274\261", nullptr));
        pushButton_6->setText(QApplication::translate("Widget", "\345\274\272", nullptr));
        pushButton_7->setText(QApplication::translate("Widget", "\345\217\263", nullptr));
        label_3->setText(QApplication::translate("Widget", "\350\210\265\346\234\2724", nullptr));
        pushButton_2->setText(QApplication::translate("Widget", "\345\220\216", nullptr));
        label_2->setText(QApplication::translate("Widget", "\350\210\265\346\234\2722", nullptr));
        label_6->setText(QApplication::translate("Widget", "\350\210\265\346\234\2723", nullptr));
        pushButton_8->setText(QApplication::translate("Widget", "\345\267\246", nullptr));
        pushButton_13->setText(QApplication::translate("Widget", "\350\277\236\346\216\245\346\234\215\345\212\241\345\231\250", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
