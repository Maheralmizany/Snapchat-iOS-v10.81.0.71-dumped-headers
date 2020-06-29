//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCTraceEnabled-Protocol.h"

@class NSDictionary, NSMutableArray, NSString, SCFuture;
@protocol SCLensUpdateResolver, SCPerforming, SCUnlockLensControllerDelegate;

@interface SCUnlockLensController : NSObject <SCTraceEnabled>
{
    id <SCPerforming> _promisePerformer;
    id <SCLensUpdateResolver> _updateResolver;
    id <SCUnlockLensControllerDelegate> _delegate;
    id <SCPerforming> _performer;
    id <SCPerforming> _filteringPerformer;
    NSMutableArray *_unlockedLenses;
}

@property(retain, nonatomic) NSMutableArray *unlockedLenses; // @synthesize unlockedLenses=_unlockedLenses;
@property(retain, nonatomic) id <SCPerforming> filteringPerformer; // @synthesize filteringPerformer=_filteringPerformer;
@property(retain, nonatomic) id <SCPerforming> performer; // @synthesize performer=_performer;
@property(nonatomic) __weak id <SCUnlockLensControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSDictionary *lensIdToChecksumMap;
@property(readonly, nonatomic) SCFuture *chachedLensesFuture;
- (id)scanUnlockedLenses;
- (void)clearCache;
- (void)updateCache;
- (void)removeFromCache:(id)arg1;
- (id)_lensesByScaningAndResolvingNewGeofiltersList:(id)arg1 cachedLenses:(id)arg2 checksumResponses:(id)arg3;
- (void)processUnlockedLensesResponse:(id)arg1;
- (id)scanUnlockedLensesFromSojuResponse:(id)arg1;
- (void)_ensureNonNilObjects;
- (id)initWithUnlockedLenses:(id)arg1 updateResolver:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

