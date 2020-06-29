//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class SCCardBackgroundView, SCCardGradientView;

@interface SCCardContainerView : UIView
{
    _Bool _showsTopCorners;
    SCCardGradientView *_cardGradientView;
    SCCardBackgroundView *_cardBackgroundView;
    struct CGSize _previousBoundsSize;
}

@property(nonatomic) struct CGSize previousBoundsSize; // @synthesize previousBoundsSize=_previousBoundsSize;
@property(retain, nonatomic) SCCardBackgroundView *cardBackgroundView; // @synthesize cardBackgroundView=_cardBackgroundView;
@property(retain, nonatomic) SCCardGradientView *cardGradientView; // @synthesize cardGradientView=_cardGradientView;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1 showsTopCorners:(_Bool)arg2;

@end

