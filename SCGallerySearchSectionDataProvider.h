//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCGallerySearchQueryResultsCollectorListener-Protocol.h"
#import "SCMemoriesMergedDataSourceListener-Protocol.h"
#import "SCSectionDataProviding-Protocol.h"

@class NSArray, NSString, SCEventListenerAnnouncer, SCGallerySearchRequest, SCSearchSession;
@protocol NSCopying, SCPerforming, SCSectionDataProvidingDelegate;

@interface SCGallerySearchSectionDataProvider : NSObject <SCMemoriesMergedDataSourceListener, SCGallerySearchQueryResultsCollectorListener, SCSectionDataProviding>
{
    SCSearchSession *_searchSession;
    SCGallerySearchRequest *_searchRequest;
    NSArray *_searchResults;
    SCEventListenerAnnouncer *_eventAnnouncer;
    long long _dataLoadingStatus;
    _Bool _exactMatch;
    NSArray *_allEntries;
    id <SCSectionDataProvidingDelegate> _dataProviderDelegate;
    NSObject<NSCopying> *_sectionDataModel;
    id <SCPerforming> _updateQueuePerformer;
}

+ (id)announcerIdentifier;
@property(retain, nonatomic) id <SCPerforming> updateQueuePerformer; // @synthesize updateQueuePerformer=_updateQueuePerformer;
@property(copy, nonatomic) NSObject<NSCopying> *sectionDataModel; // @synthesize sectionDataModel=_sectionDataModel;
@property(nonatomic) __weak id <SCSectionDataProvidingDelegate> dataProviderDelegate; // @synthesize dataProviderDelegate=_dataProviderDelegate;
- (void).cxx_destruct;
- (void)searchQueryResultsCollector:(id)arg1 didUpdateAllSearchQueryResults:(id)arg2;
- (void)dataSource:(id)arg1 didChangeEntries:(id)arg2 failedEntries:(id)arg3 fetchEntryError:(id)arg4;
- (void)_updateSearchResults;
- (void)_loadSearchResults:(id)arg1;
- (void)_configureMemoriesCollectionViewCell:(id)arg1;
- (long long)dataLoadingStatus;
- (id)configurationBlocksByReuseIdentifier;
- (id)contentCellClassesByReuseIdentifier;
- (id)containerCellViewModelsForIndexPaths:(id)arg1;
- (unsigned long long)numberOfItemsInSection:(unsigned long long)arg1;
- (void)tearDown;
- (void)setUp;
- (id)initWithSearchSession:(id)arg1 exactMatch:(_Bool)arg2;
- (void)removeListener:(id)arg1;
- (void)addListener:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

