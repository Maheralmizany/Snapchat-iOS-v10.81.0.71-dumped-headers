//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class NSString, SCTimeboundCompletion;
@protocol SCNotification, SCNotificationPresenter, SCNotificationProcessor;

@protocol SCNotificationManager
- (void)unregisterPushNotificationPresenter:(NSString *)arg1;
- (void)registerPushNotificationPresenter:(NSString *)arg1 presenter:(id <SCNotificationPresenter>)arg2;
- (void)removeProcessor:(id <SCNotificationProcessor>)arg1;
- (void)addProcessor:(id <SCNotificationProcessor>)arg1;
- (void)removeNotification:(id <SCNotification>)arg1;
- (void)addNotification:(id <SCNotification>)arg1 withSystemCompletion:(SCTimeboundCompletion *)arg2;
- (void)addNotification:(id <SCNotification>)arg1;
@end

