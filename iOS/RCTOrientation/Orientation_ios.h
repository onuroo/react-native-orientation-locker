//
//  react-native-orientation-locker
//  Orientation_ios.h
//
//  Created by Wonday on 17/5/12.
//  Copyright (c) wonday.org All rights reserved.
//


#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import <React/RCTBridgeModule.h>
#import <React/RCTEventEmitter.h>

@interface Orientation_ios : RCTEventEmitter <RCTBridgeModule>
#if (!TARGET_OS_TV)
+ (void)setOrientation: (UIInterfaceOrientationMask)orientation;
+ (UIInterfaceOrientationMask)getOrientation;
#endif
@end
