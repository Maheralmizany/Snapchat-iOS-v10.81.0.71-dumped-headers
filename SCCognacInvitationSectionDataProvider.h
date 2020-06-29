//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCCognacAppActivityListCellDelegate-Protocol.h"
#import "SCEventListener-Protocol.h"
#import "SCSectionDataProviding-Protocol.h"

@class NSArray, NSDictionary, NSMutableArray, NSString, SCCognacDataStorage, SCCognacServiceCoordinator, SCCognacSnapchatterService, SCEventListenerAnnouncer;
@protocol NSCopying, SCImageDownloading, SCPerforming, SCSectionDataProvidingDelegate;

@interface SCCognacInvitationSectionDataProvider : NSObject <SCCognacAppActivityListCellDelegate, SCSectionDataProviding, SCEventListener>
{
    id <SCImageDownloading> _imageDownloader;
    SCCognacDataStorage *_cognacDataStorage;
    SCCognacServiceCoordinator *_cognacServiceCoordinator;
    SCCognacSnapchatterService *_cognacSnapchatterService;
    unsigned long long _viewStyle;
    NSString *_cellIdentifier;
    long long _dataLoadingStatus;
    SCEventListenerAnnouncer *_eventAnnouncer;
    NSMutableArray *_invitations;
    NSDictionary *_userIdToSnapchattersMap;
    NSDictionary *_instanceIdToAppInstancesMap;
    NSArray *_containerCellViewModels;
    id <SCSectionDataProvidingDelegate> _dataProviderDelegate;
    NSObject<NSCopying> *_sectionDataModel;
    id <SCPerforming> _updateQueuePerformer;
}

+ (id)announcerIdentifier;
@property(retain, nonatomic) id <SCPerforming> updateQueuePerformer; // @synthesize updateQueuePerformer=_updateQueuePerformer;
@property(copy, nonatomic) NSObject<NSCopying> *sectionDataModel; // @synthesize sectionDataModel=_sectionDataModel;
@property(nonatomic) __weak id <SCSectionDataProvidingDelegate> dataProviderDelegate; // @synthesize dataProviderDelegate=_dataProviderDelegate;
- (void).cxx_destruct;
- (id)_thumbnailViewModelWithSnapchatter:(id)arg1;
- (id)_getDescriptionTextWithAppInstance:(id)arg1 appName:(id)arg2 snapchatter:(id)arg3;
- (id)_makeAppActivityListCellViewModelWithInvitation:(id)arg1;
- (void)_updateContainerCellViewModels;
- (id)_appInstancesMap:(id)arg1;
- (void)_batchGetAppInstances;
- (id)_snapchattersMap:(id)arg1;
- (void)_fetchSnapchatters;
- (id)_sortedInvitations:(id)arg1;
- (void)_listInvitations;
- (void)_notifyDelegateAndUpdateLoadingStatusWithStatus:(long long)arg1;
- (void)_handleRemovedInvitation;
- (unsigned long long)_indexOfCell:(id)arg1;
- (id)tapActionModelWithCell:(id)arg1;
- (void)didTriggerEventWithEventName:(id)arg1 announcerIdentifier:(id)arg2 extraData:(id)arg3;
- (id)configurationBlocksByReuseIdentifier;
- (long long)dataLoadingStatus;
- (id)contentCellClassesByReuseIdentifier;
- (id)containerCellViewModelsForIndexPaths:(id)arg1;
- (unsigned long long)numberOfItemsInSection:(unsigned long long)arg1;
- (void)removeListener:(id)arg1;
- (void)addListener:(id)arg1;
- (void)dealloc;
- (id)initWithImageDownloader:(id)arg1 cognacSnapchatterService:(id)arg2 cognacServiceCoordinator:(id)arg3 cognacDataStorage:(id)arg4 viewStyle:(unsigned long long)arg5 cellIdentifier:(id)arg6;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

