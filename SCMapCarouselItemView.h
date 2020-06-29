//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "UIGestureRecognizerDelegate-Protocol.h"

@class NSArray, NSHashTable, NSString, UILabel, UIVisualEffectView;

@interface SCMapCarouselItemView : UIView <UIGestureRecognizerDelegate>
{
    UIView *_containerView;
    UIView *_containerViewSnapshot;
    NSHashTable *_collapsedBottomAccessories;
    UIVisualEffectView *_blurView;
    UILabel *_titleLabel;
    UILabel *_subtitleLabel;
    UIView *_subtitleLeadingAccessoryView;
    UIView *_titleTrailingAccessoryView;
    UIView *_thumbnailView;
    UIView *_trailingAccessoryView;
    NSArray *_bottomAccessoryViews;
    UIView *_stretchableBottomAccessoryView;
    double _mainContentDefaultHeight;
    double _thumbnailViewDimension;
    unsigned long long _layoutDensity;
    CDUnknownBlockType _onTap;
    CDUnknownBlockType _onLongPress;
    CDUnknownBlockType _onTapBottomAccessory;
}

@property(copy, nonatomic) CDUnknownBlockType onTapBottomAccessory; // @synthesize onTapBottomAccessory=_onTapBottomAccessory;
@property(copy, nonatomic) CDUnknownBlockType onLongPress; // @synthesize onLongPress=_onLongPress;
@property(copy, nonatomic) CDUnknownBlockType onTap; // @synthesize onTap=_onTap;
@property(nonatomic) unsigned long long layoutDensity; // @synthesize layoutDensity=_layoutDensity;
@property(nonatomic) double thumbnailViewDimension; // @synthesize thumbnailViewDimension=_thumbnailViewDimension;
@property(nonatomic) double mainContentDefaultHeight; // @synthesize mainContentDefaultHeight=_mainContentDefaultHeight;
@property(retain, nonatomic) UIView *stretchableBottomAccessoryView; // @synthesize stretchableBottomAccessoryView=_stretchableBottomAccessoryView;
@property(copy, nonatomic) NSArray *bottomAccessoryViews; // @synthesize bottomAccessoryViews=_bottomAccessoryViews;
@property(retain, nonatomic) UIView *trailingAccessoryView; // @synthesize trailingAccessoryView=_trailingAccessoryView;
@property(retain, nonatomic) UIView *thumbnailView; // @synthesize thumbnailView=_thumbnailView;
@property(retain, nonatomic) UIView *titleTrailingAccessoryView; // @synthesize titleTrailingAccessoryView=_titleTrailingAccessoryView;
@property(retain, nonatomic) UIView *subtitleLeadingAccessoryView; // @synthesize subtitleLeadingAccessoryView=_subtitleLeadingAccessoryView;
@property(readonly, nonatomic) UILabel *subtitleLabel; // @synthesize subtitleLabel=_subtitleLabel;
@property(readonly, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
- (void).cxx_destruct;
- (id)existingBottomAccessoryViewOfClass:(Class)arg1;
- (_Bool)_gestureWithinBottomAccessory:(id)arg1;
- (void)_longPressed:(id)arg1;
- (void)_tapped:(id)arg1;
- (void)layoutSubviews;
- (double)_mainContentDefaultHeight;
- (double)_heightForBottomAccessoryView:(id)arg1 width:(double)arg2;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)setBottomAccessoryView:(id)arg1 isCollapsed:(_Bool)arg2;
@property(nonatomic) _Bool showsShadow;
- (void)setBackgroundColor:(id)arg1;
- (void)resetToDefaults;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

