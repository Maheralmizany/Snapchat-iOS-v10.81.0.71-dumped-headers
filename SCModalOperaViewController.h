//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "SCOperaPresenterDelegate-Protocol.h"
#import "SCPageNameLogging-Protocol.h"
#import "UIViewControllerAnimatedTransitioning-Protocol.h"
#import "UIViewControllerTransitioningDelegate-Protocol.h"

@class NSString, SCOperaPresenter;
@protocol SCModalOperaViewControllerDelegate, SCPageNameLogging;

@interface SCModalOperaViewController : UIViewController <SCOperaPresenterDelegate, UIViewControllerTransitioningDelegate, UIViewControllerAnimatedTransitioning, SCPageNameLogging>
{
    SCOperaPresenter *_operaPresenter;
    CDUnknownBlockType _presentOperaBlock;
    CDUnknownBlockType _dismissalCompletion;
    UIViewController<SCPageNameLogging> *_baseVC;
    id <SCModalOperaViewControllerDelegate> _delegate;
}

@property(nonatomic) __weak id <SCModalOperaViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)animateTransition:(id)arg1;
- (double)transitionDuration:(id)arg1;
- (id)animationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3;
- (void)operaPresenter:(id)arg1 didFinishViewingPlaylistGroupDataModel:(id)arg2 nextGroupDataModel:(id)arg3;
- (void)operaPresenter:(id)arg1 didBeginPlayingPlaylistGroupDataModel:(id)arg2;
- (void)operaPresenterDidTearDown:(id)arg1;
- (void)operaPresenterDidFinishDismissing:(id)arg1;
- (void)operaPresenterDidFailToPresent:(id)arg1;
- (void)operaPresenterWillBeginAnimatingToDismiss:(id)arg1;
- (void)operaPresenterDidCancelDismissing:(id)arg1;
- (void)operaPresenterWillBeginDismissing:(id)arg1 transitionAnimator:(id)arg2;
- (void)operaPresenterDidFinishPresenting:(id)arg1 transitionAnimator:(id)arg2;
- (void)operaPresenterWillBeginPresenting:(id)arg1 transitionAnimator:(id)arg2;
- (_Bool)shouldDismissViewControllerWhenEnterBackground;
- (void)viewDidDisappear:(_Bool)arg1;
- (id)pageViewName;
- (void)dismissViewControllerAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (_Bool)isPresenting;
- (void)presentFromBaseViewController:(id)arg1 withUserSession:(id)arg2 block:(CDUnknownBlockType)arg3;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

