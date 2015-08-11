//
//  SkyRadiusView.h
//  SkyRadiusView
//
//  Created by skytoup on 15/8/11.
//  Copyright (c) 2015年 skytoup. All rights reserved.
//

#import <UIKit/UIKit.h>

IB_DESIGNABLE
@interface SkyRadiusView : UIView
@property (assign, nonatomic) IBInspectable BOOL topRightRadius;
@property (assign, nonatomic) IBInspectable BOOL topLeftRadius;
@property (assign, nonatomic) IBInspectable BOOL bottomRightRadius;
@property (assign, nonatomic) IBInspectable BOOL bottomLeftRadius;
@property (assign, nonatomic) IBInspectable CGFloat cornerRadius;
@end