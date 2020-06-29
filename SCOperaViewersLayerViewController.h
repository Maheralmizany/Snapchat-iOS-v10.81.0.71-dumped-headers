//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCOperaLayerViewController.h"

#import "SCOperaArrowDisplayable-Protocol.h"
#import "SCOperaFadeTransitionCompatibleViewController-Protocol.h"
#import "SCOperaViewersContextViewControllerDelegate-Protocol.h"
#import "SCVerticalSwipeViewDelegate-Protocol.h"

@class NSString, SCOperaViewersLayerView;

@interface SCOperaViewersLayerViewController : SCOperaLayerViewController <SCOperaViewersContextViewControllerDelegate, SCVerticalSwipeViewDelegate, SCOperaFadeTransitionCompatibleViewController, SCOperaArrowDisplayable>
{
    SCOperaViewersLayerView *_layerView;
    long long _centerActionButtonType;
    _Bool _isDisplayingViewersList;
    _Bool _headerInteractionEnabled;
}

- (void).cxx_destruct;
- (id)fadingViewsForFadeTransition;
- (id)movingViewsForFadeTransition;
- (void)didReceiveUpdateProperties:(id)arg1;
- (void)viewersContextViewController:(id)arg1 didTapTopSectionModel:(id)arg2;
- (void)viewersContextViewController:(id)arg1 didUpdateScrollView:(id)arg2;
- (void)viewersContextViewController:(id)arg1 didTapAvatarView:(id)arg2 forUsername:(id)arg3 displayName:(id)arg4;
- (void)viewersContextViewController:(id)arg1 showMiniProfileWithUsername:(id)arg2 displayName:(id)arg3;
- (void)deleteButtonPressed;
- (void)saveButtonPressed;
- (void)postButtonPressed;
- (void)headerAreaButtonPressed;
- (void)didLoadContextCellAtRow:(long long)arg1;
- (void)centerActionButtonPressed;
- (void)setCenterActionButtonType:(long long)arg1;
- (long long)pageabilityForRelativePosition:(unsigned long long)arg1 gestureRecognizer:(id)arg2;
- (void)_updateScrollingOffset:(double)arg1;
- (void)verticalSwipeView:(id)arg1 pageDidFullyAppearForIndex:(unsigned long long)arg2 offsetEnabled:(_Bool)arg3;
- (void)verticalSwipeView:(id)arg1 didScrollToOffset:(double)arg2 offsetEnabled:(_Bool)arg3;
- (void)verticalSwipeView:(id)arg1 bottomSubviewDidBecomeVisible:(_Bool)arg2 offsetEnabled:(_Bool)arg3;
- (_Bool)isRecyclable;
- (void)teardown;
- (void)_handleAppearWithTableIfNeeded;
- (void)_updateViewersContextHeaderOffsetEnabled:(_Bool)arg1;
- (void)_resetChildViews;
- (void)_updateViewersOffsetEnabled:(_Bool)arg1;
- (void)_updateViewersLayerView;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)updateViewWithPreviousLayer:(id)arg1 currentLayer:(id)arg2;
- (void)loadView;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

