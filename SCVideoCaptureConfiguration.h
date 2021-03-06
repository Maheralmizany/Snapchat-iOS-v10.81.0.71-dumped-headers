//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCVideoCaptureConfiguration-Protocol.h"

@class NSString;

@interface SCVideoCaptureConfiguration : NSObject <SCVideoCaptureConfiguration>
{
    _Bool _lensEnabled;
    _Bool _isSnappable;
    _Bool _isSnapWithDepth;
    _Bool _isInteractiveSnap;
    _Bool _isStoppingRecording;
    _Bool _lensInitiatedCapture;
    _Bool _batchCaptureActive;
    _Bool _fingerDownCaptureEnabled;
    unsigned long long _recordingMethod;
    NSString *_captureSessionId;
    NSString *_activeLensId;
}

+ (unsigned long long *)fasterCodingKeys;
+ (unsigned long long)fasterCodingVersion;
@property(readonly, nonatomic) _Bool fingerDownCaptureEnabled; // @synthesize fingerDownCaptureEnabled=_fingerDownCaptureEnabled;
@property(readonly, nonatomic) _Bool batchCaptureActive; // @synthesize batchCaptureActive=_batchCaptureActive;
@property(readonly, nonatomic) _Bool lensInitiatedCapture; // @synthesize lensInitiatedCapture=_lensInitiatedCapture;
@property(readonly, nonatomic) _Bool isStoppingRecording; // @synthesize isStoppingRecording=_isStoppingRecording;
@property(readonly, nonatomic) _Bool isInteractiveSnap; // @synthesize isInteractiveSnap=_isInteractiveSnap;
@property(readonly, nonatomic) _Bool isSnapWithDepth; // @synthesize isSnapWithDepth=_isSnapWithDepth;
@property(readonly, nonatomic) _Bool isSnappable; // @synthesize isSnappable=_isSnappable;
@property(readonly, nonatomic) _Bool lensEnabled; // @synthesize lensEnabled=_lensEnabled;
@property(readonly, copy, nonatomic) NSString *activeLensId; // @synthesize activeLensId=_activeLensId;
@property(readonly, copy, nonatomic) NSString *captureSessionId; // @synthesize captureSessionId=_captureSessionId;
@property(readonly, nonatomic) unsigned long long recordingMethod; // @synthesize recordingMethod=_recordingMethod;
- (void).cxx_destruct;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
- (void)setSInt32:(int)arg1 forUInt64Key:(unsigned long long)arg2;
- (void)setBool:(_Bool)arg1 forUInt64Key:(unsigned long long)arg2;
- (void)setObject:(id)arg1 forUInt64Key:(unsigned long long)arg2;
- (void)decodeWithFasterDecoder:(id)arg1;
- (void)encodeWithFasterCoder:(id)arg1;
- (_Bool)preferFasterCoding;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithRecordingMethod:(unsigned long long)arg1 captureSessionId:(id)arg2 activeLensId:(id)arg3 lensEnabled:(_Bool)arg4 isSnappable:(_Bool)arg5 isSnapWithDepth:(_Bool)arg6 isInteractiveSnap:(_Bool)arg7 isStoppingRecording:(_Bool)arg8 lensInitiatedCapture:(_Bool)arg9 batchCaptureActive:(_Bool)arg10 fingerDownCaptureEnabled:(_Bool)arg11;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

