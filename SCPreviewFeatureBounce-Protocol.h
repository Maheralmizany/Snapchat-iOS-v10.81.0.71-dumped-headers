//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class NSNumber, SCBounceVideoState, SCPreviewToolbarTimerButtonItem, UIView;
@protocol SCPreviewFeatureBounceDelegate;

@protocol SCPreviewFeatureBounce
@property(readonly, nonatomic) _Bool isCurrentVideoBounceable;
@property(retain, nonatomic) SCBounceVideoState *state;
@property(nonatomic) __weak id <SCPreviewFeatureBounceDelegate> delegate;
- (double)isPlayingAboveMinimumFramerateThreshhold;
- (NSNumber *)bounceOffset;
- (void)removeBounceVideoForNewBounceIncoming:(_Bool)arg1;
- (void)showBounceVideoWithBounceOffset:(double)arg1 toolbarItem:(SCPreviewToolbarTimerButtonItem *)arg2 completion:(void (^)(void))arg3;
- (void)presentBounceSliderFromToolbarItem:(SCPreviewToolbarTimerButtonItem *)arg1 iconsContainerView:(UIView *)arg2;
@end

