#ifndef USERMODEPRO_H
#define USERMODEPRO_H

#include <QObject>
#include "usbreadthread.h"
class UserModePro
{
public:
    UserModePro();
    QByteArray setReportDataStr(char ReportID,char CMDStatus,char CMDID, char DataLSB,char DataMSB,char DataLength,QByteArray data);
    void postDPIMode1Notify(); // DPI 400 模式发送指令
    void postDPIMode2Notify(); // DPI 800 模式发送指令
    void postDPIMode3Notify(); // DPI 1600 模式发送指令
    void postDPIMode4Notify(); // DPI 4000 模式发送指令
    void postRGBMode1Notify(); // RGB 无灯效模式发送指令
    void postRGBMode2Notify(); // RGB 循环灯模式发送指令
    void postRGBMode3Notify(); // RGB 呼吸灯模式发送指令
    void postRGBMode4Notify(); // RGB 跑马灯模式发送指令
    void postConfigModeNotify(); // 设备进入配置模式
    void postNormalModeNotify(); // 设备进入正常模式
    void getCurrentDeviceMode(); // 获取当前设备模式
    void getCurrentDPI();
private:
    char ReportID = 0; // 协议数据包 ReportID
    char CMDStatus = 0;// 协议数据包 CMD 状态
    char CMDID = 0;// 协议数据包 CMD ID
    char DataLSB = 0;// 协议数据包 数据包数量地位字节
    char DataMSB = 0;// 协议数据包 数据包数量高位字节
    char DataLength = 0;// 协议数据包 数据长度
    USBReadThread usbReadThread; // 读取 HID 设备消息线程

};

#endif // USERMODEPRO_H
