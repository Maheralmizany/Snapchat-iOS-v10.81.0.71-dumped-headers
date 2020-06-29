//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class AMPAppStateProvider, AMPExperimentProvider, AMPJsonSerializer, NSNumber, NSOperationQueue, NSString, NSURL, SCLazy, SCRequestManager, SCTimeProvider;
@protocol AMPUploaderDelegate;

@interface AMPUploader : NSObject
{
    _Bool _uploadInProgress;
    _Bool _didLastUploadSucceed;
    NSString *_logQueueName;
    NSURL *_uploadUrl;
    id <AMPUploaderDelegate> _delegate;
    AMPAppStateProvider *_appStateProvider;
    AMPExperimentProvider *_experimentProvider;
    AMPJsonSerializer *_jsonSerializer;
    CDUnknownBlockType _tokenProvider;
    SCTimeProvider *_timeProvider;
    SCRequestManager *_requestManager;
    NSOperationQueue *_loggingQueue;
    NSString *_configVersion;
    NSString *_snapToken;
    NSNumber *_lastUploadUptimeInSeconds;
    SCLazy *_snapTokenProvider;
}

+ (id)RFC1123DateFormatter;
@property(retain, nonatomic) SCLazy *snapTokenProvider; // @synthesize snapTokenProvider=_snapTokenProvider;
@property(retain, nonatomic) NSNumber *lastUploadUptimeInSeconds; // @synthesize lastUploadUptimeInSeconds=_lastUploadUptimeInSeconds;
@property(retain, nonatomic) NSString *snapToken; // @synthesize snapToken=_snapToken;
@property(retain, nonatomic) NSString *configVersion; // @synthesize configVersion=_configVersion;
@property(retain, nonatomic) NSOperationQueue *loggingQueue; // @synthesize loggingQueue=_loggingQueue;
@property(retain, nonatomic) SCRequestManager *requestManager; // @synthesize requestManager=_requestManager;
@property(retain, nonatomic) SCTimeProvider *timeProvider; // @synthesize timeProvider=_timeProvider;
@property(copy, nonatomic) CDUnknownBlockType tokenProvider; // @synthesize tokenProvider=_tokenProvider;
@property(retain, nonatomic) AMPJsonSerializer *jsonSerializer; // @synthesize jsonSerializer=_jsonSerializer;
@property(readonly, nonatomic) _Bool didLastUploadSucceed; // @synthesize didLastUploadSucceed=_didLastUploadSucceed;
@property(nonatomic, getter=isUploadInProgress) _Bool uploadInProgress; // @synthesize uploadInProgress=_uploadInProgress;
@property(readonly, nonatomic) AMPExperimentProvider *experimentProvider; // @synthesize experimentProvider=_experimentProvider;
@property(readonly, nonatomic) AMPAppStateProvider *appStateProvider; // @synthesize appStateProvider=_appStateProvider;
@property(nonatomic) __weak id <AMPUploaderDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSURL *uploadUrl; // @synthesize uploadUrl=_uploadUrl;
@property(retain, nonatomic) NSString *logQueueName; // @synthesize logQueueName=_logQueueName;
- (void).cxx_destruct;
- (id)_getUploadUrl:(id)arg1 queryItemDictionay:(id)arg2;
- (id)_getUploadUrl:(id)arg1 appInBackground:(_Bool)arg2 numEventsOnDisk:(unsigned long long)arg3 numEventsInRequest:(unsigned long long)arg4;
- (id)_prepareRequestHeadersWithSnapToken:(id)arg1;
- (id)_prepareRequestHeaders;
- (id)_serializeEventsAsJsonData:(id)arg1 lastSequenceId:(long long)arg2 numEventsOnDisk:(unsigned long long)arg3 totalEventsOverflowed:(unsigned long long)arg4;
- (void)_uploadRequest:(id)arg1 uploadRequestInfo:(id)arg2 headers:(id)arg3;
- (void)_updateSnapToken;
- (void)_uploadEventsData:(id)arg1 uploadRequestInfo:(id)arg2;
- (void)configureUploadUrlOverride:(id)arg1;
- (void)uploadEvents:(id)arg1 logQueueName:(id)arg2 numEventsOnDisk:(unsigned long long)arg3 totalEventsOverflowed:(unsigned long long)arg4 criticalEventsOverflowed:(unsigned long long)arg5 p0EventsOverflowed:(unsigned long long)arg6 isAppInBackground:(_Bool)arg7 trigger:(unsigned long long)arg8;
- (id)initWithUploadUrl:(id)arg1 jsonSerializer:(id)arg2 tokenProvider:(CDUnknownBlockType)arg3 timeProvider:(id)arg4 requestManager:(id)arg5 loggingQueue:(id)arg6 configVersion:(id)arg7 appStateProvider:(id)arg8 snapTokenProvider:(id)arg9 experimentProvider:(id)arg10;

@end

