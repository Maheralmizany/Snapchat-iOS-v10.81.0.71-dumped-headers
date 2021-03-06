//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCLensFilteredMetadataStore-Protocol.h"
#import "SCLocationObserver-Protocol.h"
#import "SCTraceEnabled-Protocol.h"
#import "SCUnlockablesControllerListener-Protocol.h"

@class NSArray, NSString, SCGenericLensMetadataStore, SCLocationManager, SCUnlockablesController;

@interface SCGeoPrefetchLensMetadataStoreAdapterV2 : NSObject <SCTraceEnabled, SCUnlockablesControllerListener, SCLocationObserver, SCLensFilteredMetadataStore>
{
    SCGenericLensMetadataStore *_genericStore;
    SCUnlockablesController *_unlockablesController;
    SCLocationManager *_locationManager;
}

- (void).cxx_destruct;
- (double)locationObserverDesiredAccuracy;
- (id)locationObserverIdentifier;
- (id)locationObserverDispatchQueue;
- (_Bool)locationObserverWantsActiveLocationMonitoring;
- (void)didPrepareForGeoLensPrefetch:(id)arg1;
- (_Bool)supportsFilteringForAttribute:(unsigned long long)arg1;
- (void)synchronize;
- (void)applyMetadataProviderSettings:(id)arg1;
- (void)stopUpdating;
- (void)startUpdatingWithMode:(unsigned long long)arg1;
- (void)warmUp;
@property(readonly, nonatomic) NSArray *lensesToPrefetch;
@property(readonly, nonatomic) NSArray *lenses;
- (void)removeListener:(id)arg1;
- (void)addListener:(id)arg1;
- (void)dealloc;
- (id)initWithUnlockablesController:(id)arg1 locationManager:(id)arg2 announcerPerformer:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

