//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSDictionary, NSNumber, NSString, NSURL, SCSearchStreamingEncryptionInfo, SCStreamingRequestTrackingInfo;

@interface SCStreamingRequestInfoBuilder : NSObject
{
    NSURL *_mediaURL;
    NSString *_mediaKey;
    NSDictionary *_postParameters;
    _Bool _authenticated;
    NSArray *_requestContexts;
    SCSearchStreamingEncryptionInfo *_encryptionInfo;
    SCStreamingRequestTrackingInfo *_trackingInfo;
    NSNumber *_manifestSnapTokenAccessType;
    NSString *_traceID;
}

+ (id)streamingRequestInfoFromExistingStreamingRequestInfo:(id)arg1;
+ (id)streamingRequestInfo;
- (void).cxx_destruct;
- (id)withTraceID:(id)arg1;
- (id)withManifestSnapTokenAccessType:(id)arg1;
- (id)withTrackingInfo:(id)arg1;
- (id)withEncryptionInfo:(id)arg1;
- (id)withRequestContexts:(id)arg1;
- (id)withAuthenticated:(_Bool)arg1;
- (id)withPostParameters:(id)arg1;
- (id)withMediaKey:(id)arg1;
- (id)withMediaURL:(id)arg1;
- (id)build;

@end

