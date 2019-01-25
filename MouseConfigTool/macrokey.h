#ifndef MACROKEY_H
#define MACROKEY_H

#include <QDialog>
#include <QMap>
namespace Ui {
class MacroKey;
}

class MacroKey : public QDialog
{
    Q_OBJECT

public:
    explicit MacroKey(QWidget *parent = nullptr);
    ~MacroKey();

protected:
    void keyPressEvent(QKeyEvent *event);
    void keyReleaseEvent(QKeyEvent *event);

private slots:
    void on_setMacroKey0Btn_clicked();

    void on_setMacroKey1Btn_clicked();

private:
    Ui::MacroKey *ui;
    int macroKey;

};

#endif // MACROKEY_H
