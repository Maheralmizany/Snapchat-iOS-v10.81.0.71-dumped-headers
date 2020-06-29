//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCOperaLayerViewController.h"

@class CADisplayLink, UIView;
@protocol SCOperaTimerLayerView;

@interface SCOperaTimerLayerViewController : SCOperaLayerViewController
{
    UIView<SCOperaTimerLayerView> *_layerView;
    CADisplayLink *_timerDisplayLink;
    double _lastDisplayLinkTimestamp;
    _Bool _didStartCountingDownBeforePaused;
    _Bool _pausedForAttachment;
}

- (void).cxx_destruct;
- (void)_setInitialViewTimerValue;
- (void)_setTimerVisible:(_Bool)arg1 animated:(_Bool)arg2;
- (void)_timerDisplayLinkDidFire;
- (void)_cleanupTimerDisplayLink;
- (void)_setupTimerDisplayLink;
- (void)_updateLayerViewWithTimeleft:(double)arg1;
- (void)_configureLayerView;
- (_Bool)isPausedForAttachment;
- (void)setPausedForAttachment:(_Bool)arg1;
- (void)stop;
- (void)start;
- (void)resume;
- (void)pause;
- (void)viewDidLayoutSubviews;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidFullyDisappear;
- (void)viewDidFullyAppear;
- (void)updateViewWithPreviousLayer:(id)arg1 currentLayer:(id)arg2;
- (void)loadView;
- (void)didReceiveUpdateProperties:(id)arg1;

@end

