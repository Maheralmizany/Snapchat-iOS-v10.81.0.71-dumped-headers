//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "GRPCProtoResponseHandler-Protocol.h"
#import "SCNetworkConnectivityListener-Protocol.h"
#import "SCStreamingLocationsRPCProviding-Protocol.h"

@class GRPCStreamingProtoCall, NSMutableArray, NSString, NSTimer, SCLazy, SCQueuePerformer, SCVSValis;
@protocol OS_dispatch_queue;

@interface SCStreamingLocationsRPCProvider : NSObject <GRPCProtoResponseHandler, SCNetworkConnectivityListener, SCStreamingLocationsRPCProviding>
{
    SCLazy *_snapTokenProvider;
    SCVSValis *_valisService;
    SCQueuePerformer *_queuePerformer;
    GRPCStreamingProtoCall *_communicationSession;
    NSMutableArray *_setSharingCompletions;
    NSMutableArray *_getSharingCompletions;
    NSTimer *_keepAliveProcess;
    _Bool _active;
    SCLazy *_locationSharingPreferencesHandler;
    SCLazy *_friendClustersHandler;
}

@property(nonatomic, getter=isActive) _Bool active; // @synthesize active=_active;
@property(retain, nonatomic) SCLazy *friendClustersHandler; // @synthesize friendClustersHandler=_friendClustersHandler;
@property(retain, nonatomic) SCLazy *locationSharingPreferencesHandler; // @synthesize locationSharingPreferencesHandler=_locationSharingPreferencesHandler;
- (void).cxx_destruct;
- (void)networkConnectivityStatusDidChange:(long long)arg1;
- (void)completeSetLocationSharingPreferencesWithError:(id)arg1;
- (void)completeGetLocationSharingPreferencesWithComplete:(_Bool)arg1 preferences:(id)arg2 error:(id)arg3;
- (void)setLocationSharingPreferences:(id)arg1 completionQueue:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)getLocationSharingPreferencesWithCompletionQueue:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)didCloseWithTrailingMetadata:(id)arg1 error:(id)arg2;
- (void)_processServerUpdate:(id)arg1;
- (void)didReceiveProtoMessage:(id)arg1;
- (void)didReceiveInitialMetadata:(id)arg1;
@property(readonly) NSObject<OS_dispatch_queue> *dispatchQueue;
- (void)_setupCommunicationSessionWithToken:(id)arg1;
- (void)_teardown;
- (void)_setupIfNecessary;
- (void)updateWithClientUpdate:(id)arg1;
- (id)initWithSnapTokenProvider:(id)arg1 locationSharingPreferencesHandler:(id)arg2 friendClustersHandler:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

