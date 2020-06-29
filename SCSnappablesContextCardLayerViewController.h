//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCOperaLayerViewController.h"

#import "SCOperaEventListener-Protocol.h"
#import "SCPageNameLogging-Protocol.h"
#import "SCSnappablesContextCardAppearanceActionViewHandler-Protocol.h"
#import "SCSnappablesDismissalCoordinatorDelegate-Protocol.h"

@class NSString, SCLens, SCOperaConfiguration, SCSnappablesContextCardLayerDependencies;
@protocol SCSnappablesLayerLensFeatureProvider><SCSnappablesLayerLensManager;

@interface SCSnappablesContextCardLayerViewController : SCOperaLayerViewController <SCOperaEventListener, SCSnappablesDismissalCoordinatorDelegate, SCSnappablesContextCardAppearanceActionViewHandler, SCPageNameLogging>
{
    SCSnappablesContextCardLayerDependencies *_dependencies;
    SCOperaConfiguration *_configuration;
    SCLens *_currentLens;
    id <SCSnappablesLayerLensFeatureProvider><SCSnappablesLayerLensManager> _lensController;
}

+ (unsigned long long)_snappablesDisplayTypeFromPresentationSourceType:(long long)arg1;
+ (unsigned long long)_snappablesPageSourceTypeFromOrigin:(unsigned long long)arg1;
+ (id)_networkIconImageFromLens:(id)arg1 lensIconImage:(id)arg2;
- (void).cxx_destruct;
- (id)pageViewName;
- (void)setTapOutsideHandlingEnabled:(_Bool)arg1;
- (void)setSwipeUpContextEnabled:(_Bool)arg1;
- (void)setActionViewShown:(_Bool)arg1;
- (void)dismissActionView;
- (void)presentActionViewWithSourceType:(long long)arg1 completion:(CDUnknownBlockType)arg2;
- (void)dismissalCoordinatorDidDismissAfterSending:(id)arg1;
- (void)dismissalCoordinatorWillDismissAfterSending:(id)arg1;
- (void)dismissalCoordinatorDidDismissWithoutSending:(id)arg1;
- (void)dismissalCoordinatorWillDismissWithoutSending:(id)arg1;
- (void)operaViewDidSendEvent:(id)arg1 context:(id)arg2 params:(id)arg3;
- (void)_logContextCardPresentationWithSourceType:(long long)arg1;
- (unsigned long long)_operaPageDisplaySnappablesOrigin;
- (void)_showSnappable;
- (void)updateViewWithPreviousLayer:(id)arg1 currentLayer:(id)arg2;
- (_Bool)isRecyclable;
- (void)viewDidFullyDisappear;
- (void)viewDidFullyAppear;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)loadView;
- (void)_setContextMenuEnabled:(_Bool)arg1;
- (void)_setContextHidden:(_Bool)arg1;
- (void)_setContextSuppressed:(_Bool)arg1;
- (void)_configureHandling;
- (id)initWithConfiguration:(id)arg1 dependencies:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
