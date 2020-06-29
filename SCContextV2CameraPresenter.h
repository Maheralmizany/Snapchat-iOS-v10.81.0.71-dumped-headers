//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCCaptureWorkflowResultDelegate-Protocol.h"
#import "SCContextV2CameraPresenting-Protocol.h"

@class NSString, SCUserSession;
@protocol SCContextV2CameraPresentationDelegate;

@interface SCContextV2CameraPresenter : NSObject <SCCaptureWorkflowResultDelegate, SCContextV2CameraPresenting>
{
    id <SCContextV2CameraPresentationDelegate> _cameraPresentationDelegate;
    SCUserSession *_userSession;
}

- (void).cxx_destruct;
- (void)captureWorkflowDidDismissWithDidSendSnap:(_Bool)arg1;
- (void)presentReplyCameraFromViewController:(id)arg1 contextSession:(id)arg2 replyInfo:(id)arg3 delegate:(id)arg4;
- (id)initWithUserSession:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
