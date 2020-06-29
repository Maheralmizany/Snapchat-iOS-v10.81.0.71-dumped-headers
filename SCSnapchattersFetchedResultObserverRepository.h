//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class SCDocObjectContext, SCSnapchattersAToZObserver, SCSnapchattersCountSummaryObserver, SCSnapchattersFetchedResultObserver, SCSuggestedSnapchattersDataProvider, SCTimeProvider;

@interface SCSnapchattersFetchedResultObserverRepository : NSObject
{
    SCDocObjectContext *_docObjectContext;
    SCSnapchattersFetchedResultObserver *_outgoingSnapchattersObserver;
    SCSnapchattersFetchedResultObserver *_incomingSnapchattersObserver;
    SCSnapchattersFetchedResultObserver *_contactSnapchattersObserver;
    SCSnapchattersFetchedResultObserver *_blockedSnapchattersObserver;
    SCSuggestedSnapchattersDataProvider *_suggestedSnapchattersDataProvider;
    SCSnapchattersCountSummaryObserver *_outgoingSnapchattersCountObserver;
    SCSnapchattersCountSummaryObserver *_mutualSnapchattersCountObserver;
    SCSnapchattersAToZObserver *_outgoingSnapchattersAToZObserver;
    long long _outgoingSnapchattersObserverToken;
    long long _incomingSnapchattersObserverToken;
    long long _contactSnapchattersObserverToken;
    long long _blockedSnapchattersObserverToken;
    long long _suggestedSnapchattersProviderToken;
    long long _outgoingSnapchattersCountObserverToken;
    long long _mutualSnapchattersCountObserverToken;
    long long _outgoingSnapchattersAToZObserverToken;
    SCTimeProvider *_currentDateProvider;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) SCSnapchattersCountSummaryObserver *mutualSnapchattersCountObserver;
@property(readonly, copy, nonatomic) SCSnapchattersCountSummaryObserver *outgoingSnapchattersCountObserver;
@property(readonly, copy, nonatomic) SCSuggestedSnapchattersDataProvider *suggestedSnapchattersProvider;
@property(readonly, copy, nonatomic) SCSnapchattersFetchedResultObserver *blockedSnapchattersObserver;
@property(readonly, copy, nonatomic) SCSnapchattersFetchedResultObserver *contactSnapchattersObserver;
@property(readonly, copy, nonatomic) SCSnapchattersFetchedResultObserver *incomingSnapchattersObserver;
@property(readonly, copy, nonatomic) SCSnapchattersAToZObserver *outgoingSnapchattersAToZObserver;
@property(readonly, copy, nonatomic) SCSnapchattersFetchedResultObserver *outgoingSnapchattersObserver;
- (id)initWithDocObjectContext:(id)arg1 currentDateProvider:(id)arg2;

@end

