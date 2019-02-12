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
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MouseConfigTool
{
public:
    QWidget *centralWidget;
    QGridLayout *gridLayout_3;
    QGroupBox *groupBox;
    QLabel *label;
    QPushButton *on_offBtn;
    QComboBox *comboHIDBox;
    QLabel *label_12;
    QLabel *label_13;
    QLineEdit *VIDLineEdit;
    QLineEdit *PIDLineEdit;
    QGroupBox *groupBox_11;
    QVBoxLayout *verticalLayout_6;
    QPushButton *getMultiKeyBtn;
    QGroupBox *groupBox_12;
    QVBoxLayout *verticalLayout_8;
    QPushButton *setConfigModeBtn;
    QPushButton *setNormalModeBtn;
    QGroupBox *groupBox_6;
    QVBoxLayout *verticalLayout;
    QPushButton *DPIMode1Btn;
    QPushButton *DPIMode2Btn;
    QPushButton *DPIMode3Btn;
    QPushButton *DPIMode4Btn;
    QGroupBox *groupBox_10;
    QVBoxLayout *verticalLayout_5;
    QPushButton *setMultiKeyBtn;
    QGroupBox *groupBox_3;
    QLabel *label_10;
    QLineEdit *rpIDLineEdit;
    QLabel *label_11;
    QLineEdit *sendBytesLineEdit;
    QGroupBox *groupBox_7;
    QVBoxLayout *verticalLayout_2;
    QPushButton *RGBMode1Btn;
    QPushButton *RGBMode2Btn;
    QPushButton *RGBMode3Btn;
    QPushButton *RGBMode4Btn;
    QGroupBox *groupBox_14;
    QPushButton *getCurrentPowerBtn;
    QGroupBox *groupBox_13;
    QVBoxLayout *verticalLayout_7;
    QPushButton *getCurrentDeviceModeBtn;
    QGroupBox *groupBox_8;
    QVBoxLayout *verticalLayout_3;
    QPushButton *getCurrentDPIModeBtn;
    QGroupBox *groupBox_9;
    QVBoxLayout *verticalLayout_4;
    QPushButton *getCurrentRGBModeBtn;
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
    QGroupBox *groupBox_4;
    QGridLayout *gridLayout;
    QTextEdit *recvDataTextEdit;
    QGroupBox *groupBox_5;
    QGridLayout *gridLayout_2;
    QPushButton *clearRevDataBtn;
    QPushButton *clearSendDataBtn;
    QTextEdit *sendDataTextEdit;
    QPushButton *sendDataBtn;
    QGroupBox *groupBox_15;
    QVBoxLayout *verticalLayout_9;
    QPushButton *updateButton;
    QPushButton *selectHexFileBtn;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MouseConfigTool)
    {
        if (MouseConfigTool->objectName().isEmpty())
            MouseConfigTool->setObjectName(QString::fromUtf8("MouseConfigTool"));
        MouseConfigTool->resize(1353, 921);
        centralWidget = new QWidget(MouseConfigTool);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        gridLayout_3 = new QGridLayout(centralWidget);
        gridLayout_3->setSpacing(6);
        gridLayout_3->setContentsMargins(11, 11, 11, 11);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
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

        gridLayout_3->addWidget(groupBox, 0, 0, 2, 2);

        groupBox_11 = new QGroupBox(centralWidget);
        groupBox_11->setObjectName(QString::fromUtf8("groupBox_11"));
        groupBox_11->setMaximumSize(QSize(16777215, 100));
        verticalLayout_6 = new QVBoxLayout(groupBox_11);
        verticalLayout_6->setSpacing(6);
        verticalLayout_6->setContentsMargins(11, 11, 11, 11);
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        getMultiKeyBtn = new QPushButton(groupBox_11);
        getMultiKeyBtn->setObjectName(QString::fromUtf8("getMultiKeyBtn"));

        verticalLayout_6->addWidget(getMultiKeyBtn);


        gridLayout_3->addWidget(groupBox_11, 1, 4, 1, 1);

        groupBox_12 = new QGroupBox(centralWidget);
        groupBox_12->setObjectName(QString::fromUtf8("groupBox_12"));
        groupBox_12->setMaximumSize(QSize(16777215, 100));
        verticalLayout_8 = new QVBoxLayout(groupBox_12);
        verticalLayout_8->setSpacing(6);
        verticalLayout_8->setContentsMargins(11, 11, 11, 11);
        verticalLayout_8->setObjectName(QString::fromUtf8("verticalLayout_8"));
        setConfigModeBtn = new QPushButton(groupBox_12);
        setConfigModeBtn->setObjectName(QString::fromUtf8("setConfigModeBtn"));

        verticalLayout_8->addWidget(setConfigModeBtn);

        setNormalModeBtn = new QPushButton(groupBox_12);
        setNormalModeBtn->setObjectName(QString::fromUtf8("setNormalModeBtn"));

        verticalLayout_8->addWidget(setNormalModeBtn);


        gridLayout_3->addWidget(groupBox_12, 0, 3, 1, 1);

        groupBox_6 = new QGroupBox(centralWidget);
        groupBox_6->setObjectName(QString::fromUtf8("groupBox_6"));
        verticalLayout = new QVBoxLayout(groupBox_6);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        DPIMode1Btn = new QPushButton(groupBox_6);
        DPIMode1Btn->setObjectName(QString::fromUtf8("DPIMode1Btn"));

        verticalLayout->addWidget(DPIMode1Btn);

        DPIMode2Btn = new QPushButton(groupBox_6);
        DPIMode2Btn->setObjectName(QString::fromUtf8("DPIMode2Btn"));

        verticalLayout->addWidget(DPIMode2Btn);

        DPIMode3Btn = new QPushButton(groupBox_6);
        DPIMode3Btn->setObjectName(QString::fromUtf8("DPIMode3Btn"));

        verticalLayout->addWidget(DPIMode3Btn);

        DPIMode4Btn = new QPushButton(groupBox_6);
        DPIMode4Btn->setObjectName(QString::fromUtf8("DPIMode4Btn"));

        verticalLayout->addWidget(DPIMode4Btn);


        gridLayout_3->addWidget(groupBox_6, 2, 3, 1, 1);

        groupBox_10 = new QGroupBox(centralWidget);
        groupBox_10->setObjectName(QString::fromUtf8("groupBox_10"));
        groupBox_10->setMaximumSize(QSize(16777215, 100));
        verticalLayout_5 = new QVBoxLayout(groupBox_10);
        verticalLayout_5->setSpacing(6);
        verticalLayout_5->setContentsMargins(11, 11, 11, 11);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        setMultiKeyBtn = new QPushButton(groupBox_10);
        setMultiKeyBtn->setObjectName(QString::fromUtf8("setMultiKeyBtn"));

        verticalLayout_5->addWidget(setMultiKeyBtn);


        gridLayout_3->addWidget(groupBox_10, 0, 4, 1, 1);

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

        gridLayout_3->addWidget(groupBox_3, 3, 0, 1, 1);

        groupBox_7 = new QGroupBox(centralWidget);
        groupBox_7->setObjectName(QString::fromUtf8("groupBox_7"));
        verticalLayout_2 = new QVBoxLayout(groupBox_7);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        RGBMode1Btn = new QPushButton(groupBox_7);
        RGBMode1Btn->setObjectName(QString::fromUtf8("RGBMode1Btn"));

        verticalLayout_2->addWidget(RGBMode1Btn);

        RGBMode2Btn = new QPushButton(groupBox_7);
        RGBMode2Btn->setObjectName(QString::fromUtf8("RGBMode2Btn"));

        verticalLayout_2->addWidget(RGBMode2Btn);

        RGBMode3Btn = new QPushButton(groupBox_7);
        RGBMode3Btn->setObjectName(QString::fromUtf8("RGBMode3Btn"));

        verticalLayout_2->addWidget(RGBMode3Btn);

        RGBMode4Btn = new QPushButton(groupBox_7);
        RGBMode4Btn->setObjectName(QString::fromUtf8("RGBMode4Btn"));

        verticalLayout_2->addWidget(RGBMode4Btn);


        gridLayout_3->addWidget(groupBox_7, 2, 4, 1, 1);

        groupBox_14 = new QGroupBox(centralWidget);
        groupBox_14->setObjectName(QString::fromUtf8("groupBox_14"));
        getCurrentPowerBtn = new QPushButton(groupBox_14);
        getCurrentPowerBtn->setObjectName(QString::fromUtf8("getCurrentPowerBtn"));
        getCurrentPowerBtn->setGeometry(QRect(30, 30, 93, 28));

        gridLayout_3->addWidget(groupBox_14, 4, 3, 1, 1);

        groupBox_13 = new QGroupBox(centralWidget);
        groupBox_13->setObjectName(QString::fromUtf8("groupBox_13"));
        groupBox_13->setMaximumSize(QSize(16777215, 100));
        verticalLayout_7 = new QVBoxLayout(groupBox_13);
        verticalLayout_7->setSpacing(6);
        verticalLayout_7->setContentsMargins(11, 11, 11, 11);
        verticalLayout_7->setObjectName(QString::fromUtf8("verticalLayout_7"));
        getCurrentDeviceModeBtn = new QPushButton(groupBox_13);
        getCurrentDeviceModeBtn->setObjectName(QString::fromUtf8("getCurrentDeviceModeBtn"));

        verticalLayout_7->addWidget(getCurrentDeviceModeBtn);


        gridLayout_3->addWidget(groupBox_13, 1, 3, 1, 1);

        groupBox_8 = new QGroupBox(centralWidget);
        groupBox_8->setObjectName(QString::fromUtf8("groupBox_8"));
        verticalLayout_3 = new QVBoxLayout(groupBox_8);
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setContentsMargins(11, 11, 11, 11);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        getCurrentDPIModeBtn = new QPushButton(groupBox_8);
        getCurrentDPIModeBtn->setObjectName(QString::fromUtf8("getCurrentDPIModeBtn"));

        verticalLayout_3->addWidget(getCurrentDPIModeBtn);


        gridLayout_3->addWidget(groupBox_8, 3, 3, 1, 1);

        groupBox_9 = new QGroupBox(centralWidget);
        groupBox_9->setObjectName(QString::fromUtf8("groupBox_9"));
        verticalLayout_4 = new QVBoxLayout(groupBox_9);
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setContentsMargins(11, 11, 11, 11);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        getCurrentRGBModeBtn = new QPushButton(groupBox_9);
        getCurrentRGBModeBtn->setObjectName(QString::fromUtf8("getCurrentRGBModeBtn"));

        verticalLayout_4->addWidget(getCurrentRGBModeBtn);


        gridLayout_3->addWidget(groupBox_9, 3, 4, 1, 1);

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

        gridLayout_3->addWidget(groupBox_2, 2, 0, 1, 1);

        groupBox_4 = new QGroupBox(centralWidget);
        groupBox_4->setObjectName(QString::fromUtf8("groupBox_4"));
        gridLayout = new QGridLayout(groupBox_4);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        recvDataTextEdit = new QTextEdit(groupBox_4);
        recvDataTextEdit->setObjectName(QString::fromUtf8("recvDataTextEdit"));
        recvDataTextEdit->setMinimumSize(QSize(600, 0));

        gridLayout->addWidget(recvDataTextEdit, 0, 0, 1, 2);


        gridLayout_3->addWidget(groupBox_4, 0, 2, 4, 1);

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


        gridLayout_3->addWidget(groupBox_5, 4, 2, 1, 1);

        groupBox_15 = new QGroupBox(centralWidget);
        groupBox_15->setObjectName(QString::fromUtf8("groupBox_15"));
        verticalLayout_9 = new QVBoxLayout(groupBox_15);
        verticalLayout_9->setSpacing(6);
        verticalLayout_9->setContentsMargins(11, 11, 11, 11);
        verticalLayout_9->setObjectName(QString::fromUtf8("verticalLayout_9"));
        updateButton = new QPushButton(groupBox_15);
        updateButton->setObjectName(QString::fromUtf8("updateButton"));

        verticalLayout_9->addWidget(updateButton);

        selectHexFileBtn = new QPushButton(groupBox_15);
        selectHexFileBtn->setObjectName(QString::fromUtf8("selectHexFileBtn"));

        verticalLayout_9->addWidget(selectHexFileBtn);

        pushButton = new QPushButton(groupBox_15);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        verticalLayout_9->addWidget(pushButton);

        pushButton_2 = new QPushButton(groupBox_15);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));

        verticalLayout_9->addWidget(pushButton_2);

        pushButton_3 = new QPushButton(groupBox_15);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));

        verticalLayout_9->addWidget(pushButton_3);

        pushButton_4 = new QPushButton(groupBox_15);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));

        verticalLayout_9->addWidget(pushButton_4);


        gridLayout_3->addWidget(groupBox_15, 4, 4, 1, 1);

        MouseConfigTool->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MouseConfigTool);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1353, 26));
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
        groupBox->setTitle(QApplication::translate("MouseConfigTool", "USB \351\205\215\347\275\256", nullptr));
        label->setText(QApplication::translate("MouseConfigTool", "HID \350\256\276\345\244\207", nullptr));
        on_offBtn->setText(QApplication::translate("MouseConfigTool", "\346\211\223\345\274\200", nullptr));
        label_12->setText(QApplication::translate("MouseConfigTool", "VID\357\274\232", nullptr));
        label_13->setText(QApplication::translate("MouseConfigTool", "PID:", nullptr));
        groupBox_11->setTitle(QApplication::translate("MouseConfigTool", "\350\216\267\345\217\226\346\214\211\351\224\256\345\256\217", nullptr));
        getMultiKeyBtn->setText(QApplication::translate("MouseConfigTool", "\345\275\223\345\211\215\344\276\247\351\224\256", nullptr));
        groupBox_12->setTitle(QApplication::translate("MouseConfigTool", "\350\256\276\347\275\256 Driver \346\250\241\345\274\217", nullptr));
        setConfigModeBtn->setText(QApplication::translate("MouseConfigTool", "\351\205\215\347\275\256\346\250\241\345\274\217", nullptr));
        setNormalModeBtn->setText(QApplication::translate("MouseConfigTool", "\346\255\243\345\270\270\346\250\241\345\274\217", nullptr));
        groupBox_6->setTitle(QApplication::translate("MouseConfigTool", "\350\256\276\347\275\256\345\275\223\345\211\215 DPI", nullptr));
        DPIMode1Btn->setText(QApplication::translate("MouseConfigTool", "400", nullptr));
        DPIMode2Btn->setText(QApplication::translate("MouseConfigTool", "800", nullptr));
        DPIMode3Btn->setText(QApplication::translate("MouseConfigTool", "1600", nullptr));
        DPIMode4Btn->setText(QApplication::translate("MouseConfigTool", "4000", nullptr));
        groupBox_10->setTitle(QApplication::translate("MouseConfigTool", "\350\256\276\347\275\256\346\214\211\351\224\256\345\256\217", nullptr));
        setMultiKeyBtn->setText(QApplication::translate("MouseConfigTool", "\346\214\211\351\224\256\345\256\217", nullptr));
        groupBox_3->setTitle(QApplication::translate("MouseConfigTool", "\345\217\221\351\200\201\350\256\276\347\275\256", nullptr));
        label_10->setText(QApplication::translate("MouseConfigTool", "ReportID\357\274\232", nullptr));
        label_11->setText(QApplication::translate("MouseConfigTool", "\345\217\221\351\200\201\345\255\227\350\212\202\346\225\260\357\274\232", nullptr));
        groupBox_7->setTitle(QApplication::translate("MouseConfigTool", "\350\256\276\347\275\256\345\275\223\345\211\215\347\201\257\346\225\210", nullptr));
        RGBMode1Btn->setText(QApplication::translate("MouseConfigTool", "\346\227\240\347\201\257\346\225\210", nullptr));
        RGBMode2Btn->setText(QApplication::translate("MouseConfigTool", "\345\276\252\347\216\257\347\201\257", nullptr));
        RGBMode3Btn->setText(QApplication::translate("MouseConfigTool", "\345\221\274\345\220\270\347\201\257", nullptr));
        RGBMode4Btn->setText(QApplication::translate("MouseConfigTool", "\350\267\221\351\251\254\347\201\257", nullptr));
        groupBox_14->setTitle(QApplication::translate("MouseConfigTool", "\350\216\267\345\217\226\345\275\223\345\211\215\347\224\265\351\207\217", nullptr));
        getCurrentPowerBtn->setText(QApplication::translate("MouseConfigTool", "\345\275\223\345\211\215\347\224\265\351\207\217", nullptr));
        groupBox_13->setTitle(QApplication::translate("MouseConfigTool", "\350\216\267\345\217\226\345\275\223\345\211\215 Driver \346\250\241\345\274\217", nullptr));
        getCurrentDeviceModeBtn->setText(QApplication::translate("MouseConfigTool", "\345\275\223\345\211\215\346\250\241\345\274\217", nullptr));
        groupBox_8->setTitle(QApplication::translate("MouseConfigTool", "\350\216\267\345\217\226\345\275\223\345\211\215 DPI", nullptr));
        getCurrentDPIModeBtn->setText(QApplication::translate("MouseConfigTool", "\345\275\223\345\211\215 DPI", nullptr));
        groupBox_9->setTitle(QApplication::translate("MouseConfigTool", "\350\216\267\345\217\226\345\275\223\345\211\215\347\201\257\346\225\210", nullptr));
        getCurrentRGBModeBtn->setText(QApplication::translate("MouseConfigTool", "\345\275\223\345\211\215\347\201\257\346\225\210", nullptr));
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
        groupBox_4->setTitle(QApplication::translate("MouseConfigTool", "\346\225\260\346\215\256\346\216\245\346\224\266\347\252\227\345\217\243", nullptr));
        groupBox_5->setTitle(QApplication::translate("MouseConfigTool", "\346\225\260\346\215\256\345\217\221\351\200\201\347\252\227\345\217\243", nullptr));
        clearRevDataBtn->setText(QApplication::translate("MouseConfigTool", "\346\270\205\347\251\272\346\216\245\346\224\266\345\214\272", nullptr));
        clearSendDataBtn->setText(QApplication::translate("MouseConfigTool", "\346\270\205\347\251\272\345\217\221\351\200\201\345\214\272", nullptr));
        sendDataBtn->setText(QApplication::translate("MouseConfigTool", "\345\217\221\351\200\201", nullptr));
        groupBox_15->setTitle(QApplication::translate("MouseConfigTool", "USB \345\215\207\347\272\247", nullptr));
        updateButton->setText(QApplication::translate("MouseConfigTool", "\345\215\207\347\272\247", nullptr));
        selectHexFileBtn->setText(QApplication::translate("MouseConfigTool", "\351\200\211\346\213\251\345\215\207\347\272\247\346\226\207\344\273\266", nullptr));
        pushButton->setText(QApplication::translate("MouseConfigTool", "\350\277\233\345\205\245 BLMode", nullptr));
        pushButton_2->setText(QApplication::translate("MouseConfigTool", "\346\233\264\346\226\260\347\211\210\346\234\254", nullptr));
        pushButton_3->setText(QApplication::translate("MouseConfigTool", "\345\217\221\351\200\201\346\225\260\346\215\256", nullptr));
        pushButton_4->setText(QApplication::translate("MouseConfigTool", "\351\200\200\345\207\272", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MouseConfigTool: public Ui_MouseConfigTool {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MOUSECONFIGTOOL_H
