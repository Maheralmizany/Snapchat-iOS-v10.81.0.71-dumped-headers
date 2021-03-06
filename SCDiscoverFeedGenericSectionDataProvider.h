//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCBloopsAPIListener-Protocol.h"
#import "SCSectionDataProviding-Protocol.h"
#import "SCUpdateListener-Protocol.h"

@class NSArray, NSString, SCDiscoverFeedSectionHeaderViewModel, SCEventListenerAnnouncer, SCExperimentManager, SCLazy, SCStreamingMediaManager, UIColor;
@protocol NSCopying, SCDiscoverFeedDataFetching, SCDiscoverFeedSnapAdsSharedInstanceStud, SCDiscoverFeedWhiteSpaceGestureCoordinating, SCImageDownloading, SCLegacyItemDownloading, SCPerforming, SCSectionDataProvidingDelegate;

@interface SCDiscoverFeedGenericSectionDataProvider : NSObject <SCUpdateListener, SCBloopsAPIListener, SCSectionDataProviding>
{
    SCEventListenerAnnouncer *_eventAnnouncer;
    NSArray *_containerViewModels;
    long long _dataLoadingStatus;
    SCStreamingMediaManager *_streamingMediaManager;
    id <SCDiscoverFeedDataFetching> _discoverFeedDataFetcher;
    id <SCImageDownloading> _imageDownloader;
    id <SCLegacyItemDownloading> _videoDownloader;
    SCExperimentManager *_experimentManager;
    _Bool _enablePublisherProfiles;
    NSString *_bitmojiAvatarId;
    CDUnknownFunctionPointerType _storyViewModelBuilderFunc;
    id <SCDiscoverFeedWhiteSpaceGestureCoordinating> _gestureCoordinator;
    id <SCDiscoverFeedSnapAdsSharedInstanceStud> _snapAdsSharedInstance;
    SCDiscoverFeedSectionHeaderViewModel *_headerViewModel;
    SCLazy *_bloopsAPI;
    _Bool _disableLoadingSpinner;
    id <SCSectionDataProvidingDelegate> _dataProviderDelegate;
    NSObject<NSCopying> *_sectionDataModel;
    id <SCPerforming> _updateQueuePerformer;
    UIColor *_backgroundColor;
}

+ (id)announcerIdentifier;
@property(nonatomic) _Bool disableLoadingSpinner; // @synthesize disableLoadingSpinner=_disableLoadingSpinner;
@property(retain, nonatomic) UIColor *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
@property(retain, nonatomic) id <SCPerforming> updateQueuePerformer; // @synthesize updateQueuePerformer=_updateQueuePerformer;
@property(copy, nonatomic) NSObject<NSCopying> *sectionDataModel; // @synthesize sectionDataModel=_sectionDataModel;
@property(nonatomic) __weak id <SCSectionDataProvidingDelegate> dataProviderDelegate; // @synthesize dataProviderDelegate=_dataProviderDelegate;
- (void).cxx_destruct;
- (_Bool)_bloopsIsAvailable;
- (void)_reloadSectionWithContainerViewModels:(id)arg1;
- (void)_reloadSection;
- (void)_performUpdateStoriesFromDataStore;
- (void)_configureStoryCardCollectionViewCell:(id)arg1;
- (void)bloopsAPI:(id)arg1 didChangeBloopsPreviewsResourcesStatus:(_Bool)arg2;
- (void)bloopsAPI:(id)arg1 didChangeBloopsFeatureStatus:(_Bool)arg2;
- (void)didUpdateWithAnnouncerIdentifier:(id)arg1;
- (id)supplementaryViewModels;
- (CDUnknownBlockType)viewModelChangesComparator;
- (CDUnknownBlockType)heroTileViewModelChangesComparator;
- (CDUnknownBlockType)modelCanUpdateComparator;
- (id)configurationBlocksByReuseIdentifier;
- (id)contentCellClassesByReuseIdentifier;
- (id)containerCellViewModelsForIndexPaths:(id)arg1;
- (unsigned long long)numberOfItemsInSection:(unsigned long long)arg1;
- (long long)experimentalPagingMode;
- (long long)dataLoadingStatus;
- (void)tearDown;
- (void)setUp;
- (id)initWithDiscoverFeedDataFetcher:(id)arg1 imageDownloader:(id)arg2 videoDownloader:(id)arg3 experimentManager:(id)arg4 enablePublisherProfiles:(_Bool)arg5 bitmojiAvatarId:(id)arg6 storyViewModelBuilder:(CDUnknownFunctionPointerType)arg7 gestureCoordinator:(id)arg8 snapAdsSharedInstance:(id)arg9 streamingMediaManager:(id)arg10 initialHeaderViewModel:(id)arg11 bloopsAPI:(id)arg12;
- (void)removeListener:(id)arg1;
- (void)addListener:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

