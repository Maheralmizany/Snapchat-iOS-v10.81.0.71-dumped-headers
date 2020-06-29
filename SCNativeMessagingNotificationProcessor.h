//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCAppNotificationProcessor-Protocol.h"

@protocol SCNativeMessagingSessionManaging, SCNotificationManager;

@interface SCNativeMessagingNotificationProcessor : NSObject <SCAppNotificationProcessor>
{
    id <SCNativeMessagingSessionManaging> _nativeSessionManager;
    id <SCNotificationManager> _notificationManager;
}

- (void).cxx_destruct;
- (void)_repostNotification:(id)arg1 clientId:(id)arg2;
- (void)_getClientConversationIdFromServerId:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (void)setNotificationManager:(id)arg1;
- (void)processNotification:(id)arg1;
- (id)conversationManager;
- (void)_processSyncedConversationForServerId:(id)arg1 notification:(id)arg2;
- (void)_syncServerConversation:(id)arg1 notification:(id)arg2;
- (long long)shouldFilterNotification:(id)arg1;
- (id)initWithNativeSessionManager:(id)arg1;

@end

