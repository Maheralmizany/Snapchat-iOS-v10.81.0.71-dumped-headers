//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "UIGestureRecognizerDelegate-Protocol.h"

@class NSString, UIPanGestureRecognizer, UIView;
@protocol SCOperaAttachmentInteractionControllerDelegate;

@interface SCOperaAttachmentInteractionController : NSObject <UIGestureRecognizerDelegate>
{
    UIView *_attachmentView;
    UIPanGestureRecognizer *_panGesture;
    UIView *_backgroundView;
    id <SCOperaAttachmentInteractionControllerDelegate> _delegate;
}

@property(nonatomic) __weak id <SCOperaAttachmentInteractionControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)stopTracking;
- (void)startTrackingWithAttachmentView:(id)arg1 backgroundView:(id)arg2;
- (void)_resetAttachmentView:(_Bool)arg1;
- (void)_updateAttachmentViewWithPercentDismissed:(double)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)didPan:(id)arg1;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

