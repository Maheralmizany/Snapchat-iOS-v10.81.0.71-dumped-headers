//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCFeature.h"

#import "SCFeatureMicNotification-Protocol.h"

@class SCAppNotification, SCUserSession;
@protocol SCAudioSession, SCNotificationManager;

@interface SCFeatureMicNotificationImpl : SCFeature <SCFeatureMicNotification>
{
    id <SCNotificationManager> _notificationManager;
    id <SCAudioSession> _audioSession;
    SCUserSession *_userSession;
    SCAppNotification *_micNotification;
}

- (void).cxx_destruct;
- (void)_dismissMicrophoneNotification;
- (_Bool)_shouldShowMicNotification;
- (void)delayDismissMicrophoneNotification;
- (void)showMicrophonePermissionNotification;
- (id)initWithNotificationManager:(id)arg1 audioSession:(id)arg2 userSession:(id)arg3;

@end

