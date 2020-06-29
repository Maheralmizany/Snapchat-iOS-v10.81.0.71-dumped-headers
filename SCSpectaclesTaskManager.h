//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate, NSMutableArray, NSNumber, SCSpectaclesCache, SCSpectaclesDataFlowsManagerIdleWatch, SCSpectaclesDevice, SCSpectaclesEventListenerAnnouncer, SCSpectaclesMutableTransferSession, SCSpectaclesTask;
@protocol SCSpectaclesDataFlowsRequest, SCSpectaclesLibraryLogger, SCSpectaclesTaskManagerDelegate;

@interface SCSpectaclesTaskManager : NSObject
{
    SCSpectaclesMutableTransferSession *_transferSession;
    id <SCSpectaclesDataFlowsRequest> _contentTransferRequest;
    _Bool _partialEncryptionTransfers;
    _Bool _disableContentDeletion;
    _Bool _hasLoggedBatchTransfer;
    _Bool _lastRequestIsBurstRequest;
    id <SCSpectaclesTaskManagerDelegate> _delegate;
    SCSpectaclesEventListenerAnnouncer *_announcer;
    SCSpectaclesDevice *_device;
    SCSpectaclesCache *_cache;
    SCSpectaclesTask *_currentTask;
    NSMutableArray *_pendingTasks;
    NSMutableArray *_pendingResponseCounts;
    NSDate *_requestStartTime;
    NSDate *_fileTransferStartTime;
    unsigned long long _totalResponseBytesReceived;
    double _lastTransferSpeed;
    unsigned long long _backgroundTaskIdentifier;
    SCSpectaclesDataFlowsManagerIdleWatch *_idleWatch;
    id <SCSpectaclesLibraryLogger> _analyticsLogger;
    NSDate *_taskManagerStartTime;
    NSNumber *_deviceBatteryLevelAtStart;
}

@property _Bool lastRequestIsBurstRequest; // @synthesize lastRequestIsBurstRequest=_lastRequestIsBurstRequest;
@property _Bool hasLoggedBatchTransfer; // @synthesize hasLoggedBatchTransfer=_hasLoggedBatchTransfer;
@property(retain, nonatomic) NSNumber *deviceBatteryLevelAtStart; // @synthesize deviceBatteryLevelAtStart=_deviceBatteryLevelAtStart;
@property(retain, nonatomic) NSDate *taskManagerStartTime; // @synthesize taskManagerStartTime=_taskManagerStartTime;
@property(retain, nonatomic) SCSpectaclesMutableTransferSession *transferSession; // @synthesize transferSession=_transferSession;
@property(retain, nonatomic) id <SCSpectaclesLibraryLogger> analyticsLogger; // @synthesize analyticsLogger=_analyticsLogger;
@property(nonatomic) __weak SCSpectaclesDataFlowsManagerIdleWatch *idleWatch; // @synthesize idleWatch=_idleWatch;
@property(nonatomic) unsigned long long backgroundTaskIdentifier; // @synthesize backgroundTaskIdentifier=_backgroundTaskIdentifier;
@property(nonatomic) double lastTransferSpeed; // @synthesize lastTransferSpeed=_lastTransferSpeed;
@property(nonatomic) unsigned long long totalResponseBytesReceived; // @synthesize totalResponseBytesReceived=_totalResponseBytesReceived;
@property(retain, nonatomic) NSDate *fileTransferStartTime; // @synthesize fileTransferStartTime=_fileTransferStartTime;
@property(retain, nonatomic) NSDate *requestStartTime; // @synthesize requestStartTime=_requestStartTime;
@property(retain, nonatomic) NSMutableArray *pendingResponseCounts; // @synthesize pendingResponseCounts=_pendingResponseCounts;
@property(retain, nonatomic) NSMutableArray *pendingTasks; // @synthesize pendingTasks=_pendingTasks;
@property(retain, nonatomic) SCSpectaclesTask *currentTask; // @synthesize currentTask=_currentTask;
@property(retain, nonatomic) SCSpectaclesCache *cache; // @synthesize cache=_cache;
@property(retain, nonatomic) SCSpectaclesDevice *device; // @synthesize device=_device;
@property(retain, nonatomic) SCSpectaclesEventListenerAnnouncer *announcer; // @synthesize announcer=_announcer;
@property(nonatomic) __weak id <SCSpectaclesTaskManagerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool disableContentDeletion; // @synthesize disableContentDeletion=_disableContentDeletion;
@property(nonatomic) _Bool partialEncryptionTransfers; // @synthesize partialEncryptionTransfers=_partialEncryptionTransfers;
- (void).cxx_destruct;
- (_Bool)_reconcileMediaList:(id)arg1 retryCount:(unsigned long long)arg2;
- (void)_enqueueTasks:(id)arg1;
- (id)_emptySdVideoFileForContentIfNeeded:(id)arg1;
- (id)_createFileWithLocalFilename:(id)arg1 fromMetadata:(id)arg2;
- (_Bool)_populateContentMetadata:(id)arg1 fromMetadataTask:(id)arg2;
- (void)_generateContentFromMetadataTask:(id)arg1;
- (void)_logTransferEvent;
- (void)_logTransferBatchTerminated;
- (void)_taskManagerComplete;
- (void)_handleTaskFinished:(id)arg1;
- (void)_handleTaskInterrupted;
- (id)_lastMediaTransferTask;
- (void)_handleTaskHasBeenPaused;
- (void)_handleTaskProcessing;
- (void)_updateListenerForTask:(id)arg1 transferringUpdateType:(unsigned long long)arg2;
- (void)_handleTaskNotHandlingResponse:(id)arg1;
- (void)_setupTask:(id)arg1;
- (id)_getNextTask;
- (void)cancelTransfer;
- (void)processNextRequest;
- (void)tearDown;
- (void)handleResponse:(id)arg1;
- (void)dealloc;
- (CDUnknownBlockType)_taskExpirationHandler;
- (id)initWithContentTransferRequest:(id)arg1 device:(id)arg2 delegate:(id)arg3 announcer:(id)arg4 cache:(id)arg5 transferSession:(id)arg6 idleWatch:(id)arg7 analyticsLogger:(id)arg8;

@end

