//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCSwipeTransitionCoordinatorDataSource-Protocol.h"
#import "SCSwipeTransitionCoordinatorDelegate-Protocol.h"

@class NSString, UIViewController;
@protocol SCBloopsSwipeTransitionPresenterDelegate, SCSwipeTransitionCoordinator;

@interface SCBloopsSwipeTransitionPresenter : NSObject <SCSwipeTransitionCoordinatorDelegate, SCSwipeTransitionCoordinatorDataSource>
{
    UIViewController *_presentingViewController;
    UIViewController *_presentedViewController;
    id <SCSwipeTransitionCoordinator> _swipeTransitionCoordinator;
    id <SCBloopsSwipeTransitionPresenterDelegate> _delegate;
}

@property(nonatomic) __weak id <SCBloopsSwipeTransitionPresenterDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_didDismissViewController;
- (id)transitionCoordinator:(id)arg1 presentationControllerForPresentedViewController:(id)arg2 presentingViewController:(id)arg3;
- (id)presentingViewControllerWithSwipeTransitionCoordinator:(id)arg1;
- (id)presentedViewControllerWithSwipeTransitionCoordinator:(id)arg1;
- (void)transitionCoordinator:(id)arg1 didFinishWithTransitionType:(unsigned long long)arg2 success:(_Bool)arg3 interactive:(_Bool)arg4 viewController:(id)arg5;
- (_Bool)transitionCoordinator:(id)arg1 shouldBeginTransitionType:(unsigned long long)arg2 gestureRecognizer:(id)arg3 interactive:(_Bool)arg4 viewController:(id)arg5;
- (_Bool)isPresenting;
- (void)dismissViewControllerAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)presentViewController:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)initWithPresentingViewController:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

