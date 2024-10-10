/********************************************************************************
** Form generated from reading UI file 'readmnist.ui'
**
** Created by: Qt User Interface Compiler version 6.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_READMNIST_H
#define UI_READMNIST_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "digitviewer.h"

QT_BEGIN_NAMESPACE

class Ui_ReadMNIST
{
public:
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QSpinBox *spinBox;
    QLabel *statusLbl;
    DigitViewer *digitViewer;

    void setupUi(QWidget *ReadMNIST)
    {
        if (ReadMNIST->objectName().isEmpty())
            ReadMNIST->setObjectName("ReadMNIST");
        ReadMNIST->resize(187, 224);
        verticalLayout_2 = new QVBoxLayout(ReadMNIST);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName("verticalLayout");
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName("horizontalLayout");
        spinBox = new QSpinBox(ReadMNIST);
        spinBox->setObjectName("spinBox");
        spinBox->setMaximum(59999);

        horizontalLayout->addWidget(spinBox);


        verticalLayout->addLayout(horizontalLayout);

        statusLbl = new QLabel(ReadMNIST);
        statusLbl->setObjectName("statusLbl");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(statusLbl->sizePolicy().hasHeightForWidth());
        statusLbl->setSizePolicy(sizePolicy);
        QFont font;
        font.setFamilies({QString::fromUtf8("Ubuntu Mono")});
        font.setPointSize(13);
        font.setBold(true);
        statusLbl->setFont(font);
        statusLbl->setStyleSheet(QString::fromUtf8("border: 1px solid rgba(5, 255, 5, 0.7);\n"
"border-radius: 5px;\n"
"background-color: rgba(113, 222, 78, 100);"));
        statusLbl->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        statusLbl->setMargin(3);
        statusLbl->setIndent(11);

        verticalLayout->addWidget(statusLbl);

        digitViewer = new DigitViewer(ReadMNIST);
        digitViewer->setObjectName("digitViewer");

        verticalLayout->addWidget(digitViewer);


        verticalLayout_2->addLayout(verticalLayout);


        retranslateUi(ReadMNIST);
        QObject::connect(spinBox, SIGNAL(valueChanged(int)), ReadMNIST, SLOT(readData(int)));

        QMetaObject::connectSlotsByName(ReadMNIST);
    } // setupUi

    void retranslateUi(QWidget *ReadMNIST)
    {
        ReadMNIST->setWindowTitle(QCoreApplication::translate("ReadMNIST", "ReadMNIST", nullptr));
        statusLbl->setText(QCoreApplication::translate("ReadMNIST", "TextLabel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ReadMNIST: public Ui_ReadMNIST {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_READMNIST_H
