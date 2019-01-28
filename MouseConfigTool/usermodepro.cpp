#include "usermodepro.h"
#include <QDebug>
UserModePro::UserModePro()
{

}
// 设置协议包数据，并返回符合协议的数据包
QByteArray UserModePro::setReportDataStr(char ReportID, char CMDStatus, char CMDID, char DataLSB, char DataMSB, char DataLength, QByteArray data)
{
    QByteArray protocolData = nullptr;
    int dataSum = 0;
    protocolData[0] = ReportID;
    protocolData[1] = CMDStatus;
    protocolData[2] = CMDID;
    protocolData[3] = DataLSB;
    protocolData[4] = DataMSB;
    protocolData[5] = DataLength;
    for(int i = 0; i<DataLength;i++)
    {
        protocolData[6+i] = data[i];
    }
    for( int j = 6+DataLength ;j<63;j++)
    {
        protocolData[j] = 0x00;
    }
    for(int h = 0;h<DataLength;h++)
    {
        dataSum = dataSum + data[h];
    }
    protocolData[63] = 0x55-(dataSum)&0xff;
//    qDebug()<<protocolData;
    return protocolData;
}

// 按键 DPI 400 模式发送
void UserModePro::postDPIMode1Notify()
{
    QByteArray sendData,protocolData;
    sendData[0] = 0x00;// PDI 模式 1
    ReportID = 0x00;
    CMDStatus = 0x00;
    CMDID = 0x05;
    DataLSB = 0x00;
    DataMSB = 0x00;
    DataLength = 1; // strlen （0） 不认为有空间
    protocolData = setReportDataStr(ReportID,CMDStatus,CMDID,DataLSB,DataMSB,DataLength,sendData);
    usbReadThread.getProtocolData(protocolData);
}

// 按键 DPI 800 模式发送
void UserModePro::postDPIMode2Notify()
{
    QByteArray sendData,protocolData;
    sendData[0] = 0x01;// PDI 模式 2
    ReportID = 0x00;
    CMDStatus = 0x00;
    CMDID = 0x05;
    DataLSB = 0x00;
    DataMSB = 0x00;
    DataLength = strlen(sendData);
    protocolData = setReportDataStr(ReportID,CMDStatus,CMDID,DataLSB,DataMSB,DataLength,sendData);
    usbReadThread.getProtocolData(protocolData);
}

// 按键 DPI 1600 模式发送
void UserModePro::postDPIMode3Notify()
{
    QByteArray sendData,protocolData;
    sendData[0] = 0x02;// PDI 模式 3
    ReportID = 0x00;
    CMDStatus = 0x00;
    CMDID = 0x05;
    DataLSB = 0x00;
    DataMSB = 0x00;
    DataLength = strlen(sendData);
    protocolData = setReportDataStr(ReportID,CMDStatus,CMDID,DataLSB,DataMSB,DataLength,sendData);
    usbReadThread.getProtocolData(protocolData);
}

// 按键 DPI 4000 模式发送
void UserModePro::postDPIMode4Notify()
{
    QByteArray sendData,protocolData;
    sendData[0] = 0x03;// PDI 模式 4
    ReportID = 0x00;
    CMDStatus = 0x00;
    CMDID = 0x05;
    DataLSB = 0x00;
    DataMSB = 0x00;
    DataLength = strlen(sendData);
    protocolData = setReportDataStr(ReportID,CMDStatus,CMDID,DataLSB,DataMSB,DataLength,sendData);
    usbReadThread.getProtocolData(protocolData);
}
// 设备无灯效模式
void UserModePro::postRGBMode1Notify()
{
    QByteArray sendData,protocolData;
    sendData[0] = 0x00;// RGB 无灯效模式
    ReportID = 0x00;
    CMDStatus = 0x00;
    CMDID = 0x0B;
    DataLSB = 0x00;
    DataMSB = 0x00;
    DataLength = 1;
    protocolData = setReportDataStr(ReportID,CMDStatus,CMDID,DataLSB,DataMSB,DataLength,sendData);
    usbReadThread.getProtocolData(protocolData);
}
// 设备循环灯模式
void UserModePro::postRGBMode2Notify()
{
    QByteArray sendData,protocolData;
    sendData[0] = 0x01;// RGB 循环灯模式
    ReportID = 0x00;
    CMDStatus = 0x00;
    CMDID = 0x0B;
    DataLSB = 0x00;
    DataMSB = 0x00;
    DataLength = strlen(sendData);
    protocolData = setReportDataStr(ReportID,CMDStatus,CMDID,DataLSB,DataMSB,DataLength,sendData);
    usbReadThread.getProtocolData(protocolData);
}
// 设备呼吸灯模式
void UserModePro::postRGBMode3Notify()
{
    QByteArray sendData,protocolData;
    sendData[0] = 0x02;// RGB 呼吸灯模式
    ReportID = 0x00;
    CMDStatus = 0x00;
    CMDID = 0x0B;
    DataLSB = 0x00;
    DataMSB = 0x00;
    DataLength = strlen(sendData);
    protocolData = setReportDataStr(ReportID,CMDStatus,CMDID,DataLSB,DataMSB,DataLength,sendData);
    usbReadThread.getProtocolData(protocolData);
}
// 设备跑马灯模式
void UserModePro::postRGBMode4Notify()
{
    QByteArray sendData,protocolData;
    sendData[0] = 0x03;// RGB 跑马灯模式
    ReportID = 0x00;
    CMDStatus = 0x00;
    CMDID = 0x0B;
    DataLSB = 0x00;
    DataMSB = 0x00;
    DataLength = strlen(sendData);
    protocolData = setReportDataStr(ReportID,CMDStatus,CMDID,DataLSB,DataMSB,DataLength,sendData);
    usbReadThread.getProtocolData(protocolData);
}
// 按键宏模式
void UserModePro::postMacroKeyNotify(int macroKey01, int macroKey02, int macroKey11, int macroKey12)
{
    QByteArray sendData,protocolData;
    sendData[0] = char(macroKey01);// 侧键 1 第一顺位
    sendData[1] = char(macroKey02);// 侧键 1 第二顺位
    sendData[2] = char(macroKey11);// 侧键 2 第一顺位
    sendData[3] = char(macroKey12);// 侧键 2 第二顺位
    ReportID = 0x00;
    CMDStatus = 0x00;
    CMDID = 0x09;
    DataLSB = 0x00;
    DataMSB = 0x00;
    DataLength = 4;
    protocolData = setReportDataStr(ReportID,CMDStatus,CMDID,DataLSB,DataMSB,DataLength,sendData);
    usbReadThread.getProtocolData(protocolData);
}
// 设备进入配置模式
void UserModePro::postConfigModeNotify()
{
    QByteArray sendData,protocolData;
    sendData[0] = 0x01;// 激活配置模式
    ReportID = 0x00;
    CMDStatus = 0x00;
    CMDID = 0x03;
    DataLSB = 0x00;
    DataMSB = 0x00;
    DataLength = strlen(sendData);
    protocolData = setReportDataStr(ReportID,CMDStatus,CMDID,DataLSB,DataMSB,DataLength,sendData);
    usbReadThread.getProtocolData(protocolData);
}
// 设备进入正常模式
void UserModePro::postNormalModeNotify()
{
    QByteArray sendData,protocolData;
    sendData[0] = 0x00;// 正常模式
    ReportID = 0x00;
    CMDStatus = 0x00;
    CMDID = 0x03;
    DataLSB = 0x00;
    DataMSB = 0x00;
    DataLength = 1;
    protocolData = setReportDataStr(ReportID,CMDStatus,CMDID,DataLSB,DataMSB,DataLength,sendData);
    usbReadThread.getProtocolData(protocolData);
}
// 获取当前设备模式
void UserModePro::getCurrentDeviceMode()
{
    QByteArray sendData,protocolData;
    sendData[0] = 0x00;
    ReportID = 0x00;
    CMDStatus = 0x00;
    CMDID = 0x04;
    DataLSB = 0x00;
    DataMSB = 0x00;
    DataLength = 0;
    protocolData = setReportDataStr(ReportID,CMDStatus,CMDID,DataLSB,DataMSB,DataLength,sendData);
    usbReadThread.getProtocolData(protocolData);
}
// 获取当前 DPI
void UserModePro::getCurrentDPIMode()
{
    QByteArray sendData,protocolData;
    sendData[0] = 0x00;
    ReportID = 0x00;
    CMDStatus = 0x00;
    CMDID = 0x06;
    DataLSB = 0x00;
    DataMSB = 0x00;
    DataLength = 0;
    protocolData = setReportDataStr(ReportID,CMDStatus,CMDID,DataLSB,DataMSB,DataLength,sendData);
    usbReadThread.getProtocolData(protocolData);
}
// 获取当前灯效
void UserModePro::getCurrentRGBMode()
{
    QByteArray sendData,protocolData;
    sendData[0] = 0x00;
    ReportID = 0x00;
    CMDStatus = 0x00;
    CMDID = 0x0C;
    DataLSB = 0x00;
    DataMSB = 0x00;
    DataLength = 0;
    protocolData = setReportDataStr(ReportID,CMDStatus,CMDID,DataLSB,DataMSB,DataLength,sendData);
    usbReadThread.getProtocolData(protocolData);
}
// 获取当前电量
void UserModePro::getCurrentPower()
{
    QByteArray sendData,protocolData;
    sendData[0] = 0x00;
    ReportID = 0x00;
    CMDStatus = 0x00;
    CMDID = 0x0D;
    DataLSB = 0x00;
    DataMSB = 0x00;
    DataLength = 0;
    protocolData = setReportDataStr(ReportID,CMDStatus,CMDID,DataLSB,DataMSB,DataLength,sendData);
    usbReadThread.getProtocolData(protocolData);
}

void UserModePro::getCurrentMacroKeyConfig()
{
    QByteArray sendData,protocolData;
    sendData[0] = 0x00;
    ReportID = 0x00;
    CMDStatus = 0x00;
    CMDID = 0x0A;
    DataLSB = 0x00;
    DataMSB = 0x00;
    DataLength = 0;
    protocolData = setReportDataStr(ReportID,CMDStatus,CMDID,DataLSB,DataMSB,DataLength,sendData);
    usbReadThread.getProtocolData(protocolData);
}
