//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class SCNNetworkTypesUrlRequestInfo, SCNNetworkTypesUrlResponseInfo;

@interface SCNNetworkTypesRequestResponseInfo : NSObject
{
    SCNNetworkTypesUrlRequestInfo *_requestInfo;
    SCNNetworkTypesUrlResponseInfo *_responseInfo;
}

+ (id)RequestResponseInfoWithRequestInfo:(id)arg1 responseInfo:(id)arg2;
@property(readonly, nonatomic) SCNNetworkTypesUrlResponseInfo *responseInfo; // @synthesize responseInfo=_responseInfo;
@property(readonly, nonatomic) SCNNetworkTypesUrlRequestInfo *requestInfo; // @synthesize requestInfo=_requestInfo;
- (void).cxx_destruct;
- (id)description;
- (id)initWithRequestInfo:(id)arg1 responseInfo:(id)arg2;

@end
