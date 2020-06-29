//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCOperaLayerViewController.h"

#import "SCImpalaOperaLayerViewControllerDelegate-Protocol.h"
#import "SCOperaGestureDelegateViewController-Protocol.h"

@class NSString, SCEventListenerAnnouncer, SCOperaConfiguration, SCOperaEventListenerAnnouncer, UIView, UIViewController;
@protocol SCOperaPropertyUpdateModerator;

@interface SCImpalaOperaLayerViewController : SCOperaLayerViewController <SCImpalaOperaLayerViewControllerDelegate, SCOperaGestureDelegateViewController>
{
    _Bool _swipeUpDisabledForVerticalOpera;
    SCEventListenerAnnouncer *_eventAnnouncer;
    UIViewController *_viewController;
    _Bool _actionMenuEnabled;
    _Bool _looping;
    _Bool _visible;
    UIView *_delegateViewForGestures;
}

+ (id)announcerIdentifier;
@property(nonatomic) __weak UIView *delegateViewForGestures; // @synthesize delegateViewForGestures=_delegateViewForGestures;
- (void).cxx_destruct;
- (_Bool)swipeUpDisabled;
- (_Bool)isVisible;
- (id)operaContext;
- (void)setLooping:(_Bool)arg1;
- (void)setVolume:(double)arg1;
- (void)setPaused:(_Bool)arg1;
- (void)didReceiveUpdateProperties:(id)arg1;
- (void)updateViewWithHorizontalPageOffset:(double)arg1 isCurrentPage:(_Bool)arg2;
- (_Bool)isRecyclable;
- (long long)pageabilityForRelativePosition:(unsigned long long)arg1 gestureRecognizer:(id)arg2;
- (void)viewDidFullyDisappear;
- (void)viewDidFullyAppear;
- (void)updateViewWithPreviousLayer:(id)arg1 currentLayer:(id)arg2;
- (void)teardown;
- (id)initWithConfiguration:(id)arg1 eventAnnouncer:(id)arg2 sharedResourceManager:(id)arg3;
- (void)viewDidLayoutSubviews;
- (void)loadView;
- (void)removeListener:(id)arg1;
- (void)addListener:(id)arg1;

// Remaining properties
@property(readonly, nonatomic) SCOperaConfiguration *configuration;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) __weak SCOperaEventListenerAnnouncer *eventAnnouncer;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) __weak id <SCOperaPropertyUpdateModerator> propertyUpdateModerator;
@property(readonly) Class superclass;

@end

