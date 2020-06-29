//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, SCNNetworkTypesHttpRequestAndInfo, SCNNetworkTypesHttpRequestKey, SCRequest, SCRequestTaskLogger;
@protocol SCCancelTaskInNNMDelegate, SCRequestAuthenticator;

@interface SCRequestTask : NSObject
{
    _Bool _isPaused;
    _Bool _shouldRetry;
    _Bool _isRunning;
    _Bool _success;
    _Bool _forcedRetry;
    _Bool _isCompleteTaskExecuted;
    NSString *_taskId;
    SCRequest *_request;
    id <SCRequestAuthenticator> _authenticator;
    SCRequestTaskLogger *_logger;
    unsigned long long _numOfRequestAttempts;
    unsigned long long _numOfRequestAttemptsCancelled;
    unsigned long long _numOfRequestAttemptsPaused;
    unsigned long long _numHTTPRequestCompleted;
    SCNNetworkTypesHttpRequestKey *_nativeHttpRequestKey;
    SCNNetworkTypesHttpRequestAndInfo *_nativeRequest;
    id <SCCancelTaskInNNMDelegate> _cancelTaskInNNMDelegate;
}

+ (id)createTaskWithRequest:(id)arg1 authenticator:(id)arg2 traceFile:(struct SCNetworkTraceFileStruct *)arg3 networkInterceptors:(id)arg4 progressiveUpdateQueue:(id)arg5 progressiveUpdateBlock:(CDUnknownBlockType)arg6;
+ (id)createTaskWithRequest:(id)arg1 authenticator:(id)arg2 traceFile:(struct SCNetworkTraceFileStruct *)arg3 networkInterceptors:(id)arg4 completionQueue:(id)arg5 completionBlock:(CDUnknownBlockType)arg6;
+ (id)createTaskWithRequest:(id)arg1 authenticator:(id)arg2 traceFile:(struct SCNetworkTraceFileStruct *)arg3 networkInterceptors:(id)arg4 successQueue:(id)arg5 failureQueue:(id)arg6 successBlock:(CDUnknownBlockType)arg7 failureBlock:(CDUnknownBlockType)arg8;
@property(nonatomic) __weak id <SCCancelTaskInNNMDelegate> cancelTaskInNNMDelegate; // @synthesize cancelTaskInNNMDelegate=_cancelTaskInNNMDelegate;
@property(retain, nonatomic) SCNNetworkTypesHttpRequestAndInfo *nativeRequest; // @synthesize nativeRequest=_nativeRequest;
@property(retain, nonatomic) SCNNetworkTypesHttpRequestKey *nativeHttpRequestKey; // @synthesize nativeHttpRequestKey=_nativeHttpRequestKey;
@property(nonatomic) _Bool isCompleteTaskExecuted; // @synthesize isCompleteTaskExecuted=_isCompleteTaskExecuted;
@property(readonly, nonatomic) _Bool forcedRetry; // @synthesize forcedRetry=_forcedRetry;
@property(readonly, nonatomic) _Bool success; // @synthesize success=_success;
@property(nonatomic) unsigned long long numHTTPRequestCompleted; // @synthesize numHTTPRequestCompleted=_numHTTPRequestCompleted;
@property(nonatomic) unsigned long long numOfRequestAttemptsPaused; // @synthesize numOfRequestAttemptsPaused=_numOfRequestAttemptsPaused;
@property(readonly, nonatomic) unsigned long long numOfRequestAttemptsCancelled; // @synthesize numOfRequestAttemptsCancelled=_numOfRequestAttemptsCancelled;
@property(nonatomic) unsigned long long numOfRequestAttempts; // @synthesize numOfRequestAttempts=_numOfRequestAttempts;
@property(retain, nonatomic) SCRequestTaskLogger *logger; // @synthesize logger=_logger;
@property(nonatomic) _Bool isRunning; // @synthesize isRunning=_isRunning;
@property(readonly, nonatomic) _Bool shouldRetry; // @synthesize shouldRetry=_shouldRetry;
@property(readonly, nonatomic) __weak id <SCRequestAuthenticator> authenticator; // @synthesize authenticator=_authenticator;
@property(readonly, nonatomic) SCRequest *request; // @synthesize request=_request;
@property(readonly, copy, nonatomic) NSString *taskId; // @synthesize taskId=_taskId;
- (void).cxx_destruct;
- (void)callbackToNativeWhenNNMIsOff:(id)arg1 requestKey:(id)arg2;
- (long long)_usedValidRequestAttemptCount;
- (_Bool)_hasRetryAttemptsLeft;
- (id)_eligibleErrorCodesForRetry:(_Bool)arg1;
- (_Bool)_isErrorRetriableWithError:(id)arg1 response:(id)arg2;
- (void)taskWillRun;
- (void)updateRequestId;
- (void)progressiveUpdate;
- (CDUnknownBlockType)completeTask;
- (void)updateTaskWithTask:(id)arg1;
- (void)checkInterceptors:(id)arg1 withRequest:(id)arg2 response:(id)arg3 data:(id)arg4 error:(id)arg5;
- (_Bool)shouldRetryRequestWithError:(id)arg1 response:(id)arg2;
- (void)didInitiateTaskByUser;
- (void)updateUserInitiated;
- (void)didSubmitTask;
- (void)didEnqueueTask;
- (void)updateTaskQueuingLatency:(long long)arg1;
- (void)updateTaskURLSessionPriority:(float)arg1;
- (void)pause;
- (_Bool)isResumable;
- (void)_completeCanceledTaskWithCompletionHandler:(CDUnknownBlockType)arg1 error:(id)arg2;
- (void)_cancelRunningTaskWithCompletionHandler:(CDUnknownBlockType)arg1 forcedRetry:(_Bool)arg2 error:(id)arg3;
- (void)cancelByProducingResumeData:(CDUnknownBlockType)arg1;
- (void)cancelWithForcedRetryIfRunning:(_Bool)arg1 error:(id)arg2;
- (void)cancelWithError:(id)arg1;
- (void)cancel;
- (void)cancelInNNM;
- (void)runWithCompletionQueue:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (id)initWithRequest:(id)arg1 authenticator:(id)arg2 traceFile:(struct SCNetworkTraceFileStruct *)arg3;
- (_Bool)isDownloadMediaRequestTaskWithTrackingId;

@end
