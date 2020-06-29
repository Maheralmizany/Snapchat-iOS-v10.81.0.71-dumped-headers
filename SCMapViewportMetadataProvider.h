//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCMapViewportListener-Protocol.h"
#import "SCMapViewportMetadataProvider-Protocol.h"

@class NSHashTable, NSString, SCMSGetViewportInfoRequest, SCMSGetViewportInfoResponse, SCMapSnapTokenService, SCMapViewportMetadataUpdatesListenerAnnouncer, SCQueuePerformer, SCThrottleTimer;
@protocol SCCanceling, SCMapGestures, SCMapViewport;

@interface SCMapViewportMetadataProvider : NSObject <SCMapViewportListener, SCMapViewportMetadataProvider>
{
    SCMapSnapTokenService *_mapSnapTokenService;
    id <SCMapViewport> _mapViewport;
    id <SCMapGestures> _mapGestures;
    struct ViewportInfo _currentlyLoadedViewportInfo;
    double _activeRequestStartTime;
    struct ViewportInfo _queuedViewportInfo;
    SCMSGetViewportInfoRequest *_queuedRequest;
    SCQueuePerformer *_queuePerformer;
    SCThrottleTimer *_throttleTimer;
    SCMapViewportMetadataUpdatesListenerAnnouncer *_announcer;
    NSHashTable *_listenersRequiringPeriodicUpdates;
    _Bool _shouldPerformRequests;
    _Bool _isRequestProcessing;
    _Bool _viewportChangedDuringRequest;
    SCMSGetViewportInfoResponse *_currentMetadata;
    id <SCCanceling> _activeRequestToken;
}

@property(retain) id <SCCanceling> activeRequestToken; // @synthesize activeRequestToken=_activeRequestToken;
@property(readonly) SCMSGetViewportInfoResponse *currentMetadata; // @synthesize currentMetadata=_currentMetadata;
- (void).cxx_destruct;
- (_Bool)_hasListenersRequiringPeriodicUpdates;
- (void)removeListener:(id)arg1;
- (void)addListener:(id)arg1;
- (void)mapViewportDidChangeTarget:(id)arg1;
- (void)mapViewport:(id)arg1 regionDidChangeAnimated:(_Bool)arg2;
- (void)mapViewportIsChanging:(id)arg1;
- (void)mapViewport:(id)arg1 regionWillChangeAnimated:(_Bool)arg2;
- (void)update;
- (void)_setupThrottleTimerWithTimeout:(double)arg1;
- (void)_handleRequestCompletionWithResponse:(id)arg1 error:(id)arg2 originalRequest:(id)arg3 viewportInfo:(struct ViewportInfo)arg4;
- (void)_performRequest:(id)arg1 viewportInfo:(struct ViewportInfo)arg2;
- (void)_clearQueuedRequest;
- (void)_timerFire;
- (void)_updateForViewport:(id)arg1;
- (id)initWithMapGestures:(id)arg1 mapViewport:(id)arg2 mapSnapTokenService:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

