//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCSectionDataProviding-Protocol.h"

@class NSArray, NSDictionary, NSOperationQueue, NSString, SCDisposableObserverLifecycle, SCEventListenerAnnouncer, SCExperimentManager, SCLazy, SCObservable, SCSelectionTracker, UIImage;
@protocol NSCopying, SCImageDownloading, SCPerforming, SCSectionDataProvidingDelegate;

@interface SCSelectionStorySectionDataProvider : NSObject <SCSectionDataProviding>
{
    SCLazy *_dataSource;
    SCObservable *_storyThumbnail;
    CDUnknownBlockType _viewModelGenerator;
    SCSelectionTracker *_selectionTracker;
    id <SCImageDownloading> _imageDownloader;
    unsigned long long _sectionLayout;
    NSString *_cellReuseIdentifier;
    NSString *_carouselCellReuseIdentifier;
    SCEventListenerAnnouncer *_eventAnnouncer;
    long long _dataLoadingStatus;
    SCDisposableObserverLifecycle *_subscription;
    NSOperationQueue *_observationQueue;
    NSArray *_containerViewModels;
    NSDictionary *_selectionIdentifierToIndexMap;
    NSArray *_selectionStories;
    UIImage *_storyThumbnailImage;
    SCExperimentManager *_experimentManager;
    id <SCSectionDataProvidingDelegate> _dataProviderDelegate;
    NSObject<NSCopying> *_sectionDataModel;
    id <SCPerforming> _updateQueuePerformer;
}

+ (id)announcerIdentifier;
@property(retain, nonatomic) id <SCPerforming> updateQueuePerformer; // @synthesize updateQueuePerformer=_updateQueuePerformer;
@property(copy, nonatomic) NSObject<NSCopying> *sectionDataModel; // @synthesize sectionDataModel=_sectionDataModel;
@property(nonatomic) __weak id <SCSectionDataProvidingDelegate> dataProviderDelegate; // @synthesize dataProviderDelegate=_dataProviderDelegate;
- (void).cxx_destruct;
- (void)_configureCarouselCollectionViewCell:(id)arg1;
- (void)_configureRecipientCollectionViewCell:(id)arg1;
- (id)_containerCellViewModelForSelectionStory:(id)arg1 index:(unsigned long long)arg2 isSelected:(_Bool)arg3 count:(unsigned long long)arg4;
- (void)_setItemToSelectionStateMap:(struct NSDictionary *)arg1;
- (void)_setSelectionStories:(id)arg1;
- (void)_setStoryThumbnailImage:(id)arg1;
- (id)configurationBlocksByReuseIdentifier;
- (id)contentCellClassesByReuseIdentifier;
- (id)containerCellViewModelsForIndexPaths:(id)arg1;
- (unsigned long long)numberOfItemsInSection:(unsigned long long)arg1;
- (long long)dataLoadingStatus;
- (void)tearDown;
- (void)setUp;
- (void)removeListener:(id)arg1;
- (void)addListener:(id)arg1;
- (id)initWithDataSource:(id)arg1 storyThumbnail:(id)arg2 viewModelGenerator:(CDUnknownBlockType)arg3 selectionTracker:(id)arg4 imageDownloader:(id)arg5 sectionLayout:(unsigned long long)arg6 experimentManager:(id)arg7;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

