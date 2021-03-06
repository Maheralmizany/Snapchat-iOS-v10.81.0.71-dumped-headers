//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCDiscoverFeedStoryIHDataCoordinating-Protocol.h"

@class NSString, SCExperimentManager, SCLazy;

@interface SCDiscoverFeedStoryIHDocDataCoordinator : NSObject <SCDiscoverFeedStoryIHDataCoordinating>
{
    SCLazy *_lazyDocObjectContext;
    SCExperimentManager *_experimentManager;
}

- (void).cxx_destruct;
- (id)docObjectContext;
- (void)_purgeInteractionHistoryWithDefaultAllowanceCount:(unsigned long long)arg1 transactionContext:(id)arg2;
- (void)_purgeInteractionHistoryIfNecessaryWithExpirationTimestamp:(double)arg1 itemsLimit:(unsigned long long)arg2 completion:(CDUnknownBlockType)arg3;
- (void)purgeInteractionHistoryIfNecessary;
- (void)getStoriesInteractionHistoryWithCompletionQueue:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)updateInteractionHistory:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)getInteractionHistoryWithStoryIHMetadata:(id)arg1 completionQueue:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)initWithLazyDocObjectContext:(id)arg1 experimentManager:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

