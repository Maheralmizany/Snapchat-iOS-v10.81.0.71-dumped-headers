//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCOperaLayerViewController.h"

#import "SCOperaCTACardLayerViewDelegate-Protocol.h"

@class NSString, SCOperaCTACardLayerView;

@interface SCOperaCTACardLayerViewController : SCOperaLayerViewController <SCOperaCTACardLayerViewDelegate>
{
    SCOperaCTACardLayerView *_layerView;
}

- (void).cxx_destruct;
- (void)didTapCTACardLayerView:(id)arg1 tapLocation:(struct CGPoint)arg2;
- (void)updateViewWithPreviousLayer:(id)arg1 currentLayer:(id)arg2;
- (void)viewDidFullyDisappear;
- (void)viewDidFullyAppear;
- (void)loadView;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

