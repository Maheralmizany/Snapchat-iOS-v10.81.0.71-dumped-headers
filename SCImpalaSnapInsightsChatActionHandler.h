//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCImpalaSnapInsightsChatActionHandling-Protocol.h"

@class NSString, SCUserSession, UIViewController;
@protocol SCChatConversationManager, SCImpalaSnapInsightsChatPresenting;

@interface SCImpalaSnapInsightsChatActionHandler : NSObject <SCImpalaSnapInsightsChatActionHandling>
{
    SCUserSession *_userSession;
    id <SCImpalaSnapInsightsChatPresenting> _chatPresenter;
    id <SCChatConversationManager> _conversationManager;
    UIViewController *_viewController;
}

- (void).cxx_destruct;
- (long long)pushToComposerMarshaller:(struct SCComposerMarshaller *)arg1;
- (id)observeConversationUpdatesByIdsWithConversationIds:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (void)sendScreenCaptureNotificationWithUserId:(id)arg1 conversationId:(id)arg2 type:(long long)arg3;
- (void)openChatWithUserId:(id)arg1 conversationId:(id)arg2;
- (id)initWithUserSession:(id)arg1 chatPresenter:(id)arg2 conversationManager:(id)arg3 viewController:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

