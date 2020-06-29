//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSCoding-Protocol.h"
#import "NSCopying-Protocol.h"
#import "NSObject-Protocol.h"

@class NSString;

@protocol SCVideoCaptureConfiguration <NSObject, NSCoding, NSCopying>
@property(readonly, nonatomic) _Bool fingerDownCaptureEnabled;
@property(readonly, nonatomic) _Bool batchCaptureActive;
@property(readonly, nonatomic) _Bool lensInitiatedCapture;
@property(readonly, nonatomic) _Bool isStoppingRecording;
@property(readonly, nonatomic) _Bool isInteractiveSnap;
@property(readonly, nonatomic) _Bool isSnapWithDepth;
@property(readonly, nonatomic) _Bool isSnappable;
@property(readonly, nonatomic) _Bool lensEnabled;
@property(readonly, copy, nonatomic) NSString *activeLensId;
@property(readonly, copy, nonatomic) NSString *captureSessionId;
@property(readonly, nonatomic) unsigned long long recordingMethod;
@end

