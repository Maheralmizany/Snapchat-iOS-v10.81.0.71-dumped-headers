//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCStoriesFSNNetworkRequesting-Protocol.h"

@class NSString, SCSessionRequestManager;

@interface SCStoriesFSNNetworkRequester : NSObject <SCStoriesFSNNetworkRequesting>
{
    SCSessionRequestManager *_sessionRequestManager;
}

- (void).cxx_destruct;
- (void)deleteStoryWithSharedStoryGroupId:(id)arg1 storyID:(id)arg2 successQueue:(id)arg3 successBlock:(CDUnknownBlockType)arg4 failureQueue:(id)arg5 failureBlock:(CDUnknownBlockType)arg6;
- (void)deleteStoryWithStoryId:(id)arg1 archiveOnly:(_Bool)arg2 additionalHttpHeaders:(id)arg3 successQueue:(id)arg4 successBlock:(CDUnknownBlockType)arg5 failureQueue:(id)arg6 failureBlock:(CDUnknownBlockType)arg7;
- (id)initWithSessionRequestManager:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
