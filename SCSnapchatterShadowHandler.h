//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, SCLazy, SCQueuePerformer, SCTimeProvider;
@protocol OS_dispatch_queue;

@interface SCSnapchatterShadowHandler : NSObject
{
    SCLazy *_autoShakeToReporter;
    SCLazy *_eventTracker;
    SCLazy *_grapheneLogger;
    SCTimeProvider *_dateProvider;
    SCQueuePerformer *_performer;
    NSObject<OS_dispatch_queue> *_loggingQueue;
    NSArray *_lastIndexDiffsOnAddedMe;
    NSArray *_lastIndexDiffsOnQuickAdd;
}

- (void).cxx_destruct;
- (void)_autoReportWithTitle:(id)arg1;
- (void)_logAndReportOnPlacement:(id)arg1 indexDiffs:(id)arg2 actionEvent:(id)arg3;
- (void)_logAndReportIndexDiffsOnQuickAdd:(unsigned int)arg1 indexDiffs:(id)arg2 actionEvent:(id)arg3;
- (void)_logAndReportIndexDiffsOnAddedMe:(id)arg1 actionEvent:(id)arg2;
- (void)_fetchAllIncomingSnapchatters:(id)arg1 displayTimeStamp:(double)arg2 incomingFriendsLastViewedTimestamp:(double)arg3 snapchattersDataFetcher:(id)arg4 actionEvent:(id)arg5;
- (void)_fetchSuggestionsOnSuggestionPage:(unsigned int)arg1 suggestedSnapchatters:(id)arg2 snapchattersDataFetcher:(id)arg3 actionEvent:(id)arg4;
- (void)fetchAllIncomingSnapchatters:(id)arg1 incomingFriendsLastViewedServerTimestamp:(id)arg2 snapchattersDataFetcher:(id)arg3 actionEvent:(id)arg4;
- (void)fetchSuggestionsOnSuggestionPage:(unsigned int)arg1 suggestedSnapchatters:(id)arg2 snapchattersDataFetcher:(id)arg3 actionEvent:(id)arg4;
- (id)initWithAutoShakeToReporter:(id)arg1 eventTracker:(id)arg2 grapheneLogger:(id)arg3 dateProvider:(id)arg4;

@end
