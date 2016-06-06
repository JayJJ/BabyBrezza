//
//  JJBLEValue.m
//  BabyBrezza
//
//  Created by Jay on 16/6/4.
//  Copyright © 2016年 XJ. All rights reserved.
//

#import "JJBLEValue.h"
#import "JJBLEConfig.h"
#import <AVFoundation/AVFoundation.h>
@interface JJBLEValue ()

@property (nonatomic, strong) AVAudioPlayer *player;

@end
@implementation JJBLEValue

#pragma mark - Lifecycle

+ (JJBLEValue *)sharedInstance {
    static dispatch_once_t pred = 0;
    __strong static JJBLEValue * _sharedObject = nil;
    dispatch_once(&pred, ^{
        _sharedObject = [[self alloc] init];
    });
    return _sharedObject;
}

- (instancetype)init {
    self = [super init];
    if (self) {
        
    }
    return self;
}

#pragma mark - Public Methods

- (void)clearParam {
    self.head1 = nil;
    self.head2 = nil;
    
    self.command = nil;
    
    self.hour = nil;
    self.minute = nil;
    self.second = nil;
    
    self.number = nil;
    self.speed = nil;
    self.temp = nil;
    self.temperature = nil;
    
    self.var = nil;
    
    self.reserve_1 = nil;
    self.reserve_2 = nil;
    
    self.system = nil;
    
    self.flagl = nil;
}

- (void)playNotiSound {
    if (!self.player.isPlaying) {
        [self.player prepareToPlay];
        [self.player play];
    }
}

#pragma mark - Property

- (NSString *)number {
    if (_number) {
        return _number;
    }
    _number = @"1";
    return _number;
}

- (NSString *)speed {
    if (_speed) {
        return _speed;
    }
    _speed = @"1";
    return _speed;
}

- (NSString *)temp {
    if (_temp) {
        return _temp;
    }
    _temp = @"1";
    return _temp;
}

- (NSString *)startFlagl {
    if (_startFlagl) {
        return _startFlagl;
    }
    _startFlagl = @"-1";
    return _startFlagl;
}

- (AVAudioPlayer *)player {
    if (_player) {
        return _player;
    }
    _player = [[AVAudioPlayer alloc] initWithContentsOfURL:[NSURL fileURLWithPath:[[NSBundle mainBundle] pathForResource:@"noti_sound" ofType:@"mp3"]] error:nil];
    return _player;
}

@end
