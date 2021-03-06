//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCCaptureWorkflowResultDelegate-Protocol.h"

@class NSString, SCLens;
@protocol SCLensIconInMemoryCache, SCNotificationManager, SCSnappablesDismissalCoordinatorDelegate;

@interface SCSnappablesDismissalCoordinator : NSObject <SCCaptureWorkflowResultDelegate>
{
    SCLens *_lens;
    id <SCNotificationManager> _notificationProcessingManager;
    id <SCLensIconInMemoryCache> _lensIconInMemoryCache;
    id <SCSnappablesDismissalCoordinatorDelegate> _delegate;
}

@property(nonatomic) __weak id <SCSnappablesDismissalCoordinatorDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_showSentToast;
- (void)captureWorkflowDidDismissWithDidSendSnap:(_Bool)arg1;
- (void)captureWorkflowWillDismissWithDidSendSnap:(_Bool)arg1;
- (void)prepareWithLens:(id)arg1;
- (id)initWithNotificationProcessingManager:(id)arg1 lensIconInMemoryCache:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

