/********************************************************************************
** Form generated from reading UI file 'macrokey.ui'
**
** Created by: Qt User Interface Compiler version 5.12.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MACROKEY_H
#define UI_MACROKEY_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_MacroKey
{
public:
    QDialogButtonBox *buttonBox;
    QPushButton *setMacroKey0Btn;
    QPushButton *setMacroKey1Btn;
    QLabel *macroKey0Text;
    QLabel *macroKey1Text;

    void setupUi(QDialog *MacroKey)
    {
        if (MacroKey->objectName().isEmpty())
            MacroKey->setObjectName(QString::fromUtf8("MacroKey"));
        MacroKey->resize(400, 300);
        buttonBox = new QDialogButtonBox(MacroKey);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setGeometry(QRect(30, 240, 341, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        setMacroKey0Btn = new QPushButton(MacroKey);
        setMacroKey0Btn->setObjectName(QString::fromUtf8("setMacroKey0Btn"));
        setMacroKey0Btn->setGeometry(QRect(30, 50, 93, 31));
        setMacroKey1Btn = new QPushButton(MacroKey);
        setMacroKey1Btn->setObjectName(QString::fromUtf8("setMacroKey1Btn"));
        setMacroKey1Btn->setGeometry(QRect(30, 110, 93, 31));
        macroKey0Text = new QLabel(MacroKey);
        macroKey0Text->setObjectName(QString::fromUtf8("macroKey0Text"));
        macroKey0Text->setGeometry(QRect(170, 54, 72, 21));
        macroKey1Text = new QLabel(MacroKey);
        macroKey1Text->setObjectName(QString::fromUtf8("macroKey1Text"));
        macroKey1Text->setGeometry(QRect(170, 114, 72, 21));

        retranslateUi(MacroKey);
        QObject::connect(buttonBox, SIGNAL(rejected()), MacroKey, SLOT(reject()));
        QObject::connect(buttonBox, SIGNAL(accepted()), MacroKey, SLOT(accept()));

        QMetaObject::connectSlotsByName(MacroKey);
    } // setupUi

    void retranslateUi(QDialog *MacroKey)
    {
        MacroKey->setWindowTitle(QApplication::translate("MacroKey", "Dialog", nullptr));
        setMacroKey0Btn->setText(QApplication::translate("MacroKey", "\344\276\247\351\224\256 1", nullptr));
        setMacroKey1Btn->setText(QApplication::translate("MacroKey", "\344\276\247\351\224\256 2", nullptr));
        macroKey0Text->setText(QApplication::translate("MacroKey", "TextLabel", nullptr));
        macroKey1Text->setText(QApplication::translate("MacroKey", "TextLabel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MacroKey: public Ui_MacroKey {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MACROKEY_H
