//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCSectionDataProviding-Protocol.h"

@class NSArray, NSOperationQueue, NSString, SCDisposableObserverLifecycle, SCEventListenerAnnouncer, SCLazy;
@protocol NSCopying, SCImageDownloading, SCPerforming, SCSectionDataProvidingDelegate;

@interface SCCustomStoryMembersListSectionDataProvider : NSObject <SCSectionDataProviding>
{
    SCLazy *_dataSource;
    id <SCImageDownloading> _imageDownloader;
    SCEventListenerAnnouncer *_eventAnnouncer;
    long long _dataLoadingStatus;
    SCDisposableObserverLifecycle *_subscription;
    NSOperationQueue *_observationQueue;
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
- (void)_configureSnapchatterCollectionViewCell:(id)arg1;
- (id)_containerCellViewModelForSnapchatter:(id)arg1 index:(unsigned long long)arg2 count:(unsigned long long)arg3;
- (void)_setSnapchatters:(id)arg1;
- (id)configurationBlocksByReuseIdentifier;
- (id)contentCellClassesByReuseIdentifier;
- (id)containerCellViewModelsForIndexPaths:(id)arg1;
- (unsigned long long)numberOfItemsInSection:(unsigned long long)arg1;
- (long long)dataLoadingStatus;
- (void)removeListener:(id)arg1;
- (void)addListener:(id)arg1;
- (id)initWithDataSource:(id)arg1 imageDownloader:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

