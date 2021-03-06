//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCOperaLayerViewController.h"

#import "SCOperaSubscriptionLayerViewDelegate-Protocol.h"

@class NSString, SCOperaSubscriptionLayerView;

@interface SCOperaSubscriptionLayerViewController : SCOperaLayerViewController <SCOperaSubscriptionLayerViewDelegate>
{
    SCOperaSubscriptionLayerView *_layerView;
    _Bool _hasSentSubscriptionEvent;
}

- (void).cxx_destruct;
- (_Bool)_isSubscriptionAttachmentLongformContext:(id)arg1;
- (_Bool)isRecyclable;
- (long long)pageabilityForRelativePosition:(unsigned long long)arg1 gestureRecognizer:(id)arg2;
- (void)didTapSubscriptionButton;
- (void)viewDidFullyDisappear;
- (void)viewDidFullyAppear;
- (void)updateViewWithPreviousLayer:(id)arg1 currentLayer:(id)arg2;
- (void)loadView;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

