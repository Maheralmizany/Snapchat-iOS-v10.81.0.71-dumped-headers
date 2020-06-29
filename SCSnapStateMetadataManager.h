//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class SCChatV3MetadataStore;

@interface SCSnapStateMetadataManager : NSObject
{
    SCChatV3MetadataStore *_metadataStore;
}

- (void).cxx_destruct;
- (void)resetMessageMetadatasForConversationId:(id)arg1;
- (void)updateAllMessageMetadatasWithReplayAttemptsForConversationId:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)updateMessageMetadataForConversationId:(id)arg1 attemptReplaySnap:(id)arg2;
- (void)updateMessageMetadataForConversationId:(id)arg1 finishViewingSnap:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)updateMessageMetadataForConversationId:(id)arg1 openSnap:(id)arg2 openTimestamp:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (id)initWithMetadataStore:(id)arg1;

@end

