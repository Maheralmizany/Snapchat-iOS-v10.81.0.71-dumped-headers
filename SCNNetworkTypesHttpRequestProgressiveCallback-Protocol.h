//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class NSData, SCNNetworkTypesError, SCNNetworkTypesHttpRequest, SCNNetworkTypesHttpRequestAndInfo, SCNNetworkTypesNetworkManagerNotifier, SCNNetworkTypesRequestResponseInfo;

@protocol SCNNetworkTypesHttpRequestProgressiveCallback
- (void)onCanceled:(SCNNetworkTypesHttpRequest *)arg1 info:(SCNNetworkTypesRequestResponseInfo *)arg2;
- (void)onFailed:(SCNNetworkTypesHttpRequestAndInfo *)arg1 info:(SCNNetworkTypesRequestResponseInfo *)arg2 error:(SCNNetworkTypesError *)arg3;
- (void)onSucceeded:(SCNNetworkTypesHttpRequest *)arg1 info:(SCNNetworkTypesRequestResponseInfo *)arg2;
- (void)onWriteCompleted:(SCNNetworkTypesHttpRequest *)arg1 totalBytesWritten:(long long)arg2 totalBytesExpectedToWrite:(long long)arg3;
- (void)onReadCompleted:(SCNNetworkTypesNetworkManagerNotifier *)arg1 httpRequest:(SCNNetworkTypesHttpRequest *)arg2 info:(SCNNetworkTypesRequestResponseInfo *)arg3 buffer:(NSData *)arg4 bytesRead:(long long)arg5;
- (void)onResponseStarted:(SCNNetworkTypesHttpRequest *)arg1 info:(SCNNetworkTypesRequestResponseInfo *)arg2;
- (void)onRequestStarted:(SCNNetworkTypesHttpRequest *)arg1;
@end

