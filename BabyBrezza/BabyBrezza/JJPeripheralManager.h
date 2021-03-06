//
//  JJPeripheralManager.h
//  BluetoothDevice
//
//  Created by Jay on 14-12-21.
//  Copyright (c) 2014年 JJ. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreBluetooth/CoreBluetooth.h>


@interface JJPeripheralManager : NSObject

/** 周边设备管理类 */
@property (nonatomic, strong) CBPeripheralManager *peripheralManager;

/** 可变服务特性 */
@property (nonatomic, strong) CBMutableCharacteristic *mutableCharacteristic;

@end
