#include "macrokey.h"
#include "ui_macrokey.h"
#include "keymap.h"
#include <QKeyEvent>
#include <QDebug>

MacroKey::MacroKey(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::MacroKey)
{
    ui->setupUi(this);
    keyCodeMapInit();
    QKeyToStrMapInit();
}

MacroKey::~MacroKey()
{
    delete ui;
}

void MacroKey::keyPressEvent(QKeyEvent *event)
{
    QString Key = nullptr;
//    qDebug()<<event->key();
    qDebug()<<event->modifiers();

//    QMap<int,int>::iterator it; // 遍历Map
//    for(it = keycode.begin();it != keycode.end();++it)
//    {
//        qDebug()<<it.key();
//        if(it.key() == event->key())
//        {

//            ui->macroKey0Text->setNum(it.value());
//            break;
//        }
//    }
    switch(macroKey)
    {
        case 0:
            if(QKeyToStr.contains(event->key()))
            {
                ui->macroKey0Text->setText(QKeyToStr[event->key()]);
            }
            if(keycode.contains(event->key()))
            {
                qDebug()<<keycode[event->key()];
//                if(QString(event->key()))
            }
            break;
        case 1:
            if(QKeyToStr.contains(event->key()))
            {
                ui->macroKey1Text->setText(QKeyToStr[event->key()]);
            }
            if(keycode.contains(event->key()))
            {
                qDebug()<<keycode[event->key()];
//                if(QString(event->key()))
            }
            break;
        default: break;
    }
}

void MacroKey::keyReleaseEvent(QKeyEvent *event)
{

}

void MacroKey::on_setMacroKey0Btn_clicked()
{
    macroKey= 0;
}

void MacroKey::on_setMacroKey1Btn_clicked()
{
    macroKey = 1;
}
