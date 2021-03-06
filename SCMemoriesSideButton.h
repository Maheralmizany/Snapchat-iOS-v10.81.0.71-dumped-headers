//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCGrowingButton.h"

@class SCAnimationPhaseCoordinator, SCShapeView, SIGTooltip, UIImageView, UIView;
@protocol SCMemoriesSideButtonDelegate;

@interface SCMemoriesSideButton : SCGrowingButton
{
    UIView *_featuredBadge;
    SCAnimationPhaseCoordinator *_animationCoordinator;
    id <SCMemoriesSideButtonDelegate> _delegate;
    SIGTooltip *_tooltip;
    unsigned long long _state;
    UIImageView *_maskImageView;
    UIImageView *_thumbnailView;
    SCShapeView *_shapeMaskView;
    UIImageView *_specStateImageView;
}

+ (_Bool)_requiresIconUpdateFromState:(unsigned long long)arg1 toState:(unsigned long long)arg2;
+ (_Bool)_shouldAnimateStateEntryFromState:(unsigned long long)arg1 toState:(unsigned long long)arg2;
+ (id)_imageForSpectaclesState:(unsigned long long)arg1;
+ (_Bool)_spectaclesStateRequiresMasking:(unsigned long long)arg1;
+ (id)_spectaclesDeviceStateImageForState:(unsigned long long)arg1;
@property(retain, nonatomic) UIImageView *specStateImageView; // @synthesize specStateImageView=_specStateImageView;
@property(retain, nonatomic) SCShapeView *shapeMaskView; // @synthesize shapeMaskView=_shapeMaskView;
@property(retain, nonatomic) UIImageView *thumbnailView; // @synthesize thumbnailView=_thumbnailView;
@property(retain, nonatomic) UIImageView *maskImageView; // @synthesize maskImageView=_maskImageView;
@property(nonatomic) unsigned long long state; // @synthesize state=_state;
- (void).cxx_destruct;
- (void)_removeTooltip;
- (void)_performAnimationsFromState:(unsigned long long)arg1 toState:(unsigned long long)arg2 animated:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;
- (void)_configureViewFromState:(unsigned long long)arg1 toState:(unsigned long long)arg2 animated:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;
- (void)addTooltipWithText:(id)arg1;
- (void)updateThumbnailView;
- (void)configureWithRecentThumbnails:(id)arg1;
- (_Bool)isDisplayingFeaturedBadge;
- (void)toggleFeaturedBadge:(_Bool)arg1 useNewUserSaveBadge:(_Bool)arg2;
- (void)setState:(unsigned long long)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (id)initWithDelegate:(id)arg1;

@end

