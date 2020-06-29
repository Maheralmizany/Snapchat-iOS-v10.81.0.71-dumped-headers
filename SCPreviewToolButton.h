//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCPreviewToolButtonBase.h"

@class SCCircularBadgeView, SCShapeView, SCTransparentParentView, UIImage, UIImageView;

@interface SCPreviewToolButton : SCPreviewToolButtonBase
{
    _Bool _trashGrown;
    UIImage *_selectedMaskImage;
    long long _selectionStyle;
    UIImageView *_trashView;
    SCTransparentParentView *_imageViewContainer;
    UIImageView *_imageView;
    SCCircularBadgeView *_badgeView;
    UIImageView *_highlightedImageView;
    UIImageView *_highlightedImageViewMask;
    SCShapeView *_highlightedFillView;
}

@property(retain, nonatomic) SCShapeView *highlightedFillView; // @synthesize highlightedFillView=_highlightedFillView;
@property(retain, nonatomic) UIImageView *highlightedImageViewMask; // @synthesize highlightedImageViewMask=_highlightedImageViewMask;
@property(retain, nonatomic) UIImageView *highlightedImageView; // @synthesize highlightedImageView=_highlightedImageView;
@property(retain, nonatomic) SCCircularBadgeView *badgeView; // @synthesize badgeView=_badgeView;
@property(retain, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
@property(retain, nonatomic) SCTransparentParentView *imageViewContainer; // @synthesize imageViewContainer=_imageViewContainer;
@property(readonly, nonatomic, getter=isTrashGrown) _Bool trashGrown; // @synthesize trashGrown=_trashGrown;
@property(retain, nonatomic) UIImageView *trashView; // @synthesize trashView=_trashView;
@property(nonatomic) long long selectionStyle; // @synthesize selectionStyle=_selectionStyle;
@property(readonly, nonatomic) UIImage *selectedMaskImage; // @synthesize selectedMaskImage=_selectedMaskImage;
- (void).cxx_destruct;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (void)shrinkTrashIcon;
- (void)growTrashIcon;
- (void)hideTrashIcon;
- (void)showTrashIcon;
- (void)_removeAllViewAnimations;
- (void)_removeInFlightAnimationsForLayer:(id)arg1;
- (void)performResizingAnimationWithScale:(double)arg1 isHighlighted:(_Bool)arg2;
- (void)preResizingAnimationWork:(_Bool)arg1;
- (void)_animateView:(id)arg1 toScale:(double)arg2 withDuration:(double)arg3 delay:(double)arg4 highlighted:(_Bool)arg5 completion:(CDUnknownBlockType)arg6;
- (void)setSelected:(_Bool)arg1;
- (_Bool)shouldShowHighlighted;
- (void)setHighlighted:(_Bool)arg1;
- (void)setShowingHighlighted:(_Bool)arg1;
- (void)layoutSubviews;
@property(nonatomic) _Bool badgeHidden;
- (void)updateImage:(id)arg1 animated:(_Bool)arg2;
- (void)updateImageWithImageName:(id)arg1;
- (id)initWithImage:(id)arg1 selectedMaskImage:(id)arg2;

@end
