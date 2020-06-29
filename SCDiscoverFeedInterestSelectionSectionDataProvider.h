//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCDataCoordinatorListener-Protocol.h"
#import "SCSectionDataProviding-Protocol.h"

@class NSArray, NSString, SCDiscoverFeedInterestSelectionSectionStaticHeaderViewModel, SCEventListenerAnnouncer, UIColor;
@protocol NSCopying, SCDiscoverFeedInterestSelectionDataCoordinating, SCImageDownloading, SCPerforming, SCSectionDataProvidingDelegate;

@interface SCDiscoverFeedInterestSelectionSectionDataProvider : NSObject <SCDataCoordinatorListener, SCSectionDataProviding>
{
    SCEventListenerAnnouncer *_eventAnnouncer;
    id <SCDiscoverFeedInterestSelectionDataCoordinating> _dataCoordinator;
    NSArray *_containerCellViewModels;
    unsigned long long _interestSelectionLocation;
    id <SCImageDownloading> _imageDownloader;
    SCDiscoverFeedInterestSelectionSectionStaticHeaderViewModel *_headerViewModel;
    long long _dataLoadingStatus;
    double _leftMargin;
    NSString *_sectionIdentifier;
    int _feedType;
    _Bool _isThumbnailCarousel;
    UIColor *_headerColor;
    id <SCSectionDataProvidingDelegate> _dataProviderDelegate;
    NSObject<NSCopying> *_sectionDataModel;
    id <SCPerforming> _updateQueuePerformer;
}

+ (id)announcerIdentifier;
@property(retain, nonatomic) id <SCPerforming> updateQueuePerformer; // @synthesize updateQueuePerformer=_updateQueuePerformer;
@property(copy, nonatomic) NSObject<NSCopying> *sectionDataModel; // @synthesize sectionDataModel=_sectionDataModel;
@property(nonatomic) __weak id <SCSectionDataProvidingDelegate> dataProviderDelegate; // @synthesize dataProviderDelegate=_dataProviderDelegate;
- (void).cxx_destruct;
- (void)_configureStoryCardCollectionViewCell:(id)arg1;
- (void)_updateViewModelsWithInterestTopicData:(id)arg1 topicStateData:(id)arg2 lastSelectedTopics:(id)arg3 isLoading:(_Bool)arg4;
- (void)_updateViewModelsWithInterestTopicData:(id)arg1 selectedTopicIds:(id)arg2 expansionNumberMap:(id)arg3 relatedAccounts:(id)arg4;
- (void)_performUpdateViewModelWithInterestTopicData:(id)arg1 topicStateData:(id)arg2 lastSelectedTopics:(id)arg3 isLoading:(_Bool)arg4;
- (void)_performUpdateViewModelWithInterestTopicData:(id)arg1 selectedTopicIds:(id)arg2 expansionNumberMap:(id)arg3 relatedAccounts:(id)arg4;
- (void)_fetchInterestTopicDataAndPerformUpdate;
- (void)dataCoordinatorDidUpdateWithIdentifier:(id)arg1 dataRequest:(id)arg2;
- (long long)dataLoadingStatus;
- (CDUnknownBlockType)modelCanUpdateComparator;
- (id)supplementaryViewModels;
- (id)configurationBlocksByReuseIdentifier;
- (unsigned long long)numberOfItemsInSection:(unsigned long long)arg1;
- (id)contentCellClassesByReuseIdentifier;
- (id)containerCellViewModelsForIndexPaths:(id)arg1;
- (void)tearDown;
- (void)setUp;
- (id)initWithDataCoordinator:(id)arg1 imageDownloader:(id)arg2 feedType:(long long)arg3 sectionIdentifier:(id)arg4 leftMargin:(double)arg5 headerColor:(id)arg6;
- (id)initWithDataCoordinator:(id)arg1 interestSelectionLocation:(unsigned long long)arg2 imageDownloader:(id)arg3;
- (void)removeListener:(id)arg1;
- (void)addListener:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

