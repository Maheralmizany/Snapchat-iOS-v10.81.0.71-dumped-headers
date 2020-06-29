//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCChatEraseMessageControlling-Protocol.h"

@class NSString;
@protocol SCActionHandling, SCChatEraseMessageControllerDelegate;

@interface SCChatEraseMessageController : NSObject <SCChatEraseMessageControlling>
{
    id <SCChatEraseMessageControllerDelegate> _delegate;
    id <SCActionHandling> _actionHandler;
}

- (void).cxx_destruct;
- (id)_learnMoreMessageId:(id)arg1 conversationId:(id)arg2 isGroupConversation:(_Bool)arg3 confirmDeleteDataModel:(id)arg4;
- (id)_cancelAction;
- (id)_eraseActionMessageId:(id)arg1 conversationId:(id)arg2 isGroupConversation:(_Bool)arg3 confirmDeleteDataModel:(id)arg4;
- (id)_okayActionWithMessageId:(id)arg1 conversationId:(id)arg2 isGroupConversation:(_Bool)arg3;
- (void)_presentLearnMorePromptForMessageId:(id)arg1 conversationId:(id)arg2 isGroupConversation:(_Bool)arg3 isPresentedFirst:(_Bool)arg4 confirmDeleteDataModel:(id)arg5;
- (void)_presentEraseMessagePromptForMessageId:(id)arg1 conversationId:(id)arg2 isGroupConversation:(_Bool)arg3 confirmDeleteDataModel:(id)arg4;
- (void)_eraseMessageId:(id)arg1 inConversationId:(id)arg2 isGroupConversation:(_Bool)arg3 isFirstTime:(_Bool)arg4 confirmDeleteDataModel:(id)arg5;
- (void)eraseMessageId:(id)arg1 inConversationId:(id)arg2 isGroupConversation:(_Bool)arg3 isFirstTime:(_Bool)arg4;
- (void)eraseMessageId:(id)arg1 inConversationId:(id)arg2 isGroupConversation:(_Bool)arg3 confirmDeleteDataModel:(id)arg4;
- (id)initWithDelegate:(id)arg1 actionHandler:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

