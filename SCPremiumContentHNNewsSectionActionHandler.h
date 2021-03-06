//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCActionHandling-Protocol.h"
#import "SCEventAnnouncing-Protocol.h"

@class NSMutableArray, NSString, SCActionModel, SCEventListenerAnnouncer;
@protocol SCNotificationManager;

@interface SCPremiumContentHNNewsSectionActionHandler : NSObject <SCEventAnnouncing, SCActionHandling>
{
    SCEventListenerAnnouncer *_eventAnnouncer;
    id <SCNotificationManager> _notificationManager;
    NSMutableArray *_notificationsPresented;
    SCActionModel *_pendingActionModelFromNotificationLaunchAction;
}

+ (id)announcerIdentifier;
@property(readonly, nonatomic) SCActionModel *pendingActionModelFromNotificationLaunchAction; // @synthesize pendingActionModelFromNotificationLaunchAction=_pendingActionModelFromNotificationLaunchAction;
- (void).cxx_destruct;
- (void)_showNotificationsOptInSuccessful:(_Bool)arg1;
- (void)_removeAllPresentedNotifications;
- (void)_announceUpdateToSectionDataProviderWithActionIndentifier:(id)arg1 actionParams:(id)arg2;
- (_Bool)handleActionWithSender:(id)arg1 actionModel:(id)arg2 fromSourceView:(id)arg3;
- (id)initWithNotificationsManager:(id)arg1;
- (void)didTriggerEventWithEventName:(id)arg1 announcerIdentifier:(id)arg2 extraData:(id)arg3;
- (void)removeListener:(id)arg1;
- (void)addListener:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

