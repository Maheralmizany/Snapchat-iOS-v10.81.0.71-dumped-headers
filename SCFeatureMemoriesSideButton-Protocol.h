//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCFeatureCameraBottomUIContender-Protocol.h"

@class SCMemoriesSideButton;

@protocol SCFeatureMemoriesSideButton <SCFeatureCameraBottomUIContender>
@property(readonly, nonatomic) SCMemoriesSideButton *memoriesSideButton;
- (void)isTransitioningGallery:(double)arg1;
- (void)observeSpectaclesAppStatusChanges;
- (void)updateVisibility:(double)arg1;
@end

