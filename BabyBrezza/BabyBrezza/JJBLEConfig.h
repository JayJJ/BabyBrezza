//
//  JJBLEConfig.h
//  BabyBrezza
//
//  Created by Jay on 16/6/4.
//  Copyright © 2016年 XJ. All rights reserved.
//

#ifndef JJBLEConfig_h
#define JJBLEConfig_h


/** 服务 */
#define S_UUID @"FFF0"
#define S_Battery_UUID @"Battery"

/** 特性 */
#define C_NOTIFY_UUID @"FFF1"
#define C_WRITE_UUID @"FFF2"

#define S_CBUUID [CBUUID UUIDWithString:S_UUID]
#define C_CBUUID [CBUUID UUIDWithString:C_NOTIFY_UUID]

//上次连接的设备
#define UD_KEY_CUR_PERIPHERAL_UUID @"curPeripheral_uuid"
#define UD_KEY_CUR_PERIPHERAL_NAME @"curPeripheral_name"

//语言
#define UD_KEY_LANGUAGE @"UD_KEY_LANGUAGE"

//头1	头2	命令	时	分	秒	容量
//(OZ)	速度模式	工作模式	温度	协议版本	保留	保留	系统状态	校验和
#define GATT_HEAD_1			0		//头1
#define GATT_HEAD_2			1		//头2
#define GATT_COMMAND		2		//命令1,2,3,4,5

#define GATT_HOUR			3		//24 hour-mode: 0~23
#define GATT_MINUTE			4
#define GATT_SECOND			5

#define GATT_OZ				6   //容量:2-10
#define GATT_SPEED			7   //速度模式:1-2
#define GATT_WORK			8	//工作模式:1-2
#define GATT_TEMP			9   //温度

#define GATT_VAR			10  //协议版本

#define GATT_RESERVE_1		11		//保留
#define GATT_RESERVE_2      12		//保留
#define GATT_SYSTEM         13		//系统状态

#define GATT_FLAGL			14      //校验和






//枚举 连接的状态
typedef NS_ENUM(NSInteger, JJBLEConnectType)
{
    BLEConnectTypeDisConnected = 0,    //失去连接/未连接
    BLEConnectTypeConnecting,          //正在连接
    BLEConnectTypeConnected,           //已经连接
    BLEConnectTypeDisConnecting,       //正在失去连接/正在停止连接
};


#endif /* JJBLEConfig_h */
