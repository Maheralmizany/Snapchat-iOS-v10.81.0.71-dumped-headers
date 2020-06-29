//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCRetriableRequestManagerDelegate-Protocol.h"
#import "SCSnapAdsNetworkAdapter-Protocol.h"

@class NSString, SCRetriableRequestManager;

@interface SCSnapAdsNetworkManager : NSObject <SCRetriableRequestManagerDelegate, SCSnapAdsNetworkAdapter>
{
    SCRetriableRequestManager *_unlockablesRetriableRequestManager;
    SCRetriableRequestManager *_snapAdsRetriableRequestManager;
}

- (void).cxx_destruct;
- (void)cleanup;
- (void)_submitRetriableRequest:(id)arg1 successBlock:(CDUnknownBlockType)arg2 failureBlock:(CDUnknownBlockType)arg3;
- (void)_submitRequest:(id)arg1 successBlock:(CDUnknownBlockType)arg2 failureBlock:(CDUnknownBlockType)arg3;
- (_Bool)_shouldUseCustomUserAgent:(id)arg1;
- (id)_createRetriableWithRequest:(id)arg1;
- (void)submitRetryRequest:(id)arg1 successQueue:(id)arg2 failureQueue:(id)arg3 successBlock:(CDUnknownBlockType)arg4 failureBlock:(CDUnknownBlockType)arg5;
- (void)submit:(id)arg1 successBlock:(CDUnknownBlockType)arg2 failureBlock:(CDUnknownBlockType)arg3;
- (id)_parsePersistenceStatusCodes;
- (void)_overwriteRetryAndPersistBlock:(id)arg1 statusCodes:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

