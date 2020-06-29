//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCContextActionHandling-Protocol.h"

@class NSString, SCContextV2ActionsHandler;

@interface SCContextV2WeakActionsHandler : NSObject <SCContextActionHandling>
{
    SCContextV2ActionsHandler *_actionHandler;
}

- (void).cxx_destruct;
- (void)tryToOpenURLsInOrder:(id)arg1 options:(long long)arg2 triggerInfo:(id)arg3 onFailure:(CDUnknownBlockType)arg4;
- (void)openURLWithUrlsInPriorityOrder:(id)arg1 triggerInfo:(id)arg2;
- (void)openReplyChatWithTriggerInfo:(id)arg1;
- (void)openReplyCameraWithReplyInfo:(id)arg1 triggerInfo:(id)arg2;
- (void)openGroupInvite:(id)arg1 triggerInfo:(id)arg2;
- (void)openDefaultSwipeUpContentWithTriggerInfo:(id)arg1;
- (void)openContextCardsWithTriggerInfo:(id)arg1;
- (id)initWithActionHandler:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
