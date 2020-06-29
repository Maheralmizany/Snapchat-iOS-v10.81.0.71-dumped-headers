//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate;
@protocol SCGallerySnap, SCLoggerAmplitudeProtocol;

@interface SCSpectaclesDepthLoggingSession : NSObject
{
    id <SCLoggerAmplitudeProtocol> _blizzardLogger;
    id <SCGallerySnap> _snap;
    NSDate *_sessionStartDate;
    NSDate *_previousStepDate;
    long long _actionType;
}

- (void).cxx_destruct;
- (void)logDepthCancelledWithType:(long long)arg1;
- (void)logDepthFailedWithReason:(id)arg1;
- (void)logDepthDownloadedWithSize:(unsigned long long)arg1;
- (void)logDepthStep:(long long)arg1;
- (void)startSessionWithActionType:(long long)arg1;
- (id)_newBaseDepthEvent;
- (id)initWithBlizzardLogger:(id)arg1 snap:(id)arg2;

@end
