//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCLocationPermissionObserver-Protocol.h"
#import "SCMapStatusFetcherListener-Protocol.h"
#import "SCSectionDataProviding-Protocol.h"

@class NSString, SCDisposableObserver, SCEmbeddedMapViewLoggingSession, SCEventListenerAnnouncer, SCProfileEmbeddedMapViewContainer, SCUserSession;
@protocol NSCopying, SCPerforming, SCSectionDataProvidingDelegate;

@interface SCMyUnifiedProfileMapSectionDataProvider : NSObject <SCMapStatusFetcherListener, SCLocationPermissionObserver, SCSectionDataProviding>
{
    SCEventListenerAnnouncer *_eventAnnouncer;
    SCUserSession *_userSession;
    SCEmbeddedMapViewLoggingSession *_mapViewLoggingSession;
    SCProfileEmbeddedMapViewContainer *_embeddedMapViewContainer;
    SCDisposableObserver *_locationPreferencesObserver;
    id <SCSectionDataProvidingDelegate> _dataProviderDelegate;
    id <SCPerforming> _updateQueuePerformer;
    NSObject<NSCopying> *_sectionDataModel;
}

+ (id)announcerIdentifier;
@property(copy, nonatomic) NSObject<NSCopying> *sectionDataModel; // @synthesize sectionDataModel=_sectionDataModel;
@property(retain, nonatomic) id <SCPerforming> updateQueuePerformer; // @synthesize updateQueuePerformer=_updateQueuePerformer;
@property(nonatomic) __weak id <SCSectionDataProvidingDelegate> dataProviderDelegate; // @synthesize dataProviderDelegate=_dataProviderDelegate;
- (void).cxx_destruct;
- (id)locationPermissionObserverUserId;
- (void)onLocationPermissionStatusChange:(unsigned long long)arg1;
- (void)mapStatusFetcherDidLoadMyStatus:(id)arg1;
- (void)_onLocationSharingPreferencesUpdated:(id)arg1;
- (void)_configureMapCardCell:(id)arg1;
- (id)configurationBlocksByReuseIdentifier;
- (id)_getContentViewModelForExploreStatus;
- (id)_getContentViewModelForSharingStatus;
- (id)_getContentViewModelForMap;
- (id)_getContentViewModelForIndexPath:(id)arg1;
- (id)contentCellClassesByReuseIdentifier;
- (id)containerCellViewModelsForIndexPaths:(id)arg1;
- (unsigned long long)numberOfItemsInSection:(unsigned long long)arg1;
- (void)removeListener:(id)arg1;
- (void)addListener:(id)arg1;
- (void)setUp;
@property(readonly, nonatomic) _Bool mapStatusEnabled;
- (id)initWithUserSession:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
