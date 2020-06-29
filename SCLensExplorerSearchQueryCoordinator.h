//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCSearchQueryCoordinating-Protocol.h"

@class NSString, SCSearchCachedRequestManager, SCSearchNavigationCoordinator, SCSearchQuery, SCSearchQueryDeduplicator;
@protocol SCLensExplorerSearchQueryCoordinatorLoggerProtocol, SCLensExplorerSearchSessionProtocol;

@interface SCLensExplorerSearchQueryCoordinator : NSObject <SCSearchQueryCoordinating>
{
    id <SCLensExplorerSearchSessionProtocol> _searchSession;
    id <SCLensExplorerSearchQueryCoordinatorLoggerProtocol> _logger;
    _Bool _isFirstLoadingAfterInit;
    _Bool _isLoading;
    NSString *_queryIdentifier;
    SCSearchQueryDeduplicator *_queryDeduplicator;
    SCSearchCachedRequestManager *_cachedRequestManager;
    SCSearchQuery *_currentQuery;
    SCSearchNavigationCoordinator *_navigationCoordinator;
}

@property(nonatomic) __weak SCSearchNavigationCoordinator *navigationCoordinator; // @synthesize navigationCoordinator=_navigationCoordinator;
@property(copy, nonatomic) SCSearchQuery *currentQuery; // @synthesize currentQuery=_currentQuery;
- (void).cxx_destruct;
- (void)_handleLoadingSectionsWithQuery:(id)arg1 requestType:(long long)arg2 updatingBlock:(CDUnknownBlockType)arg3;
- (id)_sectionDescriptorsFromResponse:(id)arg1 query:(id)arg2 originQueryForResponse:(id)arg3 requestType:(long long)arg4;
- (void)_updateFallbackQueryResultWithQuery:(id)arg1 updatingBlock:(CDUnknownBlockType)arg2;
- (void)_handleResponse:(id)arg1 responseQuery:(id)arg2 query:(id)arg3 requestType:(long long)arg4 updatingBlock:(CDUnknownBlockType)arg5;
- (void)_executeRemoteQueryWithQuery:(id)arg1 queryIdentifier:(id)arg2 updatingBlock:(CDUnknownBlockType)arg3;
- (void)_handleQuery:(id)arg1 queryIdentifier:(id)arg2 shouldSendQueryImmediately:(_Bool)arg3 updatingBlock:(CDUnknownBlockType)arg4;
- (void)resultsForQuery:(id)arg1 updatingBlock:(CDUnknownBlockType)arg2;
- (_Bool)canPerformQuery:(id)arg1;
@property(readonly, nonatomic) _Bool isLoading;
- (id)initWithSearchSession:(id)arg1 logger:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

