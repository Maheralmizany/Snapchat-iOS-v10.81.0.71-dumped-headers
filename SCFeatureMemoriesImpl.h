//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCFeature.h"

#import "SCFeatureMemories-Protocol.h"

@class NSMutableSet, NSString, SCCameraOverlayView, SCFeatureReference, SCFeatureSettingsService, SCLazy, SCUserSession, UIViewController;
@protocol SCFeatureMemoriesDelegate, SCGalleryViewControlling, SCSwipeViewParentDelegate;

@interface SCFeatureMemoriesImpl : SCFeature <SCFeatureMemories>
{
    SCFeatureSettingsService *_featureSettingsService;
    id <SCSwipeViewParentDelegate> _parentDelegate;
    long long _cameraViewType;
    id <SCFeatureMemoriesDelegate> _delegate;
    SCLazy *_galleryTransitionCoordinator;
    NSMutableSet *_scrollLocks;
    SCFeatureReference *_memoriesSideButtonRef;
    SCLazy *_navigationDelegate;
    SCUserSession *_userSession;
    SCCameraOverlayView *_cameraOverlayView;
}

@property(nonatomic) __weak SCCameraOverlayView *cameraOverlayView; // @synthesize cameraOverlayView=_cameraOverlayView;
@property(retain, nonatomic) SCUserSession *userSession; // @synthesize userSession=_userSession;
@property(nonatomic) __weak SCLazy *navigationDelegate; // @synthesize navigationDelegate=_navigationDelegate;
@property(retain, nonatomic) SCFeatureReference *memoriesSideButtonRef; // @synthesize memoriesSideButtonRef=_memoriesSideButtonRef;
@property(retain, nonatomic) NSMutableSet *scrollLocks; // @synthesize scrollLocks=_scrollLocks;
@property(readonly, nonatomic) SCLazy *galleryTransitionCoordinator; // @synthesize galleryTransitionCoordinator=_galleryTransitionCoordinator;
@property(nonatomic) __weak id <SCFeatureMemoriesDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) long long cameraViewType; // @synthesize cameraViewType=_cameraViewType;
- (void).cxx_destruct;
- (void)transitionCoordinator:(id)arg1 willFailWithTransitionType:(unsigned long long)arg2 viewController:(id)arg3;
- (void)transitionCoordinator:(id)arg1 didFinishWithTransitionType:(unsigned long long)arg2 success:(_Bool)arg3 interactive:(_Bool)arg4 viewController:(id)arg5;
- (void)transitionCoordinator:(id)arg1 didBeginWithTransitionType:(unsigned long long)arg2 viewController:(id)arg3;
- (void)transitionCoordinator:(id)arg1 willBeginWithTransitionType:(unsigned long long)arg2 viewController:(id)arg3;
- (_Bool)transitionCoordinator:(id)arg1 shouldBeginTransitionType:(unsigned long long)arg2 gestureRecognizer:(id)arg3 interactive:(_Bool)arg4 viewController:(id)arg5;
- (id)profileCoordinator;
- (void)scrollToCameraFromGalleryAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)unlockScrollWithKey:(id)arg1;
- (void)lockScrollWithKey:(id)arg1;
- (id)_optionalParentDelegate;
- (void)_didTap:(id)arg1;
- (void)activate;
- (void)configureWithView:(id)arg1;
- (_Bool)isDisplayingFeaturedBadge;
- (_Bool)isGalleryViewCameraButtonVisible;
- (_Bool)isSpectaclesTabVisible;
- (_Bool)galleryViewVisible;
- (void)scrollGalleryToFeaturedTab;
- (void)scrollGalleryToSpectaclesTab;
- (void)scrollToCameraAnimated:(_Bool)arg1 reason:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)scrollToGalleryFromCameraAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)presentSearchResultViewForVRPlayer;
- (void)presentSpectaclesSearchResultViewForLensId:(id)arg1;
- (void)presentSearchResultViewForLens:(id)arg1;
@property(readonly, nonatomic) UIViewController<SCGalleryViewControlling> *galleryViewController;
- (void)dismiss:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)removeAllScrollLocks;
- (void)unlockAllScrollWithKey:(id)arg1;
- (void)lockAllScrollWithKey:(id)arg1;
- (void)setupParentDelegate:(id)arg1;
- (void)setPressingCameraButton:(_Bool)arg1;
- (void)_setTransitioningToMemories;
- (double)percentVisible;
- (double)percentPresented;
- (_Bool)isPresenting;
@property(readonly, nonatomic) _Bool isTransitioning;
- (void)initMemoriesIfNecessary;
- (id)initWithUserSession:(id)arg1 navigationDelegate:(id)arg2 delegate:(id)arg3 memoriesSideButtonFeatureRef:(id)arg4 galleryTransitionCoordinator:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

