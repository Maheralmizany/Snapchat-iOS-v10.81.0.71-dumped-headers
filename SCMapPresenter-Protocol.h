//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString, SCAppNotification;

@protocol SCMapPresenter <NSObject>
- (_Bool)handleAppNotification:(SCAppNotification *)arg1;
- (void)cancelGestures;
- (_Bool)isMapPresented;
- (void)presentMapSettingsIfNeededAnimated:(_Bool)arg1 openSource:(long long)arg2;
- (void)updateOpenTrackingWithOpenType:(long long)arg1 openSource:(long long)arg2 openSourcePage:(NSString *)arg3;
- (void)travelToDefaultViewportAnimated:(_Bool)arg1 openSource:(long long)arg2 completion:(void (^)(void))arg3;
- (void)travelToFriendWithUserId:(NSString *)arg1 openSource:(long long)arg2 animated:(_Bool)arg3 completion:(void (^)(void))arg4;
- (void)travelToCoordinate:(struct CLLocationCoordinate2D)arg1 zoomLevel:(double)arg2 poiId:(NSString *)arg3 openSource:(long long)arg4 animated:(_Bool)arg5 completion:(void (^)(void))arg6;
- (void)dismissViewControllerAnimated:(_Bool)arg1 completion:(void (^)(void))arg2;
- (void)presentMapIfNeededAnimated:(_Bool)arg1 completion:(void (^)(void))arg2;
@end
