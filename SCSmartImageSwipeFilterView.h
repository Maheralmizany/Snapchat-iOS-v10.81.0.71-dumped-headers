//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCSmartSwipeFilterView.h"

#import "SCFeatureImagePlayback-Protocol.h"
#import "SCImageProcessColorFilterSessionListener-Protocol.h"

@class NSArray, NSString, SCBehaviorSubject, SCFuture, SCImageProcessColorFilterSession, SCImageProcessCommand, SCMediaFilterView, SCObservable, SCUserSession, UIImage;
@protocol SCImageProcessCommandMapping, SCLensLoggerConsumptionTrackingProviding, SCSmartImageSwipeFilterViewDelegate><SCSmartSwipeFilterViewDelegate;

@interface SCSmartImageSwipeFilterView : SCSmartSwipeFilterView <SCImageProcessColorFilterSessionListener, SCFeatureImagePlayback>
{
    SCFuture *_scaledImageFuture;
    UIImage *_scaledImageSource;
    SCMediaFilterView *_imageMediaView;
    SCImageProcessColorFilterSession *_imageProcessPixelSession;
    NSArray *_commands;
    SCImageProcessCommand *_unfilteredCommand;
    _Bool _isCropBackgroundAnimating;
    _Bool _isCameraRollMedia;
    SCUserSession *_userSession;
    _Bool _shouldScaleImage;
    id <SCLensLoggerConsumptionTrackingProviding> _lensLogger;
    SCObservable *_applicationLifecycleEvents;
    SCBehaviorSubject *_imageProcessCommandsObservable;
    id <SCImageProcessCommandMapping> _commandMapper;
    UIImage *_image;
}

@property(retain, nonatomic) UIImage *image; // @synthesize image=_image;
@property(readonly, nonatomic) SCObservable *imageProcessCommandsObservable; // @synthesize imageProcessCommandsObservable=_imageProcessCommandsObservable;
- (void).cxx_destruct;
- (id)imageProcessCommandForIndexPath:(id)arg1;
- (id)defaultLensCommand;
- (void)colorFilterSessionDidUpdateMappedCommands:(id)arg1;
- (void)removeColorFilterSessionListener:(id)arg1;
- (void)addColorFilterSessionListener:(id)arg1;
- (void)colorFilterSessionDidRenderImage:(id)arg1;
- (void)filterArrangerDidChangeVisualFilterNamesProvider:(id)arg1;
- (void)_filteredImageWithImage:(id)arg1 outputSize:(struct CGSize)arg2 commands:(id)arg3 orientation:(long long)arg4 completion:(CDUnknownBlockType)arg5;
- (id)_commandsForFilteredImageInLaguna;
- (_Bool)_shouldUnloadCommandsWhenStopped;
- (void)startDisplay;
- (void)stopDisplay;
- (void)_updateCommands;
- (void)updateLensProcessingCommand:(id)arg1;
- (void)updateMediaFilterMaskForItem:(id)arg1 relativeOffset:(double)arg2;
- (id)_updateMediaCommandsForCommandConfigurations:(id)arg1;
- (void)updateMediaFiltersAndCommands;
- (void)setBackgroundBlackValue:(double)arg1 duration:(double)arg2;
- (void)setCropBackgroundAnimating:(_Bool)arg1;
- (void)setViewportTransform:(struct CGAffineTransform)arg1;
- (void)_scaledImageWithAppliedCommands:(id)arg1 shouldSquarify:(_Bool)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)ucoImageWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)lensAppliedImageWithLensCommand:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)filteredImageWithCroppingAspectRatio:(double)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_updateScaledImage:(id)arg1;
- (void)_setupImageProcessSessionIfNecessary;
- (void)updateMediaViewScale:(double)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1 applicationLifecycleEvents:(id)arg2 filterArranger:(id)arg3 commonLoggingParameters:(id)arg4 geofilterLogger:(id)arg5 isLagunaMedia:(_Bool)arg6 rectificationConfig:(id)arg7 shouldScaleImage:(_Bool)arg8 isCameraRollMedia:(_Bool)arg9 userSession:(id)arg10 imageProcessCommandProvider:(id)arg11 cropBackgroundAnimationImages:(id)arg12 cropBackgroundAnimationColors:(id)arg13 focusLocationDelegate:(id)arg14 venueFilterTooltipProvider:(id)arg15 lensLogger:(id)arg16 isFromGallery:(_Bool)arg17 commandMapper:(id)arg18;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(nonatomic) __weak id <SCSmartImageSwipeFilterViewDelegate><SCSmartSwipeFilterViewDelegate> delegate; // @dynamic delegate;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

