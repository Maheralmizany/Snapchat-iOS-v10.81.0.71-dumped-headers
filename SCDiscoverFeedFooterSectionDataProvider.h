//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCDataCoordinatorListener-Protocol.h"
#import "SCSectionDataProviding-Protocol.h"
#import "SCUpdateListener-Protocol.h"

@class NSArray, NSNumber, NSString, SCEventListenerAnnouncer;
@protocol NSCopying, SCDiscoverFeedDataFetching, SCDiscoverFeedInterestSelectionDataCoordinating, SCPerforming, SCSectionDataProvidingDelegate;

@interface SCDiscoverFeedFooterSectionDataProvider : NSObject <SCUpdateListener, SCDataCoordinatorListener, SCSectionDataProviding>
{
    SCEventListenerAnnouncer *_eventAnnouncer;
    id <SCDiscoverFeedDataFetching> _discoverFeedDataFetcher;
    id <SCDiscoverFeedInterestSelectionDataCoordinating> _interestSelectionDataCoordinator;
    NSArray *_viewModels;
    NSNumber *_feedType;
    _Bool _usePersonalizedLoading;
    id <SCSectionDataProvidingDelegate> _dataProviderDelegate;
    NSObject<NSCopying> *_sectionDataModel;
    id <SCPerforming> _updateQueuePerformer;
}

+ (id)announcerIdentifier;
@property(retain, nonatomic) id <SCPerforming> updateQueuePerformer; // @synthesize updateQueuePerformer=_updateQueuePerformer;
@property(copy, nonatomic) NSObject<NSCopying> *sectionDataModel; // @synthesize sectionDataModel=_sectionDataModel;
@property(nonatomic) __weak id <SCSectionDataProvidingDelegate> dataProviderDelegate; // @synthesize dataProviderDelegate=_dataProviderDelegate;
- (void).cxx_destruct;
- (void)_updateWithViewModels:(id)arg1;
- (void)_updateWithStoriesDataStore;
- (void)_dispatchUpdateWithStoriesDataStore;
- (id)_viewModels;
- (void)didUpdateWithAnnouncerIdentifier:(id)arg1;
- (void)dataCoordinatorDidUpdateWithIdentifier:(id)arg1 dataRequest:(id)arg2;
- (id)contentCellClassesByReuseIdentifier;
- (id)containerCellViewModelsForIndexPaths:(id)arg1;
- (unsigned long long)numberOfItemsInSection:(unsigned long long)arg1;
- (void)tearDown;
- (void)setUp;
- (id)initWithDiscoverFeedDataFetcher:(id)arg1 usePersonalizedLoading:(_Bool)arg2;
- (void)removeListener:(id)arg1;
- (void)addListener:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
