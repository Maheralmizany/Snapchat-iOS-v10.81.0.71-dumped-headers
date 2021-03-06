//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCSectionDataProviding-Protocol.h"
#import "SCSnapchattersDataRequestListener-Protocol.h"

@class NSString, SCEventListenerAnnouncer, SCLazy;
@protocol NSCopying, SCPerforming, SCSectionDataProviding, SCSectionDataProvidingDelegate;

@interface SCAddFriendsEmptyStateSectionDataProvider : NSObject <SCSnapchattersDataRequestListener, SCSectionDataProviding>
{
    SCEventListenerAnnouncer *_eventAnnouncer;
    SCLazy *_snapchattersDataFetcher;
    SCLazy *_snapchattersDataTracker;
    SCLazy *_userInfoProvider;
    unsigned int _suggestionPage;
    id <SCSectionDataProviding> _sectionDataProvider;
    _Bool _shouldShowEmptyState;
    double _displayTimestamp;
    double _incomingFriendsLastViewedTimestamp;
    unsigned long long _displayTimingType;
    id <SCSectionDataProvidingDelegate> _dataProviderDelegate;
    NSObject<NSCopying> *_sectionDataModel;
    id <SCPerforming> _updateQueuePerformer;
}

+ (id)announcerIdentifier;
@property(retain, nonatomic) id <SCPerforming> updateQueuePerformer; // @synthesize updateQueuePerformer=_updateQueuePerformer;
@property(copy, nonatomic) NSObject<NSCopying> *sectionDataModel; // @synthesize sectionDataModel=_sectionDataModel;
@property(nonatomic) __weak id <SCSectionDataProvidingDelegate> dataProviderDelegate; // @synthesize dataProviderDelegate=_dataProviderDelegate;
- (void).cxx_destruct;
- (_Bool)_shouldShowEmptyStateWithContactSyncState;
- (void)_setShouldShowEmptyState:(_Bool)arg1;
- (id)_getFilterSnapchatters:(id)arg1;
- (void)_updateEmptyStateVisibility;
- (void)didEndSnapchattersContactDataRequest:(id)arg1 withResult:(id)arg2;
- (void)didEndSnapchattersSuggestDataRequest:(id)arg1 withSuccess:(_Bool)arg2;
- (void)didEndSnapchattersUpdateDataRequest:(id)arg1 withSuccess:(_Bool)arg2;
- (void)didEndSnapchattersFetchDataRequest:(id)arg1 withSuccess:(_Bool)arg2;
- (void)didStartSnapchattersSuggestDataRequest:(id)arg1;
- (void)didStartSnapchattersUpdateDataRequest:(id)arg1;
- (unsigned long long)numberOfItemsInSection:(unsigned long long)arg1;
- (id)contentCellClassesByReuseIdentifier;
- (id)containerCellViewModelsForIndexPaths:(id)arg1;
- (id)configurationBlocksByReuseIdentifier;
- (long long)dataLoadingStatus;
- (void)tearDown;
- (void)setUp;
- (id)initWithSnapchattersDataFetcher:(id)arg1 snapchattersDataTracker:(id)arg2 userInfoProvider:(id)arg3 viewedIncomingFriendsTracker:(id)arg4 suggestionPage:(unsigned int)arg5 sectionDataProvider:(id)arg6 emptyStateDisplayTimingType:(unsigned long long)arg7;
- (void)removeListener:(id)arg1;
- (void)addListener:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

