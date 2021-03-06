//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCOperaNavigationManaging-Protocol.h"
#import "SCTraceEnabled-Protocol.h"

@class NSString, SCOperaConfiguration, SCOperaEventListenerAnnouncer, SCOperaScrollView;
@protocol SCOperaNavigationDataProviding, SCOperaNavigationManagingDelegate;

@interface SCOperaVerticalNavigationManager : NSObject <SCTraceEnabled, SCOperaNavigationManaging>
{
    SCOperaConfiguration *_configuration;
    SCOperaEventListenerAnnouncer *_eventAnnouncer;
    _Bool _isAnimatingScrolling;
    unsigned long long _previousScrollRelativePosition;
    _Bool _scrollingToAttachment;
    id <SCOperaNavigationManagingDelegate> _delegate;
    id <SCOperaNavigationDataProviding> _dataProvider;
    SCOperaScrollView *_operaScrollView;
    unsigned long long _scrollRelativePosition;
}

@property(nonatomic) unsigned long long scrollRelativePosition; // @synthesize scrollRelativePosition=_scrollRelativePosition;
@property(nonatomic) __weak SCOperaScrollView *operaScrollView; // @synthesize operaScrollView=_operaScrollView;
@property(readonly, nonatomic) __weak id <SCOperaNavigationDataProviding> dataProvider; // @synthesize dataProvider=_dataProvider;
@property(readonly, nonatomic) __weak id <SCOperaNavigationManagingDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)_pageViewControllerForViewModel:(id)arg1 atRelativePosition:(unsigned long long)arg2;
- (_Bool)_isScrollingHorizontally;
- (_Bool)_isScrollingVertically;
- (void)_updateViewPropertiesWithContentOffset:(struct CGPoint)arg1;
- (void)_updateLeftTapLayerEnabled:(_Bool)arg1;
- (id)_viewModelForRelativePosition:(unsigned long long)arg1;
- (id)_pageVCForRelativePosition:(unsigned long long)arg1;
- (void)_sendScrollEventWithRelativePosition:(unsigned long long)arg1;
- (void)operaScrollViewEagerSwipeUpRecognized:(id)arg1;
- (void)operaScrollViewWillBeginDragging:(id)arg1 direction:(long long)arg2 velocity:(struct CGPoint)arg3 didTouchInLiveArea:(_Bool)arg4 touchPoint:(struct CGPoint)arg5;
- (void)operaScrollViewDidTap:(id)arg1 recognizer:(id)arg2;
- (void)operaScrollViewDidEndScrolling:(id)arg1;
- (void)operaScrollViewDidScroll:(id)arg1 direction:(long long)arg2;
- (void)_scrollToContentOffset:(struct CGPoint)arg1 animated:(_Bool)arg2 forAutoAdvance:(_Bool)arg3;
- (unsigned long long)_relativePositionForSwipeDirecton:(long long)arg1;
- (_Bool)_shouldDismissOnViewModel:(id)arg1;
- (void)didFinishLayoutPageViewControllersForCurrentViewModel;
- (_Bool)shouldBeginDismissingWithDirection:(long long)arg1 gestureRecognizer:(id)arg2;
- (_Bool)isAnimatingScrolling;
- (void)navigateToAttachmentAnimated:(_Bool)arg1;
- (void)navigateToParentAnimated:(_Bool)arg1;
- (void)navigateToNextGroupAnimated:(_Bool)arg1;
- (void)navigateToPreviousGroupAnimated:(_Bool)arg1;
- (id)initWithDelegate:(id)arg1 dataProvider:(id)arg2 configuration:(id)arg3 eventAnnouncer:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

