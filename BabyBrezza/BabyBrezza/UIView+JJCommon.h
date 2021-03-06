//
//  UIView+JJCommon.h
//  BabyBrezza
//
//  Created by Jay on 15/9/30.
//  Copyright © 2015年 JJ. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UIView (JJCommon)

/**
 * Shortcut for frame.origin.x.
 *
 * Sets frame.origin.x = left
 */
@property (nonatomic) CGFloat left;

/**
 * Shortcut for frame.origin.y
 *
 * Sets frame.origin.y = top
 */
@property (nonatomic) CGFloat top;

/**
 * Shortcut for frame.origin.x + frame.size.width
 *
 * Sets frame.origin.x = right - frame.size.width
 */
@property (nonatomic) CGFloat right;

/**
 * Shortcut for frame.origin.y + frame.size.height
 *
 * Sets frame.origin.y = bottom - frame.size.height
 */
@property (nonatomic) CGFloat bottom;

/**
 * Shortcut for frame.size.width
 *
 * Sets frame.size.width = width
 */
@property (nonatomic) CGFloat width;

/**
 * Shortcut for frame.size.height
 *
 * Sets frame.size.height = height
 */
@property (nonatomic) CGFloat height;


@property (nonatomic) CGFloat centerY;
@property (nonatomic) CGFloat centerX;

@property (assign, nonatomic) CGSize size;
@property (assign, nonatomic) CGPoint origin;


@end
