//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCUpdateAnnouncing-Protocol.h"

@class NSMutableArray, NSString, SCQueuePerformer, SCUpdateListenerAnnouncer;

@interface SCStoriesSelectedTopicsDataSource : NSObject <SCUpdateAnnouncing>
{
    SCUpdateListenerAnnouncer *_updateAnnouncer;
    NSMutableArray *_selectedTopics;
    SCQueuePerformer *_queuePerformer;
}

+ (id)announcerIdentifier;
- (void).cxx_destruct;
- (void)_announceDataSourceUpdate;
- (void)_asyncAnnounceDataSourceUpdate;
- (void)_copyAndReturnTopicsAsyncWithCompletion:(CDUnknownBlockType)arg1 completionQueue:(id)arg2;
- (void)getSelectedTopicsWithCompletion:(CDUnknownBlockType)arg1 completionQueue:(id)arg2;
- (void)_removeTopic:(id)arg1;
- (void)removeTopic:(id)arg1;
- (void)_addTopic:(id)arg1;
- (void)addTopic:(id)arg1;
- (void)removeUpdateListener:(id)arg1;
- (void)addUpdateListener:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
