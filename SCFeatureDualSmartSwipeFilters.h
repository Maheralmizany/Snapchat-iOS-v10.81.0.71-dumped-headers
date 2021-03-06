//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCFeature.h"

#import "SCFeatureSwipeFilters-Protocol.h"
#import "SCPreviewGestureResponder-Protocol.h"

@class NSData, NSString, SCFeatureImageSmartSwipeFilters, SCFeatureVideoSmartSwipeFilters, SCPreviewConfiguration, SCPreviewView, SCSmartSwipeFilterView, UIView;
@protocol SCFeatureImagePlayback, SCFeatureSwipeFilters, SCFeatureSwipeFiltersDelegate, SCFeatureVideoPlayback;

@interface SCFeatureDualSmartSwipeFilters : SCFeature <SCFeatureSwipeFilters, SCPreviewGestureResponder>
{
    SCFeatureImageSmartSwipeFilters *_imageFilters;
    SCFeatureVideoSmartSwipeFilters *_videoFilters;
    SCPreviewConfiguration *_configuration;
}

@property(retain, nonatomic) SCPreviewConfiguration *configuration; // @synthesize configuration=_configuration;
@property(retain, nonatomic) SCFeatureVideoSmartSwipeFilters *videoFilters; // @synthesize videoFilters=_videoFilters;
@property(retain, nonatomic) SCFeatureImageSmartSwipeFilters *imageFilters; // @synthesize imageFilters=_imageFilters;
- (void).cxx_destruct;
- (void)didProcessTapInPreviewContainerView:(id)arg1;
- (unsigned long long)didTapPreviewContainerView:(id)arg1;
- (void)updateSnapCommonLoggingParameters:(id)arg1;
- (_Bool)isReverseMotionFilterSelected;
- (id)videoTracker;
- (void)activate;
- (void)setAudioProcessorFilterStyleId:(id)arg1;
- (void)replaceFiltersWithState:(id)arg1 lastState:(id)arg2;
- (void)lensAppliedImageWithLensCommand:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)filtersTurnedOn;
- (void)ucoImageWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)filteredImageWithCroppingAspectRatio:(double)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (long long)currentFilterSpeedForType:(long long)arg1;
@property(retain, nonatomic) UIView *trackingObjectContainerView;
@property(retain, nonatomic) NSData *reversedAudioData;
- (void)addDebugView:(id)arg1;
@property(retain, nonatomic) SCSmartSwipeFilterView *smartSwipeFilterView;
@property(nonatomic) __weak id <SCFeatureSwipeFiltersDelegate> delegate;
- (void)configureWithView:(id)arg1;
@property(readonly, nonatomic) SCPreviewView *previewView;
@property(readonly, nonatomic) id <SCFeatureVideoPlayback> videoPlayback;
@property(readonly, nonatomic) id <SCFeatureImagePlayback> imagePlayback;
@property(readonly, nonatomic) SCFeature<SCFeatureSwipeFilters> *smartVideoSwipeFilters;
@property(readonly, nonatomic) SCFeature<SCFeatureSwipeFilters> *smartImageSwipeFilters;
- (id)initWithImageFilters:(id)arg1 videoFilters:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

