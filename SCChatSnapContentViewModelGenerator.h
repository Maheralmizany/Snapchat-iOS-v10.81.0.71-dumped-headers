//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCChatUIContentGenerating-Protocol.h"

@class NSString;

@interface SCChatSnapContentViewModelGenerator : NSObject <SCChatUIContentGenerating>
{
}

+ (id)_contentForCurrentUser:(id)arg1 sender:(id)arg2 readByParticipants:(id)arg3 replayUsers:(id)arg4 screenshotUsers:(id)arg5 screenRecordingUsers:(id)arg6 status:(long long)arg7 isSentByUser:(_Bool)arg8 isReceivedBySelf:(_Bool)arg9 isGroupConversation:(_Bool)arg10 isFailedAtleastOnce:(_Bool)arg11 isFailed:(_Bool)arg12 isPending:(_Bool)arg13 isInfiniteSnap:(_Bool)arg14 isVideoWithSound:(_Bool)arg15 orderedGroupParticipants:(id)arg16 exParticipants:(id)arg17 cellState:(long long)arg18 conversationId:(id)arg19 messageId:(id)arg20 media:(id)arg21 timestamp:(id)arg22 payloadWidth:(double)arg23 senderHeaderIdentifier:(id)arg24 replayAnimationState:(long long)arg25 postSnapActionsParams:(id)arg26;
+ (id)contentFromParameterProvider:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

