//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class SCSwipeTransitionGradientOverlayView, UIVisualEffectView;

@interface SCSwipeTransitionContainerView : UIView
{
    SCSwipeTransitionGradientOverlayView *_gradientView;
    UIVisualEffectView *_visualEffectView;
}

@property(readonly, nonatomic) UIVisualEffectView *visualEffectView; // @synthesize visualEffectView=_visualEffectView;
@property(readonly, nonatomic) SCSwipeTransitionGradientOverlayView *gradientView; // @synthesize gradientView=_gradientView;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1 gradientColors:(id)arg2;

@end

