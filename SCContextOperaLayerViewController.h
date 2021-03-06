//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCOperaLayerViewController.h"

#import "SCContextOperaLayerPresenterDelegate-Protocol.h"
#import "SCContextOperaLayerViewControlling-Protocol.h"
#import "SCOperaArrowDisplayable-Protocol.h"
#import "SCOperaEventListener-Protocol.h"
#import "SCPageNameLogging-Protocol.h"

@class NSArray, NSString, SCContextOperaLayerV3InteropProvider, SCContextOperaLayerView, SCOperaEventListenerAnnouncer, SCOperaPage, UIView;
@protocol SCContextPresenting;

@interface SCContextOperaLayerViewController : SCOperaLayerViewController <SCOperaArrowDisplayable, SCOperaEventListener, SCContextOperaLayerPresenterDelegate, SCPageNameLogging, SCContextOperaLayerViewControlling>
{
    SCContextOperaLayerView *_layerView;
    id <SCContextPresenting> _contextMenuController;
    SCContextOperaLayerV3InteropProvider *_v3InteropProvider;
    NSArray *_presenters;
    _Bool _pageability;
    _Bool _isScrolling;
    _Bool _isVisible;
    _Bool _didSendPrepareForDisappear;
    _Bool _isLayerViewFaded;
    long long _operaNavigationStyle;
    _Bool _isLayerViewSuppressed;
    _Bool _operaUIPreparedForContentPresented;
    _Bool _presenterWantsCTAHidden;
    UIView *_swipeUpGestureView;
    UIView *_header;
}

@property(readonly, nonatomic) UIView *header; // @synthesize header=_header;
@property(nonatomic) _Bool presenterWantsCTAHidden; // @synthesize presenterWantsCTAHidden=_presenterWantsCTAHidden;
@property(nonatomic) __weak UIView *swipeUpGestureView; // @synthesize swipeUpGestureView=_swipeUpGestureView;
- (void).cxx_destruct;
- (void)dealloc;
- (_Bool)isRecyclable;
- (void)presenterDidEndPresentation:(id)arg1;
- (void)presenterWillStartPresentation:(id)arg1;
- (void)notifyDidAppear;
- (void)notifyDidDisappear;
- (void)notifyPrepareToDisappear;
- (void)_setLayerVisible:(_Bool)arg1;
- (void)_updateLayerVisibility;
- (_Bool)_isContextMenuPresented;
- (void)_operaDidEndScrolling;
- (void)_operaDidStartScrolling;
- (void)operaViewDidSendEvent:(id)arg1 context:(id)arg2 params:(id)arg3;
- (void)viewWillFullyAppear;
- (id)currentViewParameters;
- (long long)pageabilityForRelativePosition:(unsigned long long)arg1 gestureRecognizer:(id)arg2;
- (void)didReceiveUpdateProperties:(id)arg1;
- (void)viewDidFullyDisappear;
- (void)viewDidFullyAppear;
- (void)resume;
- (void)teardown;
- (void)updateViewWithHorizontalPageOffset:(double)arg1 isCurrentPage:(_Bool)arg2;
- (void)updateViewWithPreviousLayer:(id)arg1 currentLayer:(id)arg2;
- (void)loadView;
- (void)resumePlaybackIfNecessary;
- (void)requestNativeVolumeUI:(_Bool)arg1;
@property(readonly, nonatomic) SCOperaPage *page;
@property(nonatomic, getter=isPageable) _Bool pageable;
- (void)_setOperaUIPreparedForContentPresented:(_Bool)arg1;
- (_Bool)isSwipeUpAllowed;
- (void)prepareOperaUIForSwipeUpContentDismissed;
- (void)prepareOperaUIForShowingSwipeUpContent;
- (id)pageViewName;
- (void)enumeratePresentersUsingBlock:(CDUnknownBlockType)arg1;
- (id)initWithConfiguration:(id)arg1 eventAnnouncer:(id)arg2 sharedResourceManager:(id)arg3 userSession:(id)arg4 ctaScopeExposer:(id)arg5 operaActionPerformerProviderScopeExposer:(id)arg6;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) SCOperaEventListenerAnnouncer *eventAnnouncer;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

