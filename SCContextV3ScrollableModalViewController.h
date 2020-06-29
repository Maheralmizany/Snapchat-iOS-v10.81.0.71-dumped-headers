//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCOperaLayerViewController.h"

#import "UIGestureRecognizerDelegate-Protocol.h"

@class NSMutableArray, NSString, UIPanGestureRecognizer, UIScrollView, UIViewPropertyAnimator;
@protocol SCContextV3ScrollableModalViewControllerDelegate;

@interface SCContextV3ScrollableModalViewController : SCOperaLayerViewController <UIGestureRecognizerDelegate>
{
    UIScrollView *_scrollView;
    NSMutableArray *_panGestures;
    UIPanGestureRecognizer *_expandedPanGestureRecognizer;
    double _lastProgress;
    _Bool _isExpanded;
    _Bool _canExpand;
    _Bool _isDismissing;
    double _collapsedY;
    double _expandedY;
    double _dismissedY;
    double _expandThresholdY;
    UIViewPropertyAnimator *_transitionAnimation;
    UIViewPropertyAnimator *_finishPanningAnimation;
    double _startY;
    struct UIEdgeInsets _safeLayoutMargins;
    double _peekAmount;
    id <SCContextV3ScrollableModalViewControllerDelegate> _delegate;
    struct CGSize _contentSize;
}

@property(nonatomic) __weak id <SCContextV3ScrollableModalViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) struct CGSize contentSize; // @synthesize contentSize=_contentSize;
@property(nonatomic) double peekAmount; // @synthesize peekAmount=_peekAmount;
- (void).cxx_destruct;
- (void)dealloc;
- (void)updateProgress:(double)arg1 isDismissing:(_Bool)arg2;
- (_Bool)sloppedPointInside:(struct CGPoint)arg1;
- (long long)pageabilityForRelativePosition:(unsigned long long)arg1 navigationStyle:(long long)arg2 swipeDirection:(long long)arg3 gestureRecognizer:(id)arg4;
- (long long)pageabilityForRelativePosition:(unsigned long long)arg1 gestureRecognizer:(id)arg2;
- (void)_finishDismissing;
- (void)_transitionWithViewController:(id)arg1 presenting:(_Bool)arg2 view:(id)arg3 containerView:(id)arg4 completion:(CDUnknownBlockType)arg5;
- (void)dismissAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)presentInViewController:(id)arg1 animated:(_Bool)arg2;
- (void)_uninstallAllPanGestures;
- (id)_installPanGesture:(id)arg1;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (void)_finishPan:(id)arg1;
- (void)_didPan:(id)arg1;
- (void)_setTranslateY:(double)arg1;
- (void)_adjustTranslateY:(_Bool)arg1;
- (void)_updateMetrics;
- (void)setPeekAmount:(double)arg1 animated:(_Bool)arg2;
- (void)setContentSize:(struct CGSize)arg1 animated:(_Bool)arg2;
@property(readonly, nonatomic) UIScrollView *scrollView;
- (void)viewWillLayoutSubviews;
- (void)viewDidLoad;
- (void)loadView;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
