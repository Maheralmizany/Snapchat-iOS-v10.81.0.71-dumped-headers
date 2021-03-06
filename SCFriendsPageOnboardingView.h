//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSTimer, SCShapeView, UIImageView;

@interface SCFriendsPageOnboardingView : UIView
{
    struct CGPoint _cardBounceViewStartCenter;
    struct CGPoint _cardBounceViewDestCenter;
    NSTimer *_animationTimer;
    SCShapeView *_cardBounceView;
    UIImageView *_upperLeftTeachingArrowView;
    UIImageView *_upperRightTeachingArrowView;
    UIImageView *_bottomLeftTeachingArrowView;
    UIImageView *_bottomRightTeachingArrowView;
}

@property(retain, nonatomic) UIImageView *bottomRightTeachingArrowView; // @synthesize bottomRightTeachingArrowView=_bottomRightTeachingArrowView;
@property(retain, nonatomic) UIImageView *bottomLeftTeachingArrowView; // @synthesize bottomLeftTeachingArrowView=_bottomLeftTeachingArrowView;
@property(retain, nonatomic) UIImageView *upperRightTeachingArrowView; // @synthesize upperRightTeachingArrowView=_upperRightTeachingArrowView;
@property(retain, nonatomic) UIImageView *upperLeftTeachingArrowView; // @synthesize upperLeftTeachingArrowView=_upperLeftTeachingArrowView;
@property(retain, nonatomic) SCShapeView *cardBounceView; // @synthesize cardBounceView=_cardBounceView;
- (void).cxx_destruct;
- (void)_removeAnimations;
- (void)_prepareAnimations;
- (void)_resetArrowViewCluster;
- (void)_resetCardBounceView;
- (struct CGPoint)_swipeHintCenter;
- (struct CGRect)_bottomTeachingArrowViewFrame;
- (struct CGRect)_upperTeachingArrowViewFrame;
- (struct CGRect)_cardBounceViewFrame;
- (void)_animateArrowView:(id)arg1 delay:(double)arg2;
- (void)_animateTeachingArrowCluster;
- (void)_animateTooltip;
- (void)_startAnimations;
- (void)stopAnimations;
- (void)startAnimations;
- (id)initWithFrame:(struct CGRect)arg1;

@end

