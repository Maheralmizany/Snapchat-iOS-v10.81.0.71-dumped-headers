//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, SCQueuePerformer, SCSessionRequestManager;

@interface SCProfileSavedMessagesFetcher : NSObject
{
    SCSessionRequestManager *_sessionRequestManager;
    NSString *_conversationId;
    long long _conversationType;
    NSString *_messageTypesJson;
    int _pageSize;
    NSString *_loggingPrefix;
    _Bool _isFetching;
    SCQueuePerformer *_isFetchingUpdatePerformer;
}

- (void).cxx_destruct;
- (void)_setNotFetching;
- (_Bool)_setFetchingIfNotFetching;
- (CDUnknownBlockType)_onFailure:(CDUnknownBlockType)arg1 completionQueue:(id)arg2;
- (CDUnknownBlockType)_onSuccess:(CDUnknownBlockType)arg1 notModifiedCompletion:(CDUnknownBlockType)arg2 completionQueue:(id)arg3;
- (void)fetchMessagesWithIterSeqNumbers:(id)arg1 checksum:(id)arg2 fetchedCompletion:(CDUnknownBlockType)arg3 notModifiedCompletion:(CDUnknownBlockType)arg4 errorCompletion:(CDUnknownBlockType)arg5 completionQueue:(id)arg6;
- (id)initWithSessionRequestManager:(id)arg1 conversationId:(id)arg2 conversationType:(long long)arg3 messageTypes:(id)arg4 pageSize:(int)arg5 loggingPrefix:(id)arg6 performerQueueLabel:(id)arg7;

@end

