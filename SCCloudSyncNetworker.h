//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCNetworker-Protocol.h"

@class NSString, SCGalleryLogger, SCSessionRequestManager;

@interface SCCloudSyncNetworker : NSObject <SCNetworker>
{
    SCSessionRequestManager *_requestManager;
    SCGalleryLogger *_galleryLogger;
}

- (void).cxx_destruct;
- (void)submitBackgroundPutRequestToURL:(id)arg1 uploadFileURL:(id)arg2 additionalHTTPHeaders:(id)arg3 key:(id)arg4 contexts:(id)arg5 callbackQueue:(id)arg6 successBlock:(CDUnknownBlockType)arg7 failureBlock:(CDUnknownBlockType)arg8;
- (void)submitPutRequestToURL:(id)arg1 uploadFileURL:(id)arg2 additionalHTTPHeaders:(id)arg3 key:(id)arg4 contexts:(id)arg5 callbackQueue:(id)arg6 progressBlock:(CDUnknownBlockType)arg7 successBlock:(CDUnknownBlockType)arg8 failureBlock:(CDUnknownBlockType)arg9;
- (void)submitPutRequestToURL:(id)arg1 uploadData:(id)arg2 additionalHTTPHeaders:(id)arg3 key:(id)arg4 contexts:(id)arg5 callbackQueue:(id)arg6 successBlock:(CDUnknownBlockType)arg7 failureBlock:(CDUnknownBlockType)arg8;
- (void)submitPostRequestToEndpoint:(id)arg1 SOJURequest:(id)arg2 additionalHTTPHeaders:(id)arg3 key:(id)arg4 contexts:(id)arg5 requestParser:(id)arg6 authenticated:(_Bool)arg7 shouldTrace:(_Bool)arg8 callbackQueue:(id)arg9 successBlock:(CDUnknownBlockType)arg10 failureBlock:(CDUnknownBlockType)arg11;
- (void)submitPostRequestToURL:(id)arg1 SOJURequest:(id)arg2 key:(id)arg3 contexts:(id)arg4 requestParser:(id)arg5 callbackQueue:(id)arg6 completionBlock:(CDUnknownBlockType)arg7;
- (void)submitPostRequestToURL:(id)arg1 SOJURequest:(id)arg2 key:(id)arg3 contexts:(id)arg4 requestParser:(id)arg5 callbackQueue:(id)arg6 successBlock:(CDUnknownBlockType)arg7 failureBlock:(CDUnknownBlockType)arg8;
- (void)submitResumeableRequest:(id)arg1 callbackQueue:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)cancelRequestWithKey:(id)arg1;
- (id)networkResumeableDownloadRequestWithEndpoint:(id)arg1 key:(id)arg2 SOJURequest:(id)arg3 isSmallFile:(_Bool)arg4 additionalHTTPHeaders:(id)arg5 contexts:(id)arg6 trackingInfo:(id)arg7;
- (id)initWithRequestManager:(id)arg1 logger:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

