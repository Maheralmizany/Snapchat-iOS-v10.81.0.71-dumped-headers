//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCFriendsFeedRetryerProtocol-Protocol.h"

@class NSString, SCLazy;
@protocol SCChatMessageActionHandling, SCMediaSendTaskManager;

@interface SCFriendsFeedRetryer : NSObject <SCFriendsFeedRetryerProtocol>
{
    id <SCChatMessageActionHandling> _chatMessageActionhandler;
    id <SCMediaSendTaskManager> _sendTaskManager;
    SCLazy *_feedDataCoordinatorLazy;
}

- (void).cxx_destruct;
- (void)retryWithMaxFeedCount:(long long)arg1 retrySignal:(unsigned long long)arg2;
- (id)initWithChatMessageActionHandler:(id)arg1 mediaSendTaskManager:(id)arg2 feedDataCoordinator:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

