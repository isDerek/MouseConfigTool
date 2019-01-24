#ifndef MOUSECONFIGTOOL_H
#define MOUSECONFIGTOOL_H

#include <QMainWindow>
#include "usbreadthread.h"
#include "usermodepro.h"
#include <QThread>
#include <QObject>
#include <QTimer>
namespace Ui {
class MouseConfigTool;
}

class MouseConfigTool : public QMainWindow
{
    Q_OBJECT

public:
    explicit MouseConfigTool(QWidget *parent = nullptr);
    ~MouseConfigTool();
    void getHIDDevceInfo(); // 将 HID 设备信息添加进 List
    void setComboHIDBox(); // 将 HID 信息写入设备下拉框
    void clearHIDDeviceInfoList(); // 清空 HID 设备信息 List
    void setDisplayParams(); // 设置显示参数
    unsigned short HexStrToUShort(QString str, int length); // 16进制字符串转 Ushort
    char ConvertHexChar(char ch); // 字符转 16 进制
    void StringToHex(QString str, QByteArray &sendData); // 字符串转 16 进制
private:
    Ui::MouseConfigTool *ui;
    QStringList HIDDeviceList; // HID 设备显示
    QStringList productList; // 产品信息显示
    QStringList manufacturerList; // 厂商信息显示
    QStringList releaseNumList;// 发布号显示
    QStringList interfaceNumList; // 接口编号显示
    QStringList VIDList; // VID 显示
    QStringList PIDList; // PID 显示
    QStringList usagePageList; // 使用页数显示
    QStringList usageList;  // 使用页显示
    QTimer *rfStatusTmr; // 刷新状态栏，自动刷新端口定时器
    USBReadThread usbReadThread; // 读取 HID 设备消息线程
    UserModePro userModePro; // 用户模式协议类
    bool HIDDeviceIsOpen; // hid 设备是否开启

private slots:
    void slot_rfStatusTmr(); // 刷新 HID 设备定时器
    void slot_getHIDDeviceIsOpen(bool); // 获取 HID 线程返回是否开启了设备槽函数
    void on_on_offBtn_clicked(); // 打开按钮
    void slot_getRevData(QByteArray data); // 获取 HID 的数据槽函数
    void on_clearRevDataBtn_clicked(); // 清空接收区按钮
    void on_clearSendDataBtn_clicked(); // 清空发送区按钮
    void on_sendDataBtn_clicked(); // 发送按钮
    void on_DPIMode1Btn_clicked(); // DPI 400 按钮
    void on_DPIMode2Btn_clicked(); // DPI 800 按钮
    void on_DPIMode3Btn_clicked(); // DPI 1600 按钮
    void on_DPIMode4Btn_clicked(); // DPI 4000 按钮
    void on_RGBMode1Btn_clicked(); // RGB 无灯效按钮
    void on_RGBMode2Btn_clicked(); // RGB 循环灯按钮
    void on_RGBMode3Btn_clicked(); // RGB 呼吸灯按钮
    void on_RGBMode4Btn_clicked(); // RGB 跑马灯按钮
    void on_setConfigModeBtn_clicked(); // 设备进入配置模式按钮
    void on_setNormalModeBtn_clicked(); // 设备进入正常模式按钮
    void on_getCurrentDeviceModeBtn_clicked(); // 设备获取当前设备模式按钮
    void on_getCurrentDPIModeBtn_clicked();
    void on_getCurrentRGBModeBtn_clicked();
    void on_getCurrentPowerBtn_clicked();
};

#endif // MOUSECONFIGTOOL_H
