//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCMapPresenter-Protocol.h"
#import "SCMapPullDownTransitionDelegate-Protocol.h"
#import "SCMapScopeDelegate-Protocol.h"
#import "UIGestureRecognizerDelegate-Protocol.h"

@class NSString, SCMapScope, SCScopeExposer, UIPanGestureRecognizer, UIView, UIViewController;
@protocol SCMapScopeMainCameraAdapter;

@interface SCMapScopeExposerPresenter : NSObject <SCMapPullDownTransitionDelegate, SCMapScopeDelegate, UIGestureRecognizerDelegate, SCMapPresenter>
{
    SCScopeExposer *_mapScopeExposer;
    UIViewController *_presentingViewController;
    id <SCMapScopeMainCameraAdapter> _mainCameraAdapter;
    UIPanGestureRecognizer *_pullDownPanGestureRecognizer;
    UIViewController *_originalPresentingViewController;
    UIView *_originalPresentingView;
    UIView *_originalPresentingSuperview;
    _Bool _shouldDeferRelease;
    SCMapScope *_deferredReleaseScope;
    SCMapScope *_mapScope;
}

@property(retain, nonatomic) SCMapScope *mapScope; // @synthesize mapScope=_mapScope;
- (void).cxx_destruct;
- (_Bool)gestureRecognizer:(id)arg1 shouldBeRequiredToFailByGestureRecognizer:(id)arg2;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (void)_onPullDown:(id)arg1;
- (void)mapScope:(id)arg1 didEndWithDestination:(long long)arg2;
- (struct CGPoint)destinationCenterForCameraInMapPullDown:(id)arg1;
- (struct CGPoint)startingCenterForCameraInMapPullDown:(id)arg1;
- (_Bool)usesCameraButtonTransition;
- (void)transitionAnimatorDidComplete:(id)arg1;
- (void)transitionAnimatorDidCancel:(id)arg1;
- (void)transitionAnimatorDidBegin:(id)arg1;
- (_Bool)transitionAnimatorShouldShowTabView:(id)arg1;
- (_Bool)transitionAnimatorShouldBeInteractive:(id)arg1;
- (_Bool)handleAppNotification:(id)arg1;
- (void)cancelGestures;
- (_Bool)isMapPresented;
- (void)presentMapSettingsIfNeededAnimated:(_Bool)arg1 openSource:(long long)arg2;
- (void)updateOpenTrackingWithOpenType:(long long)arg1 openSource:(long long)arg2 openSourcePage:(id)arg3;
- (void)travelToDefaultViewportAnimated:(_Bool)arg1 openSource:(long long)arg2 completion:(CDUnknownBlockType)arg3;
- (void)travelToFriendWithUserId:(id)arg1 openSource:(long long)arg2 animated:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;
- (void)travelToCoordinate:(struct CLLocationCoordinate2D)arg1 zoomLevel:(double)arg2 poiId:(id)arg3 openSource:(long long)arg4 animated:(_Bool)arg5 completion:(CDUnknownBlockType)arg6;
- (void)dismissViewControllerAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)presentMapIfNeededAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_actuallyReleaseMapScope:(id)arg1;
- (void)_releaseMapScope;
- (void)_mapPresentationComplete;
- (void)_mapDismissalCancelled;
- (void)_mapDismissalBegan;
- (void)_mapDismissed;
- (void)_mapPresentationCancelComplete;
- (void)_mapPresentationCancelled;
- (void)_mapPresentationBegan;
- (void)_dismissViewControllerWithCompletion:(CDUnknownBlockType)arg1;
- (void)_presentViewControllerWithCompletion:(CDUnknownBlockType)arg1;
- (void)_attachToPresentingViewController;
- (void)_sendLegacyMapCommand:(id)arg1;
- (void)_updateDestination:(id)arg1;
- (id)_mapViewController;
- (id)_uiContainer;
- (id)initWithMapScopeExposer:(id)arg1 presentingViewController:(id)arg2 mainCameraAdapter:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

