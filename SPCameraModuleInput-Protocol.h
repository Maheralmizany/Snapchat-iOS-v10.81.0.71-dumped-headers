//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SPViperModuleInput-Protocol.h"

@class UIColor, UIViewController;

@protocol SPCameraModuleInput <SPViperModuleInput>
@property(retain, nonatomic) UIColor *disabledCameraBackgroundColor;
@property(retain, nonatomic) UIColor *overlayColor;
@property(nonatomic) long long flashMode;
@property(readonly, nonatomic) _Bool hasFlash;
@property(readonly, nonatomic) UIViewController *viewController;
- (void)switchCamera;
- (void)takePhoto;
@end
