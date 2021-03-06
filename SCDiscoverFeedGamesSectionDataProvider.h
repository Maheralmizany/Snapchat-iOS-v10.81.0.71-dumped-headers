//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCSectionDataProviding-Protocol.h"
#import "SCUpdateListener-Protocol.h"

@class NSArray, NSString, SCEventListenerAnnouncer, SCPreferences;
@protocol NSCopying, SCDiscoverFeedDataFetching, SCDiscoverFeedDataLoading, SCImageDownloading, SCPerforming, SCSectionDataProvidingDelegate;

@interface SCDiscoverFeedGamesSectionDataProvider : NSObject <SCUpdateListener, SCSectionDataProviding>
{
    id <SCDiscoverFeedDataFetching> _discoverFeedDataFetcher;
    id <SCDiscoverFeedDataLoading> _discoverFeedDataLoader;
    SCPreferences *_preferences;
    id <SCImageDownloading> _imageDownloader;
    SCEventListenerAnnouncer *_eventAnnouncer;
    long long _dataLoadingStatus;
    NSArray *_containerViewModels;
    id <SCSectionDataProvidingDelegate> _dataProviderDelegate;
    NSObject<NSCopying> *_sectionDataModel;
    id <SCPerforming> _updateQueuePerformer;
}

+ (id)announcerIdentifier;
@property(retain, nonatomic) id <SCPerforming> updateQueuePerformer; // @synthesize updateQueuePerformer=_updateQueuePerformer;
@property(copy, nonatomic) NSObject<NSCopying> *sectionDataModel; // @synthesize sectionDataModel=_sectionDataModel;
@property(nonatomic) __weak id <SCSectionDataProvidingDelegate> dataProviderDelegate; // @synthesize dataProviderDelegate=_dataProviderDelegate;
- (void).cxx_destruct;
- (void)_performUpdateStoriesFromDataStore;
- (void)didUpdateWithAnnouncerIdentifier:(id)arg1;
- (void)_reloadSection;
- (void)_reloadSectionWithContainerViewModels:(id)arg1;
- (long long)dataLoadingStatus;
- (void)_configureGamesCollectionViewCell:(id)arg1;
- (id)configurationBlocksByReuseIdentifier;
- (id)contentCellClassesByReuseIdentifier;
- (unsigned long long)numberOfItemsInSection:(unsigned long long)arg1;
- (unsigned long long)numberOfSections;
- (id)containerCellViewModelsForIndexPaths:(id)arg1;
- (void)tearDown;
- (void)setUp;
- (id)initWithUserPreferences:(id)arg1 discoverFeedDataFetcher:(id)arg2 discoverFeedDataLoader:(id)arg3 imageDownloader:(id)arg4;
- (void)removeListener:(id)arg1;
- (void)addListener:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

