//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSCopying-Protocol.h"
#import "NSObject-Protocol.h"
#import "SCCameraUserActionProviding-Protocol.h"

@class SCSnappablesPlayButton, UIImage, UIImageView, UIView;
@protocol SCCameraTimerTooltipManaging;

@protocol SCCameraTimer <NSObject, NSCopying, SCCameraUserActionProviding>
@property(nonatomic) _Bool recording;
@property(readonly, nonatomic) id <SCCameraTimerTooltipManaging> tooltipManager;
@property(retain, nonatomic) SCSnappablesPlayButton *snappablesPlayButton;
@property(readonly, nonatomic) struct CGRect borderFrame;
@property(nonatomic) _Bool shouldDisplayVideoHelp;
@property(nonatomic) double maximumRecordingLength;
- (void)transitionToLockAppearance;
- (void)animateToCapturePreviewForMediaType:(unsigned long long)arg1 targetView:(UIView *)arg2 targetPosition:(struct CGPoint)arg3 alongWithAnimation:(void (^)(void))arg4 completion:(void (^)(void))arg5;
- (void)animateToCameraTargetView:(UIView *)arg1 targetPosition:(struct CGPoint)arg2 alongWithAnimation:(void (^)(void))arg3 completion:(void (^)(void))arg4;
- (void)handsFreeViewStateDidChange:(unsigned long long)arg1;
- (void)willUpdateHovaCameraItemVisibility:(double)arg1;
- (void)setOverlayIcon:(UIImageView *)arg1;
- (void)removeOverlayIcon:(UIView *)arg1;
- (void)removeRecordingAnimation;
- (void)stopAnimationAndSaveState:(_Bool)arg1;
- (void)startProgressAnimationWithShortTime:(double)arg1;
- (void)startAnimationWithShortTime:(double)arg1 wasInitiatedByLens:(_Bool)arg2 redCircleGrowthRate:(double)arg3 redCirlceFactor:(double)arg4;
- (void)startAnimationWithShortTime:(double)arg1 wasInitiatedByLens:(_Bool)arg2;
- (void)setLensImage:(UIImage *)arg1;
- (void)setCameraTimerState:(long long)arg1 animated:(_Bool)arg2;
@end

