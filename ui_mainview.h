/********************************************************************************
** Form generated from reading UI file 'mainview.ui'
**
** Created by: Qt User Interface Compiler version 6.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINVIEW_H
#define UI_MAINVIEW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include <perceptron.h>
#include <readmnist.h>

QT_BEGIN_NAMESPACE

class Ui_MainView
{
public:
    QHBoxLayout *horizontalLayout_2;
    QVBoxLayout *verticalLayout;
    ReadMNIST *readMNIST;
    QLabel *predictionLbl;
    QLabel *accuracyLbl;
    QFrame *frame_2;
    QVBoxLayout *verticalLayout_3;
    QProgressBar *prBar1;
    QFrame *frame;
    QVBoxLayout *verticalLayout_2;
    QPushButton *saveBtn;
    QPushButton *loadBtn;
    QPushButton *inputBtn;
    QPushButton *rmBtn;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton;
    QSpinBox *spinBox;
    QPushButton *costBtn;
    QPushButton *descentBtn;
    QPushButton *accuracyBtn;
    QPushButton *pushButton_2;
    QSpacerItem *verticalSpacer;
    QScrollArea *scrollArea;
    Perceptron *perceptron;

    void setupUi(QWidget *MainView)
    {
        if (MainView->objectName().isEmpty())
            MainView->setObjectName("MainView");
        MainView->resize(935, 718);
        horizontalLayout_2 = new QHBoxLayout(MainView);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        readMNIST = new ReadMNIST(MainView);
        readMNIST->setObjectName("readMNIST");
        readMNIST->setMinimumSize(QSize(157, 228));

        verticalLayout->addWidget(readMNIST);

        predictionLbl = new QLabel(MainView);
        predictionLbl->setObjectName("predictionLbl");
        predictionLbl->setStyleSheet(QString::fromUtf8("border: 1px solid rgba(5, 255, 5, 0.7);\n"
"border-radius: 5px;\n"
"background-color: rgba(113, 222, 78, 100);\n"
"margin: 2px;\n"
"padding: 3px;"));

        verticalLayout->addWidget(predictionLbl);

        accuracyLbl = new QLabel(MainView);
        accuracyLbl->setObjectName("accuracyLbl");
        QPalette palette;
        QBrush brush(QColor(0, 0, 0, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::WindowText, brush);
        QBrush brush1(QColor(255, 255, 127, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette.setBrush(QPalette::Active, QPalette::Base, brush1);
        palette.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        accuracyLbl->setPalette(palette);
        accuracyLbl->setStyleSheet(QString::fromUtf8("border: 1px solid rgba(5, 5, 5, 0.7);\n"
"border-radius: 5px;\n"
"background-color: rgb(255, 255, 127);\n"
"margin: 3px;\n"
"padding: 2px;\n"
""));

        verticalLayout->addWidget(accuracyLbl);

        frame_2 = new QFrame(MainView);
        frame_2->setObjectName("frame_2");
        frame_2->setFrameShape(QFrame::Shape::StyledPanel);
        frame_2->setFrameShadow(QFrame::Shadow::Raised);
        verticalLayout_3 = new QVBoxLayout(frame_2);
        verticalLayout_3->setObjectName("verticalLayout_3");
        prBar1 = new QProgressBar(frame_2);
        prBar1->setObjectName("prBar1");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(prBar1->sizePolicy().hasHeightForWidth());
        prBar1->setSizePolicy(sizePolicy);
        prBar1->setValue(0);

        verticalLayout_3->addWidget(prBar1);


        verticalLayout->addWidget(frame_2);

        frame = new QFrame(MainView);
        frame->setObjectName("frame");
        frame->setMinimumSize(QSize(0, 140));
        frame->setFrameShape(QFrame::Shape::StyledPanel);
        frame->setFrameShadow(QFrame::Shadow::Raised);
        verticalLayout_2 = new QVBoxLayout(frame);
        verticalLayout_2->setObjectName("verticalLayout_2");
        saveBtn = new QPushButton(frame);
        saveBtn->setObjectName("saveBtn");

        verticalLayout_2->addWidget(saveBtn);

        loadBtn = new QPushButton(frame);
        loadBtn->setObjectName("loadBtn");

        verticalLayout_2->addWidget(loadBtn);

        inputBtn = new QPushButton(frame);
        inputBtn->setObjectName("inputBtn");

        verticalLayout_2->addWidget(inputBtn);

        rmBtn = new QPushButton(frame);
        rmBtn->setObjectName("rmBtn");

        verticalLayout_2->addWidget(rmBtn);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        pushButton = new QPushButton(frame);
        pushButton->setObjectName("pushButton");
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Fixed);
        sizePolicy1.setHorizontalStretch(3);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(pushButton->sizePolicy().hasHeightForWidth());
        pushButton->setSizePolicy(sizePolicy1);

        horizontalLayout->addWidget(pushButton);

        spinBox = new QSpinBox(frame);
        spinBox->setObjectName("spinBox");
        QSizePolicy sizePolicy2(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Fixed);
        sizePolicy2.setHorizontalStretch(1);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(spinBox->sizePolicy().hasHeightForWidth());
        spinBox->setSizePolicy(sizePolicy2);
        spinBox->setMinimum(1);
        spinBox->setMaximum(9999);

        horizontalLayout->addWidget(spinBox);


        verticalLayout_2->addLayout(horizontalLayout);

        costBtn = new QPushButton(frame);
        costBtn->setObjectName("costBtn");

        verticalLayout_2->addWidget(costBtn);

        descentBtn = new QPushButton(frame);
        descentBtn->setObjectName("descentBtn");

        verticalLayout_2->addWidget(descentBtn);

        accuracyBtn = new QPushButton(frame);
        accuracyBtn->setObjectName("accuracyBtn");

        verticalLayout_2->addWidget(accuracyBtn);


        verticalLayout->addWidget(frame);

        pushButton_2 = new QPushButton(MainView);
        pushButton_2->setObjectName("pushButton_2");

        verticalLayout->addWidget(pushButton_2);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout->addItem(verticalSpacer);


        horizontalLayout_2->addLayout(verticalLayout);

        scrollArea = new QScrollArea(MainView);
        scrollArea->setObjectName("scrollArea");
        scrollArea->setWidgetResizable(true);
        perceptron = new Perceptron();
        perceptron->setObjectName("perceptron");
        perceptron->setGeometry(QRect(0, 0, 737, 698));
        scrollArea->setWidget(perceptron);

        horizontalLayout_2->addWidget(scrollArea);


        retranslateUi(MainView);

        QMetaObject::connectSlotsByName(MainView);
    } // setupUi

    void retranslateUi(QWidget *MainView)
    {
        MainView->setWindowTitle(QCoreApplication::translate("MainView", "Neural_Net", nullptr));
        predictionLbl->setText(QCoreApplication::translate("MainView", "-", nullptr));
        accuracyLbl->setText(QCoreApplication::translate("MainView", "-", nullptr));
        saveBtn->setText(QCoreApplication::translate("MainView", "1) Save conf", nullptr));
        loadBtn->setText(QCoreApplication::translate("MainView", "2) Load conf", nullptr));
        inputBtn->setText(QCoreApplication::translate("MainView", "3) Set on input", nullptr));
        rmBtn->setText(QCoreApplication::translate("MainView", "4) Remove last layer", nullptr));
        pushButton->setText(QCoreApplication::translate("MainView", "5) Add Layer", nullptr));
        costBtn->setText(QCoreApplication::translate("MainView", "6) Cost", nullptr));
        descentBtn->setText(QCoreApplication::translate("MainView", "7) Descent", nullptr));
        accuracyBtn->setText(QCoreApplication::translate("MainView", "8) Check accuracy", nullptr));
        pushButton_2->setText(QCoreApplication::translate("MainView", "9) PushButton", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainView: public Ui_MainView {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINVIEW_H
