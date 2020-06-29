//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCCaptureWorkflowResultDelegate-Protocol.h"
#import "SCLensCameraPresenting-Protocol.h"

@class NSString, SCCache, SCUserSession;
@protocol SCCaptureWorkflow, SCLensCameraPresenterDelegate;

@interface SCLensCameraPresenter : NSObject <SCCaptureWorkflowResultDelegate, SCLensCameraPresenting>
{
    SCUserSession *_userSession;
    SCCache *_cache;
    id <SCLensCameraPresenterDelegate> _delegate;
    id <SCCaptureWorkflow> _captureWorkflow;
}

- (void).cxx_destruct;
- (void)captureWorkflowDidDismissWithDidSendSnap:(_Bool)arg1;
- (void)captureWorkflowWillDismissWithDidSendSnap:(_Bool)arg1;
- (void)_processUnlock:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_unlockedLensForID:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_showErrorToast;
- (void)_presentLensCameraOnViewController:(id)arg1 lens:(id)arg2 source:(long long)arg3;
- (void)presentLensCameraOnViewController:(id)arg1 delegate:(id)arg2 lensId:(id)arg3 source:(long long)arg4;
- (void)dismissWithCompletion:(CDUnknownBlockType)arg1;
- (id)initWithUserSession:(id)arg1 cache:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
