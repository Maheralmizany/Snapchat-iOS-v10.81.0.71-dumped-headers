//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCEventListener-Protocol.h"
#import "SCSectionDataProviding-Protocol.h"
#import "SCTraceEnabled-Protocol.h"
#import "SCUserSelectionListener-Protocol.h"

@class NSString, SCEventListenerAnnouncer, SCSearchQuery, SCSendToLatencyMetricLogger, SCSendToSelectionStateManager, SCUserSession;
@protocol NSCopying, SCPerforming, SCSectionDataProvidingDelegate, SCSendToStoriesDataSource;

@interface SCCheetahSendToStorySectionListViewDataProvider : NSObject <SCTraceEnabled, SCSectionDataProviding, SCUserSelectionListener, SCEventListener>
{
    SCEventListenerAnnouncer *_eventAnnouncer;
    SCUserSession *_userSession;
    id <SCSendToStoriesDataSource> _storiesDataSource;
    SCSendToSelectionStateManager *_selectionStateManager;
    SCSearchQuery *_lastQuery;
    long long _recipientViewStyle;
    _Bool _enablePostingToAppStories;
    SCSendToLatencyMetricLogger *_latencyLogger;
    NSString *_currentUsername;
    id <SCSectionDataProvidingDelegate> _dataProviderDelegate;
    NSObject<NSCopying> *_sectionDataModel;
    id <SCPerforming> _updateQueuePerformer;
    long long _contentMode;
}

+ (id)announcerIdentifier;
@property(nonatomic) long long contentMode; // @synthesize contentMode=_contentMode;
@property(retain, nonatomic) id <SCPerforming> updateQueuePerformer; // @synthesize updateQueuePerformer=_updateQueuePerformer;
@property(copy, nonatomic) NSObject<NSCopying> *sectionDataModel; // @synthesize sectionDataModel=_sectionDataModel;
@property(nonatomic) __weak id <SCSectionDataProvidingDelegate> dataProviderDelegate; // @synthesize dataProviderDelegate=_dataProviderDelegate;
- (void).cxx_destruct;
- (id)_containerCellViewModelForIndexPath:(id)arg1;
- (id)_appStorySendToMetadataForAppId:(id)arg1;
- (unsigned long long)_numberOfItemsToDisplay;
- (void)_configureRecipientCollectionViewCell:(id)arg1;
- (void)_updateSectionDataWithSendToDataModels:(id)arg1 isSearchQueryFromSelection:(_Bool)arg2;
- (void)_updateSectionModelWithQuery:(id)arg1;
- (void)didTriggerEventWithEventName:(id)arg1 announcerIdentifier:(id)arg2 extraData:(id)arg3;
- (void)didUpdateWithIdentifier:(id)arg1 selectedItems:(id)arg2 deselectedItems:(id)arg3;
- (double)minimumInteritemSpacing;
- (id)configurationBlocksByReuseIdentifier;
- (id)contentCellClassesByReuseIdentifier;
- (id)containerCellViewModelsForIndexPaths:(id)arg1;
- (unsigned long long)numberOfItemsInSection:(unsigned long long)arg1;
- (void)tearDown;
- (void)setUp;
- (void)dealloc;
- (id)initWithUserSession:(id)arg1 storiesDataSource:(id)arg2 selectionStateManager:(id)arg3 recipientViewStyle:(long long)arg4 enablePostingToAppStories:(_Bool)arg5 latencyLogger:(id)arg6;
- (void)removeListener:(id)arg1;
- (void)addListener:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

