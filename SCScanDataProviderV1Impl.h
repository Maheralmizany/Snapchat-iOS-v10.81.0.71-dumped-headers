//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCScanDataProvider-Protocol.h"
#import "SCScanRequestV1Delegate-Protocol.h"

@class SCExperimentManager, SCLazy, SCObservable, SCPublishSubject, SCQueuePerformer;
@protocol SCRequestManager, SCScanEndpointProvider;

@interface SCScanDataProviderV1Impl : NSObject <SCScanRequestV1Delegate, SCScanDataProvider>
{
    id <SCScanEndpointProvider> _scanEndpointProvider;
    SCLazy *_snapTokenProvider;
    id <SCRequestManager> _requestManager;
    SCExperimentManager *_experimentManager;
    SCQueuePerformer *_performer;
    SCPublishSubject *_scanDataUpdateObservable;
}

- (void).cxx_destruct;
- (id)_shazamMetadata;
- (id)_photomathMetadata;
- (id)_amazonMetadata;
- (id)_metadataUpdate;
- (void)_publishError:(id)arg1 scanRequest:(id)arg2;
- (void)_publishDidBeginWithScanRequest:(id)arg1;
- (_Bool)_servicesArray:(id)arg1 containsService:(int)arg2;
- (void)_publishResponse:(id)arg1 scanRequest:(id)arg2 sceneIntRequest:(id)arg3;
- (int)_serviceFromUtilityLensId:(id)arg1;
- (id)_requestForImage:(id)arg1 utilityLensRequest:(id)arg2 gtqServeRequest:(id)arg3 location:(id)arg4 touchPoint:(struct CGPoint)arg5 isFrontFacing:(_Bool)arg6 scanSource:(long long)arg7 scanBarEnabled:(_Bool)arg8;
- (void)_performSceneIntRequest:(id)arg1 scanRequest:(id)arg2 accessToken:(id)arg3;
- (void)cancelScanRequestV1:(id)arg1;
@property(readonly, nonatomic) SCObservable *scanDataUpdateObservable;
- (id)performAnalysisForImage:(id)arg1 utilityLensRequest:(id)arg2 gtqServeRequest:(id)arg3 location:(id)arg4 touchPoint:(struct CGPoint)arg5 isFrontFacing:(_Bool)arg6 scanSource:(long long)arg7 scanBarEnabled:(_Bool)arg8;
- (id)initWithScanEndpointProvider:(id)arg1 snapTokenProvider:(id)arg2 requestManager:(id)arg3 experimentManager:(id)arg4;

@end

