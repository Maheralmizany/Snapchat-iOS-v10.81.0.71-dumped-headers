//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCAudioSessionListener-Protocol.h"
#import "SCCognacAppViewLifeCycleListener-Protocol.h"
#import "SCCognacOperaSession-Protocol.h"
#import "SCShakeToReportExternalImageAttachmentProvider-Protocol.h"

@class NSDictionary, NSMutableSet, NSString, SCCognacOperaDataSource, SCCognacWebProxyDebugger, SCGCDBlockTimer, SCOperaViewController;
@protocol SCCognacCypressProxy;

@interface SCCognacOperaConfigureSession : NSObject <SCShakeToReportExternalImageAttachmentProvider, SCAudioSessionListener, SCCognacOperaSession, SCCognacAppViewLifeCycleListener>
{
    double _bottomSafeAreaHeight;
    unsigned long long _appResignActiveOperationCount;
    SCCognacWebProxyDebugger *_webProxyDebugger;
    SCGCDBlockTimer *_fpsMetricsTimer;
    NSMutableSet *_activeVolumeDampingCategories;
    _Bool _isUsingBluetoothAudioOutput;
    SCOperaViewController *_operaVC;
    id _deepLinkNavigationDelegate;
    NSDictionary *_fpsResponseDict;
    SCCognacOperaDataSource *_dataSource;
    id <SCCognacCypressProxy> _cypressProxy;
}

+ (id)registeredEventsForOperaSession;
@property(retain, nonatomic) id <SCCognacCypressProxy> cypressProxy; // @synthesize cypressProxy=_cypressProxy;
@property(retain, nonatomic) SCCognacOperaDataSource *dataSource; // @synthesize dataSource=_dataSource;
@property(copy) NSDictionary *fpsResponseDict; // @synthesize fpsResponseDict=_fpsResponseDict;
@property(nonatomic) __weak id deepLinkNavigationDelegate; // @synthesize deepLinkNavigationDelegate=_deepLinkNavigationDelegate;
@property(nonatomic) __weak SCOperaViewController *operaVC; // @synthesize operaVC=_operaVC;
- (void).cxx_destruct;
- (void)_updateVolumeForAudioOutputChangeIfNeeded:(id)arg1;
- (void)audioSessionRouteDidChangeReasonOverride:(id)arg1;
- (void)audioSessionRouteDidChangeReasonOldDeviceUnavailable:(id)arg1;
- (void)audioSessionRouteDidChangeReasonNewDeviceAvailable:(id)arg1;
- (void)getExternalImageAttachmentWithCompletion:(CDUnknownBlockType)arg1;
- (void)cognacAppViewDidUpdateVolumeCategory:(id)arg1 damping:(_Bool)arg2;
- (void)cognacAppViewDidBecomeActive:(_Bool)arg1 event:(id)arg2;
- (void)_outputFpsMetricsLog;
- (void)_fpsMetricsResponseWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)_setupTimerForFpsMetrics;
- (void)_setWebViewVolume;
- (double)_getWebViewVolume;
- (void)_initializeWebView;
- (CDUnknownBlockType)_getBestFriendsCypressHandler;
- (CDUnknownBlockType)_logEventCypressHandler;
- (CDUnknownBlockType)_getConversationParticipantsCypressHandler;
- (CDUnknownBlockType)_presentTermsOfServiceCypressHandler;
- (CDUnknownBlockType)_presentPrivacyPolicyCypressHandler;
- (CDUnknownBlockType)_loadingCompleteCypressHandler;
- (CDUnknownBlockType)_setLoadingProgressCypressHandler;
- (CDUnknownBlockType)_deepLinkToLensCypressHandler;
- (CDUnknownBlockType)_fetchAuthTokenCypressHandler;
- (CDUnknownBlockType)_playWithStrangersCypressHandler;
- (CDUnknownBlockType)_fetchAvatar3DCypressHandler;
- (CDUnknownBlockType)_fetchAvatar2DCypressHandler;
- (CDUnknownBlockType)_fetchDeviceContextsHandler;
- (CDUnknownBlockType)_initializeCypressHandler;
- (void)outputLog;
- (id)registeredCypressHandlerNameToHandler;
- (void)resumeSession;
- (void)pauseSession;
- (void)endSession;
- (void)startSession;
- (void)operaViewDidSendEvent:(id)arg1 context:(id)arg2 params:(id)arg3;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

