//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSMutableArray, UIImageView;

@interface SCVerticalSwipeHintArrowView : UIView
{
    long long _direction;
    UIImageView *_arrowImageView;
    NSMutableArray *_animatingArrows;
    _Bool _animating;
}

@property(nonatomic, getter=isAnimating) _Bool animating; // @synthesize animating=_animating;
- (void).cxx_destruct;
- (void)_addArrowAnimationWithDelay:(double)arg1;
- (void)_addArrowAnimation;
- (void)sizeToFit;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (id)initWithDirection:(long long)arg1;

@end

