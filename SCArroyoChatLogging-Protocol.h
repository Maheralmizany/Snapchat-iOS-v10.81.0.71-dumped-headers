//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCArroyoConversationDataUpdateListener-Protocol.h"

@class SCNMessagingMessage, SCPlatformAnalyticsMediaViewInfo;

@protocol SCArroyoChatLogging <SCArroyoConversationDataUpdateListener>
- (void)logMediaViewWithMessage:(SCNMessagingMessage *)arg1 mediaViewInfo:(SCPlatformAnalyticsMediaViewInfo *)arg2 replayedByCurrentUser:(_Bool)arg3 isGroupConversation:(_Bool)arg4;
- (void)logChatChatUnsave:(SCNMessagingMessage *)arg1 isGroupConversation:(_Bool)arg2;
- (void)logChatChatSave:(SCNMessagingMessage *)arg1 isGroupConversation:(_Bool)arg2 messageRetentionInMinutes:(unsigned long long)arg3;
- (void)logDirectSnapScreenshotWithMessage:(SCNMessagingMessage *)arg1 updateType:(long long)arg2 isGroupConversation:(_Bool)arg3;
- (void)logChatChatViewWithUnseenMessage:(SCNMessagingMessage *)arg1 isGroupConversation:(_Bool)arg2;
@end

