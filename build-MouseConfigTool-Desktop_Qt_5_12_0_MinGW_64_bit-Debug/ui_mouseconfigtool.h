/********************************************************************************
** Form generated from reading UI file 'mouseconfigtool.ui'
**
** Created by: Qt User Interface Compiler version 5.12.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MOUSECONFIGTOOL_H
#define UI_MOUSECONFIGTOOL_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MouseConfigTool
{
public:
    QWidget *centralWidget;
    QGridLayout *gridLayout_3;
    QGroupBox *groupBox_4;
    QGridLayout *gridLayout;
    QTextEdit *recvDataTextEdit;
    QGroupBox *groupBox;
    QLabel *label;
    QPushButton *on_offBtn;
    QComboBox *comboHIDBox;
    QLabel *label_12;
    QLabel *label_13;
    QLineEdit *VIDLineEdit;
    QLineEdit *PIDLineEdit;
    QGroupBox *groupBox_5;
    QGridLayout *gridLayout_2;
    QPushButton *clearRevDataBtn;
    QPushButton *clearSendDataBtn;
    QTextEdit *sendDataTextEdit;
    QPushButton *sendDataBtn;
    QGroupBox *groupBox_2;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;
    QLabel *label_8;
    QLabel *label_9;
    QLabel *manufacturerText;
    QLabel *productText;
    QLabel *releaseNumText;
    QLabel *interfaceNumText;
    QLabel *VIDText;
    QLabel *PIDText;
    QLabel *usagePageText;
    QLabel *usageText;
    QGroupBox *groupBox_3;
    QLabel *label_10;
    QLineEdit *rpIDLineEdit;
    QLabel *label_11;
    QLineEdit *sendBytesLineEdit;
    QPushButton *DPIMode1Btn;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MouseConfigTool)
    {
        if (MouseConfigTool->objectName().isEmpty())
            MouseConfigTool->setObjectName(QString::fromUtf8("MouseConfigTool"));
        MouseConfigTool->resize(867, 701);
        centralWidget = new QWidget(MouseConfigTool);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        gridLayout_3 = new QGridLayout(centralWidget);
        gridLayout_3->setSpacing(6);
        gridLayout_3->setContentsMargins(11, 11, 11, 11);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        groupBox_4 = new QGroupBox(centralWidget);
        groupBox_4->setObjectName(QString::fromUtf8("groupBox_4"));
        gridLayout = new QGridLayout(groupBox_4);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        recvDataTextEdit = new QTextEdit(groupBox_4);
        recvDataTextEdit->setObjectName(QString::fromUtf8("recvDataTextEdit"));

        gridLayout->addWidget(recvDataTextEdit, 0, 0, 1, 1);


        gridLayout_3->addWidget(groupBox_4, 0, 1, 2, 1);

        groupBox = new QGroupBox(centralWidget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setMinimumSize(QSize(350, 200));
        groupBox->setMaximumSize(QSize(350, 200));
        label = new QLabel(groupBox);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(20, 30, 72, 21));
        on_offBtn = new QPushButton(groupBox);
        on_offBtn->setObjectName(QString::fromUtf8("on_offBtn"));
        on_offBtn->setGeometry(QRect(10, 130, 93, 28));
        comboHIDBox = new QComboBox(groupBox);
        comboHIDBox->setObjectName(QString::fromUtf8("comboHIDBox"));
        comboHIDBox->setGeometry(QRect(100, 30, 171, 22));
        label_12 = new QLabel(groupBox);
        label_12->setObjectName(QString::fromUtf8("label_12"));
        label_12->setGeometry(QRect(20, 60, 72, 21));
        label_13 = new QLabel(groupBox);
        label_13->setObjectName(QString::fromUtf8("label_13"));
        label_13->setGeometry(QRect(20, 90, 72, 21));
        VIDLineEdit = new QLineEdit(groupBox);
        VIDLineEdit->setObjectName(QString::fromUtf8("VIDLineEdit"));
        VIDLineEdit->setGeometry(QRect(100, 60, 113, 21));
        PIDLineEdit = new QLineEdit(groupBox);
        PIDLineEdit->setObjectName(QString::fromUtf8("PIDLineEdit"));
        PIDLineEdit->setGeometry(QRect(100, 90, 113, 21));

        gridLayout_3->addWidget(groupBox, 0, 0, 1, 1);

        groupBox_5 = new QGroupBox(centralWidget);
        groupBox_5->setObjectName(QString::fromUtf8("groupBox_5"));
        groupBox_5->setMinimumSize(QSize(0, 100));
        groupBox_5->setMaximumSize(QSize(16777215, 100));
        gridLayout_2 = new QGridLayout(groupBox_5);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        clearRevDataBtn = new QPushButton(groupBox_5);
        clearRevDataBtn->setObjectName(QString::fromUtf8("clearRevDataBtn"));

        gridLayout_2->addWidget(clearRevDataBtn, 0, 0, 1, 1);

        clearSendDataBtn = new QPushButton(groupBox_5);
        clearSendDataBtn->setObjectName(QString::fromUtf8("clearSendDataBtn"));

        gridLayout_2->addWidget(clearSendDataBtn, 1, 0, 1, 1);

        sendDataTextEdit = new QTextEdit(groupBox_5);
        sendDataTextEdit->setObjectName(QString::fromUtf8("sendDataTextEdit"));

        gridLayout_2->addWidget(sendDataTextEdit, 0, 1, 2, 1);

        sendDataBtn = new QPushButton(groupBox_5);
        sendDataBtn->setObjectName(QString::fromUtf8("sendDataBtn"));

        gridLayout_2->addWidget(sendDataBtn, 0, 2, 1, 1);


        gridLayout_3->addWidget(groupBox_5, 2, 1, 1, 1);

        groupBox_2 = new QGroupBox(centralWidget);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        groupBox_2->setMinimumSize(QSize(350, 300));
        groupBox_2->setMaximumSize(QSize(350, 300));
        label_2 = new QLabel(groupBox_2);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(20, 30, 121, 16));
        label_3 = new QLabel(groupBox_2);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(20, 60, 121, 16));
        label_4 = new QLabel(groupBox_2);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(20, 90, 121, 16));
        label_5 = new QLabel(groupBox_2);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(20, 120, 121, 16));
        label_6 = new QLabel(groupBox_2);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(20, 150, 121, 16));
        label_7 = new QLabel(groupBox_2);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(20, 180, 121, 16));
        label_8 = new QLabel(groupBox_2);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(20, 210, 121, 16));
        label_9 = new QLabel(groupBox_2);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setGeometry(QRect(20, 240, 121, 16));
        manufacturerText = new QLabel(groupBox_2);
        manufacturerText->setObjectName(QString::fromUtf8("manufacturerText"));
        manufacturerText->setGeometry(QRect(140, 30, 72, 15));
        productText = new QLabel(groupBox_2);
        productText->setObjectName(QString::fromUtf8("productText"));
        productText->setGeometry(QRect(140, 60, 72, 15));
        releaseNumText = new QLabel(groupBox_2);
        releaseNumText->setObjectName(QString::fromUtf8("releaseNumText"));
        releaseNumText->setGeometry(QRect(140, 90, 72, 15));
        interfaceNumText = new QLabel(groupBox_2);
        interfaceNumText->setObjectName(QString::fromUtf8("interfaceNumText"));
        interfaceNumText->setGeometry(QRect(140, 120, 72, 15));
        VIDText = new QLabel(groupBox_2);
        VIDText->setObjectName(QString::fromUtf8("VIDText"));
        VIDText->setGeometry(QRect(140, 150, 72, 15));
        PIDText = new QLabel(groupBox_2);
        PIDText->setObjectName(QString::fromUtf8("PIDText"));
        PIDText->setGeometry(QRect(140, 180, 72, 15));
        usagePageText = new QLabel(groupBox_2);
        usagePageText->setObjectName(QString::fromUtf8("usagePageText"));
        usagePageText->setGeometry(QRect(140, 210, 72, 15));
        usageText = new QLabel(groupBox_2);
        usageText->setObjectName(QString::fromUtf8("usageText"));
        usageText->setGeometry(QRect(140, 240, 72, 15));

        gridLayout_3->addWidget(groupBox_2, 1, 0, 1, 1);

        groupBox_3 = new QGroupBox(centralWidget);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        groupBox_3->setMinimumSize(QSize(350, 100));
        groupBox_3->setMaximumSize(QSize(350, 100));
        label_10 = new QLabel(groupBox_3);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setGeometry(QRect(20, 30, 72, 21));
        rpIDLineEdit = new QLineEdit(groupBox_3);
        rpIDLineEdit->setObjectName(QString::fromUtf8("rpIDLineEdit"));
        rpIDLineEdit->setGeometry(QRect(120, 30, 81, 21));
        label_11 = new QLabel(groupBox_3);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setGeometry(QRect(20, 60, 81, 16));
        sendBytesLineEdit = new QLineEdit(groupBox_3);
        sendBytesLineEdit->setObjectName(QString::fromUtf8("sendBytesLineEdit"));
        sendBytesLineEdit->setGeometry(QRect(120, 60, 81, 21));

        gridLayout_3->addWidget(groupBox_3, 2, 0, 1, 1);

        DPIMode1Btn = new QPushButton(centralWidget);
        DPIMode1Btn->setObjectName(QString::fromUtf8("DPIMode1Btn"));

        gridLayout_3->addWidget(DPIMode1Btn, 1, 2, 1, 1);

        MouseConfigTool->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MouseConfigTool);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 867, 26));
        MouseConfigTool->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MouseConfigTool);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        MouseConfigTool->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MouseConfigTool);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MouseConfigTool->setStatusBar(statusBar);

        retranslateUi(MouseConfigTool);

        QMetaObject::connectSlotsByName(MouseConfigTool);
    } // setupUi

    void retranslateUi(QMainWindow *MouseConfigTool)
    {
        MouseConfigTool->setWindowTitle(QApplication::translate("MouseConfigTool", "MouseConfigTool", nullptr));
        groupBox_4->setTitle(QApplication::translate("MouseConfigTool", "\346\225\260\346\215\256\346\216\245\346\224\266\347\252\227\345\217\243", nullptr));
        groupBox->setTitle(QApplication::translate("MouseConfigTool", "USB \351\205\215\347\275\256", nullptr));
        label->setText(QApplication::translate("MouseConfigTool", "HID \350\256\276\345\244\207", nullptr));
        on_offBtn->setText(QApplication::translate("MouseConfigTool", "\346\211\223\345\274\200", nullptr));
        label_12->setText(QApplication::translate("MouseConfigTool", "VID\357\274\232", nullptr));
        label_13->setText(QApplication::translate("MouseConfigTool", "PID:", nullptr));
        groupBox_5->setTitle(QApplication::translate("MouseConfigTool", "\346\225\260\346\215\256\345\217\221\351\200\201\347\252\227\345\217\243", nullptr));
        clearRevDataBtn->setText(QApplication::translate("MouseConfigTool", "\346\270\205\347\251\272\346\216\245\346\224\266\345\214\272", nullptr));
        clearSendDataBtn->setText(QApplication::translate("MouseConfigTool", "\346\270\205\347\251\272\345\217\221\351\200\201\345\214\272", nullptr));
        sendDataBtn->setText(QApplication::translate("MouseConfigTool", "\345\217\221\351\200\201", nullptr));
        groupBox_2->setTitle(QApplication::translate("MouseConfigTool", "Display \345\217\202\346\225\260", nullptr));
        label_2->setText(QApplication::translate("MouseConfigTool", "Manufacturer\357\274\232", nullptr));
        label_3->setText(QApplication::translate("MouseConfigTool", "Product\357\274\232", nullptr));
        label_4->setText(QApplication::translate("MouseConfigTool", "Release\357\274\232", nullptr));
        label_5->setText(QApplication::translate("MouseConfigTool", "Interface\357\274\232", nullptr));
        label_6->setText(QApplication::translate("MouseConfigTool", "Vendor_ID\357\274\232", nullptr));
        label_7->setText(QApplication::translate("MouseConfigTool", "Product_ID\357\274\232", nullptr));
        label_8->setText(QApplication::translate("MouseConfigTool", "usage_page\357\274\232", nullptr));
        label_9->setText(QApplication::translate("MouseConfigTool", "usage\357\274\232", nullptr));
        manufacturerText->setText(QApplication::translate("MouseConfigTool", "TextLabel", nullptr));
        productText->setText(QApplication::translate("MouseConfigTool", "TextLabel", nullptr));
        releaseNumText->setText(QApplication::translate("MouseConfigTool", "TextLabel", nullptr));
        interfaceNumText->setText(QApplication::translate("MouseConfigTool", "TextLabel", nullptr));
        VIDText->setText(QApplication::translate("MouseConfigTool", "TextLabel", nullptr));
        PIDText->setText(QApplication::translate("MouseConfigTool", "TextLabel", nullptr));
        usagePageText->setText(QApplication::translate("MouseConfigTool", "TextLabel", nullptr));
        usageText->setText(QApplication::translate("MouseConfigTool", "TextLabel", nullptr));
        groupBox_3->setTitle(QApplication::translate("MouseConfigTool", "\345\217\221\351\200\201\350\256\276\347\275\256", nullptr));
        label_10->setText(QApplication::translate("MouseConfigTool", "ReportID\357\274\232", nullptr));
        label_11->setText(QApplication::translate("MouseConfigTool", "\345\217\221\351\200\201\345\255\227\350\212\202\346\225\260\357\274\232", nullptr));
        DPIMode1Btn->setText(QApplication::translate("MouseConfigTool", "100", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MouseConfigTool: public Ui_MouseConfigTool {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MOUSECONFIGTOOL_H
