//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCFeature.h"

#import "SCFeatureRotationalPreview-Protocol.h"
#import "SCMotionManagerListener-Protocol.h"

@class NSString, SCFeatureReference, SCPreviewView;
@protocol SCFeatureRotationalPreviewDelegate;

@interface SCFeatureRotationalPreviewImpl : SCFeature <SCMotionManagerListener, SCFeatureRotationalPreview>
{
    SCPreviewView *_previewView;
    _Bool _isListeningToMotionUpdates;
    id <SCFeatureRotationalPreviewDelegate> _delegate;
    SCFeatureReference *_caption;
    SCFeatureReference *_magicMoment;
    SCFeatureReference *_swipeFilters;
}

@property(retain, nonatomic) SCFeatureReference *swipeFilters; // @synthesize swipeFilters=_swipeFilters;
@property(retain, nonatomic) SCFeatureReference *magicMoment; // @synthesize magicMoment=_magicMoment;
@property(retain, nonatomic) SCFeatureReference *caption; // @synthesize caption=_caption;
@property(nonatomic) __weak id <SCFeatureRotationalPreviewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_updateRotationalViewsRotation:(double)arg1 translation:(struct CGVector)arg2;
- (void)motionManager:(id)arg1 didUpdateRotation:(double)arg2 translation:(struct CGVector)arg3;
- (void)configureWithView:(id)arg1;
- (void)resetRotation;
- (void)updateMotionUpdatesListeningStateWithCurrentTouchTarget:(id)arg1 stickerControllerIsCutting:(_Bool)arg2;
- (void)dealloc;
- (id)initWithMagicMomentConfiguration:(id)arg1 caption:(id)arg2 magicMoment:(id)arg3 swipeFilters:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
