//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCHTTPRequestModifications-Protocol.h"

@class AFHTTPClient, NSData, NSMutableDictionary, NSURL, SCHTTPRequest;

@interface SCAPIHTTPRequestModifications : NSObject <SCHTTPRequestModifications>
{
    long long _method;
    NSURL *_url;
    NSMutableDictionary *_headers;
    NSData *_body;
    CDUnknownBlockType _fsnHostProvider;
    CDUnknownBlockType _gatewayRouteTagProvider;
    CDUnknownBlockType _clientAttestationHeadersGenerator;
    CDUnknownBlockType _fsnAuthGenerator;
    AFHTTPClient *_httpClient;
}

- (void).cxx_destruct;
- (void)_ensureRequestCanHaveBody;
- (void)_ensureURLIsFullyQualified;
- (void)useGzippedBody;
- (void)useJSONBody:(id)arg1;
- (void)useFSNAuthAndURLEncodedFormBody:(id)arg1 withAuthBasedParams:(CDUnknownBlockType)arg2;
- (void)useFSNAuthAndURLEncodedFormBody:(id)arg1;
- (void)useURLEncodedFormBody:(id)arg1;
- (void)useFSNAuthAndMultipartFormBody:(id)arg1;
- (void)useMultipartFormBody:(id)arg1;
- (void)useContentType:(id)arg1;
- (void)useGatewayRouteTag;
- (void)useFSNAuthHeaders;
- (void)useClientAttestationHeaders;
- (void)useQueryParameters:(id)arg1;
- (void)useFSNHost;
@property(readonly, nonatomic) SCHTTPRequest *requestWithModifications;
- (id)initWithHTTPRequest:(id)arg1 fsnHostProvider:(CDUnknownBlockType)arg2 gatewayRouteTagProvider:(CDUnknownBlockType)arg3 clientAttestationHeadersGenerator:(CDUnknownBlockType)arg4 fsnAuthGenerator:(CDUnknownBlockType)arg5 httpClient:(id)arg6;

@end

