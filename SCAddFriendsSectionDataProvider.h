//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCAddFriendsSnapchatterCollectionCellViewModelProvider-Protocol.h"
#import "SCAddFriendsViewModelsDecorationListener-Protocol.h"
#import "SCSectionDataProviding-Protocol.h"
#import "SCSnapchattersDataRequestListener-Protocol.h"

@class NSArray, NSString, SCBehaviorSubject, SCEventListenerAnnouncer, SCLazy;
@protocol NSCopying, SCAddFriendsViewModelsDecorating, SCImageDownloading, SCLegacyItemDownloading, SCPerforming, SCSectionDataProvidingDelegate, SCSnapchatterRanking;

@interface SCAddFriendsSectionDataProvider : NSObject <SCSnapchattersDataRequestListener, SCAddFriendsViewModelsDecorationListener, SCSectionDataProviding, SCAddFriendsSnapchatterCollectionCellViewModelProvider>
{
    SCEventListenerAnnouncer *_eventAnnouncer;
    SCLazy *_snapchattersDataFetcher;
    SCLazy *_snapchattersDataTracker;
    double _displayTimestamp;
    id <SCImageDownloading> _imageDownloader;
    id <SCLegacyItemDownloading> _labelInfoFetcher;
    long long _dataLoadingStatus;
    NSArray *_containerViewModels;
    CDUnknownBlockType _viewModelGenerator;
    CDUnknownBlockType _displayFilter;
    id <SCSnapchatterRanking> _snapchatterRanker;
    id <SCAddFriendsViewModelsDecorating> _viewModelsDecorator;
    long long _placement;
    id <SCSectionDataProvidingDelegate> _dataProviderDelegate;
    NSObject<NSCopying> *_sectionDataModel;
    id <SCPerforming> _updateQueuePerformer;
    SCBehaviorSubject *_containerCellViewModelsSubject;
}

+ (id)announcerIdentifier;
@property(readonly) SCBehaviorSubject *containerCellViewModelsSubject; // @synthesize containerCellViewModelsSubject=_containerCellViewModelsSubject;
@property(retain, nonatomic) id <SCPerforming> updateQueuePerformer; // @synthesize updateQueuePerformer=_updateQueuePerformer;
@property(copy, nonatomic) NSObject<NSCopying> *sectionDataModel; // @synthesize sectionDataModel=_sectionDataModel;
@property(nonatomic) __weak id <SCSectionDataProvidingDelegate> dataProviderDelegate; // @synthesize dataProviderDelegate=_dataProviderDelegate;
- (void).cxx_destruct;
- (void)_setSnapchatters:(id)arg1;
- (void)_promoteUnviewedAndSetSnapchatters:(id)arg1;
- (void)_rankAndSetSnapchatters:(id)arg1;
- (void)_configureRecipientCollectionViewCell:(id)arg1;
- (void)_updateSectionDataModel;
- (void)_updateSectionDataModelWithPerformer;
- (id)_containerCellViewModelForSnapchatter:(id)arg1 index:(unsigned long long)arg2 snapchattersCount:(unsigned long long)arg3;
- (void)decorationDidBecomeAvailable;
- (void)didEndSnapchattersContactDataRequest:(id)arg1 withResult:(id)arg2;
- (void)didEndSnapchattersSuggestDataRequest:(id)arg1 withSuccess:(_Bool)arg2;
- (void)didEndSnapchattersFetchDataRequest:(id)arg1 withSuccess:(_Bool)arg2;
- (void)didEndSnapchattersUpdateDataRequest:(id)arg1 withSuccess:(_Bool)arg2;
- (void)didStartSnapchattersUpdateDataRequest:(id)arg1;
- (id)configurationBlocksByReuseIdentifier;
- (unsigned long long)numberOfItemsInSection:(unsigned long long)arg1;
- (id)contentCellClassesByReuseIdentifier;
- (id)containerCellViewModelsForIndexPaths:(id)arg1;
- (long long)dataLoadingStatus;
- (id)initWithSnapchattersDataFetcher:(id)arg1 snapchattersDataTracker:(id)arg2 imageDownloader:(id)arg3 labelInfoFetcher:(id)arg4 displayTimestamp:(double)arg5 viewModelGenerator:(CDUnknownBlockType)arg6 displayFilter:(CDUnknownBlockType)arg7 snapchatterRanker:(id)arg8 viewModelsDecorator:(id)arg9 placement:(long long)arg10;
- (void)removeListener:(id)arg1;
- (void)addListener:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

