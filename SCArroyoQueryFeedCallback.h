//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCNMessagingQueryFeedCallback-Protocol.h"

@interface SCArroyoQueryFeedCallback : NSObject <SCNMessagingQueryFeedCallback>
{
    CDUnknownBlockType _successCallback;
    CDUnknownBlockType _failureCallback;
    CDUnknownBlockType _notBootstrappedCallback;
    CDUnknownBlockType _feedEntriesArrivedCallback;
}

- (void).cxx_destruct;
- (void)onBootstrapNotComplete;
- (void)onQueryFeedComplete:(id)arg1 hasNoMore:(_Bool)arg2;
- (void)onError:(long long)arg1;
- (void)onFeedEntriesArrived:(id)arg1;
- (id)initWithSuccessCallback:(CDUnknownBlockType)arg1 failureCallback:(CDUnknownBlockType)arg2 notBootstrappedCallback:(CDUnknownBlockType)arg3 feedEntriesArrivedCallback:(CDUnknownBlockType)arg4;

@end

