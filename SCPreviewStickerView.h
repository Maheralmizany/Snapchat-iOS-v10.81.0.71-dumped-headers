//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCTouchControlUIView.h"

#import "SCPreviewAlignableView-Protocol.h"
#import "SCPreviewStickerViewSizeChangeDelegate-Protocol.h"
#import "SCVideoTargetTrajectoryManagerDelegate-Protocol.h"
#import "SCVideoTrackedView-Protocol.h"

@class NSString, SCPreviewStickerViewContentView, SCPreviewStickerViewTransitionAnimator, SCUserSession, SCVideoTargetTrajectoryManager, UIImage, UIImageView, UILabel;
@protocol SCStickerProtocol;

@interface SCPreviewStickerView : SCTouchControlUIView <SCVideoTargetTrajectoryManagerDelegate, SCPreviewStickerViewSizeChangeDelegate, SCVideoTrackedView, SCPreviewAlignableView>
{
    UILabel *_label;
    SCVideoTargetTrajectoryManager *_trajectoryManager;
    _Bool _showCloudImage;
    UIImage *_stickerImage;
    _Bool _animationStopped;
    SCPreviewStickerViewTransitionAnimator *_transitionAnimator;
    SCUserSession *_userSession;
    _Bool _isStickerFromRecents;
    _Bool _isCreatedCustomSticker;
    _Bool _isFlipped;
    id <SCStickerProtocol> _sticker;
    SCPreviewStickerViewContentView *_contentView;
    long long _uniqueId;
    UIImageView *_stickerImageView;
}

+ (double)fontSizeForLineHeight:(double)arg1;
+ (_Bool)shouldEnableTapToFlip;
@property(retain, nonatomic) UIImageView *stickerImageView; // @synthesize stickerImageView=_stickerImageView;
@property(nonatomic) _Bool isFlipped; // @synthesize isFlipped=_isFlipped;
@property(nonatomic) long long uniqueId; // @synthesize uniqueId=_uniqueId;
@property(nonatomic) _Bool isCreatedCustomSticker; // @synthesize isCreatedCustomSticker=_isCreatedCustomSticker;
@property(nonatomic) _Bool isStickerFromRecents; // @synthesize isStickerFromRecents=_isStickerFromRecents;
@property(readonly, nonatomic) SCPreviewStickerViewContentView *contentView; // @synthesize contentView=_contentView;
@property(readonly, copy, nonatomic) id <SCStickerProtocol> sticker; // @synthesize sticker=_sticker;
- (void).cxx_destruct;
- (void)previewStickerViewContentViewDidChangeSize:(id)arg1;
- (id)deletableView;
- (void)updateAnchorState:(id)arg1;
- (_Bool)shouldProcessGesture:(id)arg1;
- (struct CGRect)alignableContentRect;
- (id)alignableTouchControlView;
- (void)resumeAnimatedStickerIfNecessary;
- (void)stopAnimatedStickerIfNecessary;
- (void)trajectoryManager:(id)arg1 didOutputTransform:(id)arg2;
- (void)onStickerViewScaled:(double)arg1;
- (void)onScreenshotTaken;
- (void)disableTracking;
@property(readonly, nonatomic) SCVideoTargetTrajectoryManager *trajectoryManager;
- (void)enableTrackingWithManager:(id)arg1;
- (id)targetTrajectory;
- (_Bool)isTracking;
- (void)pan:(id)arg1;
- (void)flipSticker;
- (void)tap:(id)arg1;
- (_Bool)shouldRespondToTap:(id)arg1;
- (_Bool)textFrameContainsGesture:(id)arg1;
- (id)stickerImage;
- (id)stickerStateWithStaticBounds:(struct CGRect)arg1;
- (_Bool)canPersistStickerState;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (id)_initWithImageSticker:(id)arg1 center:(struct CGPoint)arg2 thumbnail:(id)arg3 shouldLimitSize:(_Bool)arg4 userSession:(id)arg5;
- (id)_initWithTextSticker:(id)arg1 center:(struct CGPoint)arg2 fontSize:(double)arg3;
- (id)_contentViewForInfoSticker:(id)arg1;
- (id)renderState;
- (_Bool)isAnimated;
- (void)_recomputeTransform;
- (void)recomputeTransform;
- (double)maxScale;
- (id)initWithSticker:(id)arg1 contentView:(id)arg2 center:(struct CGPoint)arg3;
- (id)initWithSticker:(id)arg1 center:(struct CGPoint)arg2 fontSize:(double)arg3 thumbnail:(id)arg4 shouldLimitSize:(_Bool)arg5 userSession:(id)arg6;
- (id)initWithSticker:(id)arg1 image:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

