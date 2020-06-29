//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class NSString, SCNavigationBarButtonItem, UIView;
@protocol SCFeatureToggleCameraButtonDelegate;

@protocol SCFeatureToggleCameraButton
@property(readonly, nonatomic) UIView *view;
@property(readonly, nonatomic) SCNavigationBarButtonItem *navigationBarButtonItem;
@property(nonatomic) __weak id <SCFeatureToggleCameraButtonDelegate> delegate;
- (void)stopDeviceMotionUpdates;
- (void)startDeviceMotionUpdates;
- (void)dismissTooltipAnimated:(_Bool)arg1 afterDelay:(double)arg2;
- (void)showTooltip:(NSString *)arg1;
- (void)reset;
- (void)setHidden:(_Bool)arg1 animated:(_Bool)arg2 duration:(double)arg3;
- (void)setDisabled:(_Bool)arg1;
- (void)setFrontFacing:(_Bool)arg1;
- (void)setHighlighted:(_Bool)arg1;
- (void)triggerTap;
- (void)animate;
@end

