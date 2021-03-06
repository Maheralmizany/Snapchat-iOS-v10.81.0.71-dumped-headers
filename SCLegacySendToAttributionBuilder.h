//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface SCLegacySendToAttributionBuilder : NSObject
{
    NSString *_sendToSessionId;
    long long _snapSource;
    NSString *_sourcePageViewName;
    NSString *_captureSessionId;
    _Bool _isSnappablesSnap;
    long long _snap3DCreationType;
    _Bool _isSponsoredSnap;
    _Bool _spectaclesSnapsOnly;
}

+ (id)legacySendToAttributionFromExistingLegacySendToAttribution:(id)arg1;
+ (id)legacySendToAttribution;
- (void).cxx_destruct;
- (id)withSpectaclesSnapsOnly:(_Bool)arg1;
- (id)withIsSponsoredSnap:(_Bool)arg1;
- (id)withSnap3DCreationType:(long long)arg1;
- (id)withIsSnappablesSnap:(_Bool)arg1;
- (id)withCaptureSessionId:(id)arg1;
- (id)withSourcePageViewName:(id)arg1;
- (id)withSnapSource:(long long)arg1;
- (id)withSendToSessionId:(id)arg1;
- (id)build;

@end

