//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCFeature.h"

#import "SCFeatureSwipeFilters-Protocol.h"
#import "SCPreviewGestureResponder-Protocol.h"

@class NSData, NSString, SCLazy, SCObservable, SCPreviewConfiguration, SCPreviewView, SCSmartCarouselFilterArranger, SCSmartSwipeFilterView, SCSnapCommonLoggingParameters, SCUnlockableGeoFilterTracker, SCUserSession, UIView;
@protocol SCFeatureImagePlayback, SCFeatureSnapCrop, SCFeatureSwipeFilters, SCFeatureSwipeFiltersDelegate, SCFeatureVideoPlayback, SCGeoFilterLogger, SCImageProcessCommandProvider, SCLensLoggerConsumptionTrackingProviding, SCPreviewFeatureDrawing, SCPreviewFeatureStickerContainer, SCSmartSwipeFilterFocusLocationChangeDelegate, SCSwipeFilterHelpProvider, SCVenueFilterTooltipProvider;

@interface SCFeatureSmartSwipeFilters : SCFeature <SCFeatureSwipeFilters, SCPreviewGestureResponder>
{
    _Bool _activated;
    SCSmartSwipeFilterView *_smartSwipeFilterView;
    id <SCFeatureSwipeFiltersDelegate> _delegate;
    UIView *_trackingObjectContainerView;
    SCPreviewView *_previewView;
    SCPreviewConfiguration *_configuration;
    SCSmartCarouselFilterArranger *_filterArranger;
    SCSnapCommonLoggingParameters *_commonLoggingParameters;
    id <SCGeoFilterLogger> _geofilterLogger;
    SCUserSession *_userSession;
    id <SCImageProcessCommandProvider> _imageProcessCommandProvider;
    SCLazy *_cropBackgroundAnimationImages;
    SCLazy *_cropBackgroundAnimationColors;
    UIView<SCSmartSwipeFilterFocusLocationChangeDelegate> *_focusLocationDelegate;
    id <SCVenueFilterTooltipProvider> _venueFilterTooltipProvider;
    id <SCFeatureSnapCrop> _snapCrop;
    id <SCPreviewFeatureDrawing> _drawingFeature;
    id <SCPreviewFeatureStickerContainer> _stickerContainerFeature;
    SCUnlockableGeoFilterTracker *_unlockableGeoFilterTracker;
    id <SCLensLoggerConsumptionTrackingProviding> _lensLogger;
    SCObservable *_applicationLifecycleEvents;
    id <SCSwipeFilterHelpProvider> _swipeFilterHelpProvider;
    struct CGRect _maxMediaAreaFrame;
}

@property(nonatomic) _Bool activated; // @synthesize activated=_activated;
@property(retain, nonatomic) id <SCSwipeFilterHelpProvider> swipeFilterHelpProvider; // @synthesize swipeFilterHelpProvider=_swipeFilterHelpProvider;
@property(nonatomic) struct CGRect maxMediaAreaFrame; // @synthesize maxMediaAreaFrame=_maxMediaAreaFrame;
@property(readonly, nonatomic) SCObservable *applicationLifecycleEvents; // @synthesize applicationLifecycleEvents=_applicationLifecycleEvents;
@property(readonly, nonatomic) id <SCLensLoggerConsumptionTrackingProviding> lensLogger; // @synthesize lensLogger=_lensLogger;
@property(retain, nonatomic) SCUnlockableGeoFilterTracker *unlockableGeoFilterTracker; // @synthesize unlockableGeoFilterTracker=_unlockableGeoFilterTracker;
@property(nonatomic) __weak id <SCPreviewFeatureStickerContainer> stickerContainerFeature; // @synthesize stickerContainerFeature=_stickerContainerFeature;
@property(nonatomic) __weak id <SCPreviewFeatureDrawing> drawingFeature; // @synthesize drawingFeature=_drawingFeature;
@property(nonatomic) __weak id <SCFeatureSnapCrop> snapCrop; // @synthesize snapCrop=_snapCrop;
@property(retain, nonatomic) id <SCVenueFilterTooltipProvider> venueFilterTooltipProvider; // @synthesize venueFilterTooltipProvider=_venueFilterTooltipProvider;
@property(retain, nonatomic) UIView<SCSmartSwipeFilterFocusLocationChangeDelegate> *focusLocationDelegate; // @synthesize focusLocationDelegate=_focusLocationDelegate;
@property(retain, nonatomic) SCLazy *cropBackgroundAnimationColors; // @synthesize cropBackgroundAnimationColors=_cropBackgroundAnimationColors;
@property(retain, nonatomic) SCLazy *cropBackgroundAnimationImages; // @synthesize cropBackgroundAnimationImages=_cropBackgroundAnimationImages;
@property(retain, nonatomic) id <SCImageProcessCommandProvider> imageProcessCommandProvider; // @synthesize imageProcessCommandProvider=_imageProcessCommandProvider;
@property(retain, nonatomic) SCUserSession *userSession; // @synthesize userSession=_userSession;
@property(retain, nonatomic) id <SCGeoFilterLogger> geofilterLogger; // @synthesize geofilterLogger=_geofilterLogger;
@property(retain, nonatomic) SCSnapCommonLoggingParameters *commonLoggingParameters; // @synthesize commonLoggingParameters=_commonLoggingParameters;
@property(retain, nonatomic) SCSmartCarouselFilterArranger *filterArranger; // @synthesize filterArranger=_filterArranger;
@property(nonatomic) __weak SCPreviewConfiguration *configuration; // @synthesize configuration=_configuration;
@property(retain, nonatomic) UIView *trackingObjectContainerView; // @synthesize trackingObjectContainerView=_trackingObjectContainerView;
@property(nonatomic) __weak id <SCFeatureSwipeFiltersDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)didProcessTapInPreviewContainerView:(id)arg1;
- (void)updateSnapCommonLoggingParameters:(id)arg1;
- (_Bool)shouldBlockGesture:(id)arg1;
- (unsigned long long)didTapPreviewContainerView:(id)arg1;
- (void)_addSmartFilters;
- (void)addMotionFilters;
- (void)_addVisualFilters;
- (void)_addStreakFilter;
- (void)_removePromptFilter;
- (struct CGSize)_contentViewSize;
- (void)addDebugView:(id)arg1;
- (void)ucoImageWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)lensAppliedImageWithLensCommand:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)filteredImageWithCroppingAspectRatio:(double)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (long long)currentFilterSpeedForType:(long long)arg1;
- (void)replaceFiltersWithState:(id)arg1 lastState:(id)arg2;
- (id)videoTracker;
- (void)setAudioProcessorFilterStyleId:(id)arg1;
- (_Bool)isReverseMotionFilterSelected;
- (void)filtersTurnedOn;
- (void)activate;
- (void)configureWithView:(id)arg1;
@property(readonly, nonatomic) SCPreviewView *previewView; // @synthesize previewView=_previewView;
- (struct CGRect)swipeFilterViewInitialFrame;
@property(retain, nonatomic) SCSmartSwipeFilterView *smartSwipeFilterView; // @synthesize smartSwipeFilterView=_smartSwipeFilterView;
@property(retain, nonatomic) NSData *reversedAudioData;
@property(readonly, nonatomic) id <SCFeatureVideoPlayback> videoPlayback;
@property(readonly, nonatomic) id <SCFeatureImagePlayback> imagePlayback;
@property(readonly, nonatomic) SCFeature<SCFeatureSwipeFilters> *smartVideoSwipeFilters;
@property(readonly, nonatomic) SCFeature<SCFeatureSwipeFilters> *smartImageSwipeFilters;
- (id)initWithConfiguration:(id)arg1 applicationLifecycleEvents:(id)arg2 filterArranger:(id)arg3 commonLoggingParameters:(id)arg4 geofilterLogger:(id)arg5 userSession:(id)arg6 imageProcessCommandProvider:(id)arg7 cropBackgroundAnimationImages:(id)arg8 cropBackgroundAnimationColors:(id)arg9 focusLocationDelegate:(id)arg10 venueFilterTooltipProvider:(id)arg11 snapCrop:(id)arg12 drawingFeature:(id)arg13 stickerContainerFeature:(id)arg14 maxMediaAreaFrame:(struct CGRect)arg15 unlockableGeoFilterTracker:(id)arg16 swipeFilterHelpProvider:(id)arg17 lensLogger:(id)arg18;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

