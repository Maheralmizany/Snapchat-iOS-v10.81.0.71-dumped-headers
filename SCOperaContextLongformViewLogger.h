//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface SCOperaContextLongformViewLogger : NSObject
{
}

+ (id)sharedInstance;
- (void)logSubscriptionLongformWithLogger:(id)arg1;
- (void)logStoreViewWithLogger:(id)arg1;
- (void)logLongformVideoViewWithContext:(id)arg1 params:(id)arg2 startedWithCaptionOn:(_Bool)arg3 videoWithCaptionOnTimeViewedSeconds:(double)arg4 videoInLandscapeModeTimeViewedSeconds:(double)arg5 logger:(id)arg6 videoRotationEnabled:(_Bool)arg7 videoRollMinDegree:(double)arg8 videoRollMaxDegree:(double)arg9;
- (void)logProductViewWithLogger:(id)arg1;
- (void)logLongformCameraViewWithContext:(id)arg1 params:(id)arg2 logger:(id)arg3;
- (void)logRemoteWebpageViewWithContext:(id)arg1 params:(id)arg2 logger:(id)arg3 logAsDiscoverEvents:(_Bool)arg4 logAsStoryEvents:(_Bool)arg5;

@end

