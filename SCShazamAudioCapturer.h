//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCAudioCaptureSessionDelegate-Protocol.h"

@class NSMutableData, NSString, SCAudioCaptureSession, SCAudioConfigurationToken, SCLazy, SCQueuePerformer;
@protocol OS_dispatch_semaphore, SCAudioCaptureSession;

@interface SCShazamAudioCapturer : NSObject <SCAudioCaptureSessionDelegate>
{
    SCLazy *_userPreferences;
    SCLazy *_shazamConfigManager;
    struct opaqueCMBufferQueue *_audioBufferQueue;
    SCQueuePerformer *_performer;
    id <SCAudioCaptureSession> _currentCaptureSession;
    SCAudioCaptureSession *_captureSession;
    unsigned long long _status;
    SCAudioConfigurationToken *_audioConfiguration;
    NSMutableData *_data;
    NSObject<OS_dispatch_semaphore> *_syncSemaphore;
    NSString *_sessionUUID;
    _Bool _recordingStarted;
    int _maxLengthRequestSent;
}

- (void).cxx_destruct;
- (void)clearBuffer;
- (void)audioCaptureSession:(id)arg1 didOutputSampleBuffer:(struct opaqueCMSampleBuffer *)arg2;
- (void)stopAudioRecordingAsynchronously;
- (void)startRecordingWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)startAudioRecordingAsynchronously;
- (void)dealloc;
- (id)initWithUserPreferences:(id)arg1 shazamConfigManager:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

