//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCCaptureWorkflowResultDelegate-Protocol.h"

@class NSString;
@protocol SCLensCaptureWorkflowDelegate;

@interface SCLensCaptureWorkflowDelegateHandler : NSObject <SCCaptureWorkflowResultDelegate>
{
    id <SCLensCaptureWorkflowDelegate> _delegate;
}

@property(nonatomic) __weak id <SCLensCaptureWorkflowDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)captureWorkflowDidSaveSnapToMemories;
- (void)captureWorkflowWillDismissWithDidSendSnap:(_Bool)arg1;
- (void)captureWorkflowDidDismissWithDidSendSnap:(_Bool)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

