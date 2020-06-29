//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCNNetworkManagerUrlRequest-Protocol.h"

@class NSDictionary, NSString, SCNNetworkManagerTrackingInfo;
@protocol SCNShimsDataProvider;

@interface SCNNetworkManagerUrlRequestImpl : NSObject <SCNNetworkManagerUrlRequest>
{
    NSString *_url;
    _Bool _relativePath;
    long long _requestMethod;
    NSDictionary *_headers;
    id <SCNShimsDataProvider> _payload;
    NSDictionary *_parameters;
    NSString *_key;
    _Bool _isAuthenticated;
    SCNNetworkManagerTrackingInfo *_trackingInfo;
}

- (void).cxx_destruct;
- (id)getTrackingInfo;
- (_Bool)getIsAuthenticated;
- (id)getKey;
- (id)getParameters;
- (id)getPayload;
- (id)getHeaders;
- (long long)getRequestMethod;
- (_Bool)getIsRelativePath;
- (id)getUrl;
- (id)initWithUrl:(id)arg1 relativePath:(_Bool)arg2 requestMethod:(long long)arg3 headers:(id)arg4 payload:(id)arg5 parameters:(id)arg6 key:(id)arg7 isAuthenticated:(_Bool)arg8 trackingInfo:(id)arg9;

@end
