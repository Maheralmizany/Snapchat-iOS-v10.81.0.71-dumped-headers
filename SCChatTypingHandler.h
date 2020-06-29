//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, SCRequest;
@protocol SCChatConversationAPI, SCTalkSession;

@interface SCChatTypingHandler : NSObject
{
    id <SCChatConversationAPI> _conversationAPI;
    NSString *_currentTypingState;
    SCRequest *_currentRequest;
    id <SCTalkSession> _talkSession;
}

@property(nonatomic) __weak id <SCTalkSession> talkSession; // @synthesize talkSession=_talkSession;
- (void).cxx_destruct;
- (void)_updateTalkSessionWithTypingState:(id)arg1;
- (_Bool)_shouldTriggerNotificationAfterTypingStateUpdate:(id)arg1;
- (void)_resetCurrentRequest;
- (void)updateTypingStateWithState:(id)arg1 groupConversationId:(id)arg2 sequenceNumbers:(id)arg3;
- (void)updateTypingStateWithState:(id)arg1 recipient:(id)arg2 sequenceNumbers:(id)arg3;
- (id)initWithConversationAPI:(id)arg1;

@end

