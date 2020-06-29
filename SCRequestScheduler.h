//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCCancelTaskInNNMDelegate-Protocol.h"
#import "SCConnectionClassManagerV2Listener-Protocol.h"
#import "SCNNetworkCallbackDelegate-Protocol.h"
#import "SCNNetworkNetworkManager-Protocol.h"

@class NSArray, NSMutableDictionary, NSSet, NSString, SCDisplayContext, SCDownloadConsumptionRecorder, SCLazy, SCNetworkBandwidthChangeNotifier, SCNetworkConnectivityAnnouncer, SCNetworkConnectivityChangeNotifier, SCNetworkUiPageChangeNotifier, SCRequestManagerLogger, SCRequestManagerRunningTaskState, SCRequestPriorityConcurrencyController, SCRequestTaskPool;
@protocol SCNetworkInterceptor, SCPerforming, SCRequestSchedulerDelegate, SCRequestTaskRunDelegate;

@interface SCRequestScheduler : NSObject <SCCancelTaskInNNMDelegate, SCConnectionClassManagerV2Listener, SCNNetworkNetworkManager, SCNNetworkCallbackDelegate>
{
    SCDisplayContext *_displayContext;
    NSString *_URLSessionHighPriorityContext;
    _Bool _isInHighPriorityContext;
    struct SCNetworkTraceFileStruct *_traceFile;
    id <SCRequestTaskRunDelegate> _taskRunDelegate;
    SCRequestPriorityConcurrencyController *_metadataConcurrencyController;
    SCRequestPriorityConcurrencyController *_largeDownloadConcurrencyController;
    _Bool _isAllDownloadsPaused;
    SCNetworkUiPageChangeNotifier *_uiPageChangeNotifier;
    SCNetworkConnectivityChangeNotifier *_connectivityChangeNotifier;
    SCNetworkBandwidthChangeNotifier *_bandwidthChangeNotifier;
    NSMutableDictionary *_nativeRequestKeyToSCRequestKey;
    _Bool _shouldSkipResumableRequestToNNM;
    _Bool _shouldUseNNM;
    _Bool _shouldBoostPriorityIfMetadata;
    _Bool _shouldBoostPriorityIfUserInitiatedDownload;
    _Bool _shouldBoostPriorityIfRequestBoostPriority;
    _Bool _isCriticalMode;
    _Bool _isBackgroundDownloadPaused;
    _Bool _isAllDownloadPaused;
    _Bool _isContextOnlyModeForCurrentContextSession;
    NSArray<SCNetworkInterceptor> *_networkInterceptors;
    id <SCRequestSchedulerDelegate> _delegate;
    SCRequestTaskPool *_allTasks;
    NSSet *_allTaskPools;
    SCRequestManagerRunningTaskState *_runningTaskState;
    NSMutableDictionary *_runningTasks;
    SCRequestTaskPool *_wwanTasks;
    SCNetworkConnectivityAnnouncer *_connectivityAnnouncer;
    SCRequestManagerLogger *_networkManagerLogger;
    SCDownloadConsumptionRecorder *_downloadConsumptionRecorder;
    id <SCPerforming> _queuePerformer;
    CDUnknownBlockType _dataSaverProviderBlock;
    SCLazy *_lazyNetworkApiRouter;
}

+ (long long)_numberOfTasksInArray:(id)arg1 thatMatch:(CDUnknownBlockType)arg2;
@property(retain, nonatomic) SCLazy *lazyNetworkApiRouter; // @synthesize lazyNetworkApiRouter=_lazyNetworkApiRouter;
@property(copy, nonatomic) CDUnknownBlockType dataSaverProviderBlock; // @synthesize dataSaverProviderBlock=_dataSaverProviderBlock;
@property(nonatomic) _Bool isContextOnlyModeForCurrentContextSession; // @synthesize isContextOnlyModeForCurrentContextSession=_isContextOnlyModeForCurrentContextSession;
@property(retain, nonatomic) id <SCPerforming> queuePerformer; // @synthesize queuePerformer=_queuePerformer;
@property(nonatomic) _Bool isAllDownloadPaused; // @synthesize isAllDownloadPaused=_isAllDownloadPaused;
@property(nonatomic) _Bool isBackgroundDownloadPaused; // @synthesize isBackgroundDownloadPaused=_isBackgroundDownloadPaused;
@property(retain, nonatomic) SCDownloadConsumptionRecorder *downloadConsumptionRecorder; // @synthesize downloadConsumptionRecorder=_downloadConsumptionRecorder;
@property(copy, nonatomic) SCRequestManagerLogger *networkManagerLogger; // @synthesize networkManagerLogger=_networkManagerLogger;
@property(retain, nonatomic) SCNetworkConnectivityAnnouncer *connectivityAnnouncer; // @synthesize connectivityAnnouncer=_connectivityAnnouncer;
@property(retain, nonatomic) SCRequestTaskPool *wwanTasks; // @synthesize wwanTasks=_wwanTasks;
@property(retain, nonatomic) NSMutableDictionary *runningTasks; // @synthesize runningTasks=_runningTasks;
@property(retain, nonatomic) SCRequestManagerRunningTaskState *runningTaskState; // @synthesize runningTaskState=_runningTaskState;
@property(retain, nonatomic) NSSet *allTaskPools; // @synthesize allTaskPools=_allTaskPools;
@property(retain, nonatomic) SCRequestTaskPool *allTasks; // @synthesize allTasks=_allTasks;
@property(nonatomic) _Bool isCriticalMode; // @synthesize isCriticalMode=_isCriticalMode;
@property(nonatomic) __weak id <SCRequestSchedulerDelegate> delegate; // @synthesize delegate=_delegate;
@property(copy) NSArray<SCNetworkInterceptor> *networkInterceptors; // @synthesize networkInterceptors=_networkInterceptors;
- (void).cxx_destruct;
- (_Bool)_shouldBoostQueuePriority:(id)arg1;
- (void)uploadConnectionClassDidChange:(id)arg1;
- (void)downloadConnectionClassDidChange:(id)arg1;
- (void)updateUILayoutOrder:(id)arg1 rootContext:(id)arg2 mediaContextType:(long long)arg3;
- (void)_logDataConsumptionRecordWithTask:(id)arg1 data:(id)arg2;
- (void)reenqueueTask:(id)arg1;
- (void)didRunTask:(id)arg1 withData:(id)arg2 withResponse:(id)arg3;
- (void)_handleNativeCallbackWithFinishedRequestTask:(id)arg1 error:(id)arg2;
- (void)_updateNativeHttpRequestWithRequestTask:(id)arg1;
- (void)_cancelNativeHttpRequestWithRequestTask:(id)arg1;
- (void)stopNetLog;
- (_Bool)startNetLog;
- (id)pathToNetLog;
- (void)cancel:(id)arg1;
- (void)_submitRankedRequestsOnPerformer:(id)arg1;
- (void)executeRequestDirectly:(id)arg1;
- (void)submit:(id)arg1;
- (unsigned long long)metadataRequestConcurrency;
- (unsigned long long)downloadRequestConcurrency;
- (unsigned long long)totalRequestConcurrencyReceivingData;
- (unsigned long long)numOfUploadTasks;
- (unsigned long long)numOfLargeDLTasks;
- (long long)_numberOfRunningTasksThatMatch:(CDUnknownBlockType)arg1;
- (long long)_numberOfRunningDownloadTasks;
- (long long)_numberOfQueuedTasksThatMatch:(CDUnknownBlockType)arg1;
- (id)_loggerParameter;
- (void)downloadStateForRequestWithKey:(id)arg1 completionQueue:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (unsigned long long)_numberOfRunningLargeCriticalDownloadTasks;
- (unsigned long long)_numberOfRunningSmallOutOfContextDownloadTasks;
- (unsigned long long)_numberOfRunningLargeOutOfContextDownloadTasks;
- (_Bool)_shouldLeaveContextOnlyMode:(long long)arg1 withContexts:(id)arg2;
- (_Bool)_shouldEnterContextOnlyMode:(long long)arg1 withContexts:(id)arg2;
- (_Bool)_hasIntersetContext:(id)arg1;
- (_Bool)_isCriticalTask:(id)arg1;
- (_Bool)_isAnyCriticalTaskRunning;
- (id)_removeTaskForKey:(id)arg1;
- (void)_removeContext:(id)arg1 withChilds:(_Bool)arg2 disableContextOnlyModeIfRemoved:(_Bool)arg3;
- (void)networkReachabilityStatusDidChangeWithNotification:(id)arg1;
- (void)reset;
- (void)stopToMonitorProgressWithRequestKey:(id)arg1;
- (void)startToMonitorProgressWithRequestKey:(id)arg1 queue:(id)arg2 progressHandler:(CDUnknownBlockType)arg3;
- (void)resumeAllRequestsWithReason:(id)arg1;
- (void)pauseAllRequestsWithReason:(id)arg1;
- (void)resumeBackgroundDownloads;
- (void)pauseBackgroundDownloads;
- (void)removeWithChildsParentContext:(id)arg1 disableContextOnlyModeIfRemoved:(_Bool)arg2;
- (void)removeContext:(id)arg1 disableContextOnlyModeIfRemoved:(_Bool)arg2;
- (void)removeContexts:(id)arg1;
- (void)removeContext:(id)arg1;
- (void)addContext:(id)arg1;
- (void)_setCurrentContextsForRunningTasks;
- (void)_setContexts:(id)arg1 withQueuePerformer:(_Bool)arg2 withRequestManagerMode:(long long)arg3;
- (void)_setContexts:(id)arg1 withQueuePerformer:(_Bool)arg2;
- (void)setContexts:(id)arg1 withRequestManagerMode:(long long)arg2;
- (void)setContexts:(id)arg1;
- (void)contextsWithBlock:(CDUnknownBlockType)arg1;
- (void)_removeRunningTaskWithKey:(id)arg1;
- (_Bool)_shouldCreateConsumptionRecordWithTask:(id)arg1 data:(id)arg2;
- (void)_didRunTaskWithKey:(id)arg1 data:(id)arg2;
- (void)_willRunTask:(id)arg1;
- (void)_calculateSessionPriorityForTask:(id)arg1;
- (void)_pauseTasks:(id)arg1 forReason:(id)arg2;
- (void)_pauseAllRequestsWithReason:(id)arg1;
- (_Bool)_willExceedSingleContextLargeDownloadConcurrencyWithTask:(id)arg1;
- (_Bool)_shouldRunLargeDownloadTask:(id)arg1;
- (_Bool)_shouldRunStreamingTask:(id)arg1;
- (_Bool)_shouldRunDownloadTask:(id)arg1;
- (_Bool)_shouldRunMetadataTask:(id)arg1;
- (_Bool)_shouldRunAnalyticsV2Task:(id)arg1;
- (_Bool)_shouldRunUploadOrAnalyticTask:(id)arg1;
- (_Bool)_shouldRunTask:(id)arg1;
- (id)_tasksToExecuteWithTasksToRun:(id)arg1;
- (id)_tasksToPauseWithTasksToRun:(id)arg1;
- (void)_runTask:(id)arg1 shouldHandleNativeCallback:(_Bool)arg2;
- (void)_checkConcurrencyControlAndRunTasks:(id)arg1;
- (void)setIsUserBlocking:(_Bool)arg1;
- (_Bool)_isInContextIdleState;
- (void)disableCriticalMode;
- (void)enableCriticalMode;
- (void)_updateTask:(id)arg1 withContexts:(id)arg2;
- (void)_addContext:(id)arg1 toRequestTask:(id)arg2;
- (void)_addContext:(id)arg1 toRequestWithKey:(id)arg2;
- (void)addContext:(id)arg1 toRequestWithKey:(id)arg2;
- (void)allowRequestRunOnWwanWithKey:(id)arg1;
- (void)_handleUserInitiatedRequestTask:(id)arg1;
- (void)handleUserInitiatedRequestWithKey:(id)arg1;
- (void)_cancelRequestsWithContext:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)cancelRequestsWithContext:(id)arg1;
- (void)_cancelRequestWithKey:(id)arg1 queue:(id)arg2 byProducingResumeData:(CDUnknownBlockType)arg3;
- (void)_cancelRequestWithkey:(id)arg1;
- (void)cancelRequestWithKey:(id)arg1 queue:(id)arg2 byProducingResumeData:(CDUnknownBlockType)arg3;
- (void)cancelQueuedRequestWithKey:(id)arg1;
- (void)cancelRequestWithKey:(id)arg1;
- (void)cancelTask:(id)arg1;
- (void)_enqueueTask:(id)arg1 reason:(long long)arg2 andRun:(_Bool)arg3;
- (void)_enqueueTask:(id)arg1 reason:(long long)arg2;
- (void)_addTask:(id)arg1;
- (void)_submitRequest:(id)arg1 block:(CDUnknownBlockType)arg2;
- (void)submitRequest:(id)arg1 authenticator:(id)arg2 progressiveUpdateQueue:(id)arg3 progressiveUpdateBlock:(CDUnknownBlockType)arg4;
- (void)submitRequest:(id)arg1 authenticator:(id)arg2 successQueue:(id)arg3 failureQueue:(id)arg4 successBlock:(CDUnknownBlockType)arg5 failureBlock:(CDUnknownBlockType)arg6;
- (void)submitRequest:(id)arg1 authenticator:(id)arg2 completionQueue:(id)arg3 completionBlock:(CDUnknownBlockType)arg4;
- (void)_resetTasks;
- (unsigned long long)_maxSmallOutOfContextRequests;
- (unsigned long long)_maxLargeOutOfContextRequests;
- (unsigned long long)_maxBatchSmallRequests;
- (unsigned long long)_maxSmallRequests;
- (unsigned long long)_maxLargeRequestsFromSingleContext;
- (unsigned long long)_maxLargeRequests;
- (void)_setupNetworkTracing;
- (id)_concurrencyControllerForTask:(id)arg1;
- (_Bool)_isMetaDataConcurrencyControlRequestType:(long long)arg1;
- (void)_setupConcurrencyController;
- (void)setDataSaverProvider:(CDUnknownBlockType)arg1;
- (id)initWithQueuePerformer:(id)arg1 taskRunDelegate:(id)arg2 networkManagerLogger:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
