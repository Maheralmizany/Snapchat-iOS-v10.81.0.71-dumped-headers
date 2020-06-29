//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCFeature.h"

#import "SCARBarDelegate-Protocol.h"
#import "SCCameraGestureResponder-Protocol.h"
#import "SCCameraUserActionProviding-Protocol.h"
#import "SCFeatureARBar-Protocol.h"
#import "SCManagedCapturerListener-Protocol.h"

@class NSArray, NSString, SCDisposableObserverLifecycle, SCFeatureReference, SCLazy, SCScopedAccess, SIGFooterItemConfig, UIView;
@protocol SCARBarCompatibleFeature, SCARBarView, SCCapturer, SCFeatureARBarBottomUIArbitrator, SCFeatureARBarDelegate, SCFeatureContainerView;

@interface SCFeatureARBarImpl : SCFeature <SCARBarDelegate, SCCameraUserActionProviding, SCFeatureARBar, SCCameraGestureResponder, SCManagedCapturerListener>
{
    UIView<SCARBarView> *_arBar;
    NSArray *_items;
    NSArray *_features;
    id <SCARBarCompatibleFeature> _activeFeature;
    id <SCARBarCompatibleFeature> _previousFeature;
    long long _tapFeatureIndex;
    long long _holdFeatureIndex;
    _Bool _lensCarouselOpen;
    id <SCCapturer> _capturer;
    SCDisposableObserverLifecycle *_mainCameraControllerLifecycle;
    _Bool _isMainCameraViewControllerVisible;
    long long _selectedItemLoggingType;
    _Bool _pendingHoldActivation;
    struct CGPoint _pendingHoldActivationPoint;
    _Bool _pendingActivationAfterSetup;
    _Bool _pendingActivationAfterSetupAnimation;
    _Bool _forwardGestureMethodWasCalled;
    long long _currentEntranceType;
    UIView<SCFeatureContainerView> *_containerView;
    _Bool _restoring;
    _Bool _isVisible;
    SCFeatureReference *_cameraUserActionLogger;
    SCLazy *_thumbnailLogger;
    SCScopedAccess *_scopedSIGViewController;
    SIGFooterItemConfig *_originalFooterItemConfig;
    id <SCFeatureARBarDelegate> _delegate;
    long long _cameraViewType;
    id <SCFeatureARBarBottomUIArbitrator> _arBarBottomUIArbitrator;
}

@property(nonatomic) __weak id <SCFeatureARBarBottomUIArbitrator> arBarBottomUIArbitrator; // @synthesize arBarBottomUIArbitrator=_arBarBottomUIArbitrator;
@property(nonatomic) long long cameraViewType; // @synthesize cameraViewType=_cameraViewType;
@property(nonatomic) __weak id <SCFeatureARBarDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
@property(readonly) long long cameraUIItem;
@property(readonly) long long actionType;
- (void)_logUserActionDidSelectItemWithLoggingType:(long long)arg1;
- (void)_logFeatureActivationAtIndex:(long long)arg1;
- (void)_beginFeatureActivationAtIndex:(long long)arg1 entranceType:(long long)arg2;
- (void)setCameraUIVisible:(_Bool)arg1 animated:(_Bool)arg2 isFromRootArbitrator:(_Bool)arg3 arBarBottomUIArbitrator:(id)arg4;
- (void)_selectItemAtIndex:(long long)arg1 animated:(_Bool)arg2 haptics:(_Bool)arg3;
- (void)_activateFeatureAtIndex:(long long)arg1 fromPoint:(struct CGPoint)arg2 gestureRecognizer:(id)arg3 skipPrepare:(_Bool)arg4;
- (void)_updateViewFrame;
- (void)_selectAndActivateItemAtIndex:(long long)arg1 animated:(_Bool)arg2 haptics:(_Bool)arg3;
- (void)_reconstructARBarView;
- (void)managedCapturer:(id)arg1 didChangeLensesActive:(id)arg2;
- (void)arBarViewDidRequestHapticEvent:(id)arg1;
- (void)arBarView:(id)arg1 didSelectItem:(id)arg2;
- (void)reloadARBarData;
- (id)activeFeature;
- (void)selectFeature:(id)arg1 animated:(_Bool)arg2 haptics:(_Bool)arg3;
- (void)updateVisibility:(double)arg1;
- (void)setVisible:(_Bool)arg1 animated:(_Bool)arg2;
@property(readonly, nonatomic) _Bool enabled;
- (void)activate;
- (_Bool)shouldBlockTouchAtPoint:(struct CGPoint)arg1;
- (void)forwardLongPressGesture:(id)arg1;
- (void)forwardCameraOverlayTapGesture:(id)arg1;
- (void)configureWithView:(id)arg1;
- (id)initWithFeatures:(id)arg1 tapActivationFeature:(id)arg2 holdActivationFeature:(id)arg3 capturer:(id)arg4 mainCameraControllerLifecycleEvents:(id)arg5 cameraUserActionLogger:(id)arg6 thumbnailLogger:(id)arg7;
- (void)prepareToRestore;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
