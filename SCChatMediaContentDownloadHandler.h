//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCChatMediaDownloadHandler-Protocol.h"

@class NSString, SCChatMediaStateManager, SCChatV3MessageStateHandler;
@protocol SCArroyoConversationIdsManaging, SCChatLogger, SCChatRequestManager;

@interface SCChatMediaContentDownloadHandler : NSObject <SCChatMediaDownloadHandler>
{
    id <SCChatRequestManager> _chatRequestManager;
    SCChatV3MessageStateHandler *_messageStateHandler;
    SCChatMediaStateManager *_mediaStateManager;
    id <SCChatLogger> _logger;
    id <SCArroyoConversationIdsManaging> _arroyoConversationIdsManager;
}

- (void).cxx_destruct;
- (void)boostDownloadRequest:(id)arg1;
- (void)_updateMediaStateForItem:(id)arg1 state:(long long)arg2;
- (void)downloadItem:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)initWithChatRequestManager:(id)arg1 messageStateHandler:(id)arg2 mediaStateManager:(id)arg3 arroyoConversationIdsManager:(id)arg4 logger:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

