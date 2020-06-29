//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCTraceEnabled-Protocol.h"

@class NSString, SCBlackCameraReporter, SCQueuePerformer;

@interface SCBlackCameraPreviewDetector : NSObject <SCTraceEnabled>
{
    _Bool _previewVisible;
    CDUnknownBlockType _checkingBlock;
    SCQueuePerformer *_queuePerformer;
    SCBlackCameraReporter *_reporter;
}

@property(retain, nonatomic) SCBlackCameraReporter *reporter; // @synthesize reporter=_reporter;
@property(retain, nonatomic) SCQueuePerformer *queuePerformer; // @synthesize queuePerformer=_queuePerformer;
- (void).cxx_destruct;
- (void)_checkPreviewState;
- (void)_scheduleCheck;
- (void)sessionDidChangeIsRunning:(_Bool)arg1;
- (void)capturePreviewDidBecomeVisible:(_Bool)arg1;
- (id)initWithPerformer:(id)arg1 reporter:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

