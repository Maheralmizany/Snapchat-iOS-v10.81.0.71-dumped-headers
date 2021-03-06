//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCEventAnnouncing-Protocol.h"

@class NSString, SCCheetahFeedAst, SCDiscoverFeedInteractionHistoryFeatureExtractor, SCEventListenerAnnouncer, SCQueuePerformer, SCUserSession;
@protocol SCDiscoverFeedDebugInfoDataProviding;

@interface SCDiscoverFeedRanker : NSObject <SCEventAnnouncing>
{
    SCDiscoverFeedInteractionHistoryFeatureExtractor *_interactionHistoryFeatureExtractors;
    SCUserSession *_userSession;
    struct SCAstVM *_astVM;
    SCCheetahFeedAst *_ast;
    SCQueuePerformer *_performer;
    SCEventListenerAnnouncer *_eventAnnouncer;
    id <SCDiscoverFeedDebugInfoDataProviding> _debugInfoDataProvider;
}

+ (id)announcerIdentifier;
- (void).cxx_destruct;
- (id)_extractRankingFeatures:(id)arg1 scoringParams:(id)arg2 isPullToRefresh:(_Bool)arg3 isLocalReranking:(_Bool)arg4 storyIH:(id)arg5;
- (id)_performReorderStories:(id)arg1 scoringParams:(id)arg2 isPullToRefresh:(_Bool)arg3 isLocalReranking:(_Bool)arg4 feedType:(unsigned long long)arg5 interactionHistoryArray:(id)arg6;
- (id)reorderStories:(id)arg1 scoringParams:(id)arg2 isPullToRefresh:(_Bool)arg3 isLocalReranking:(_Bool)arg4 feedType:(unsigned long long)arg5 interactionHistoryArray:(id)arg6;
- (void)dealloc;
- (id)initWithUserSession:(id)arg1;
- (void)removeListener:(id)arg1;
- (void)addListener:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

