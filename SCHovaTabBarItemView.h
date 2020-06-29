//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "SCTraceEnabled-Protocol.h"

@class NSString, UIImageView, UILabel;

@interface SCHovaTabBarItemView : UIView <SCTraceEnabled>
{
    UIImageView *_imageView;
    UIView *_imageBadgeView;
    struct CGAffineTransform _pendingImageViewTransform;
    double _pendingImageViewAlpha;
    double _pendingBadgeViewAlpha;
    double _pendingDarkModeImageViewAlpha;
    _Bool _verticallyVisible;
    long long _itemType;
    UILabel *_hintLabel;
    UIView *_cameraPageView;
    UIImageView *_cameraPageImageView;
    UIView *_circleView;
    long long _interfaceStyle;
    long long _itemTintColor;
    double _percentVisible;
    UIView *_selectedView;
    long long _badgeCount;
    UIView *_cameraPageImageBadgeView;
    UIImageView *_darkModeImageView;
    UIView *_darkModeImageBadgeView;
    NSString *_darkModeImageName;
    struct UIEdgeInsets _hitTestInsets;
}

+ (id)_genBadgeCircleViewForImageView:(id)arg1 scaleFactor:(double)arg2 alpha:(double)arg3 itemType:(long long)arg4;
+ (id)captureTabBarView;
+ (id)storiesTabBarView;
+ (id)chatTabBarView;
@property(retain, nonatomic) NSString *darkModeImageName; // @synthesize darkModeImageName=_darkModeImageName;
@property(retain, nonatomic) UIView *darkModeImageBadgeView; // @synthesize darkModeImageBadgeView=_darkModeImageBadgeView;
@property(retain, nonatomic) UIImageView *darkModeImageView; // @synthesize darkModeImageView=_darkModeImageView;
@property(retain, nonatomic) UIView *cameraPageImageBadgeView; // @synthesize cameraPageImageBadgeView=_cameraPageImageBadgeView;
@property(nonatomic) struct UIEdgeInsets hitTestInsets; // @synthesize hitTestInsets=_hitTestInsets;
@property(nonatomic) long long badgeCount; // @synthesize badgeCount=_badgeCount;
@property(retain, nonatomic) UIView *selectedView; // @synthesize selectedView=_selectedView;
@property(nonatomic) double percentVisible; // @synthesize percentVisible=_percentVisible;
@property(readonly, nonatomic, getter=isVerticallyVisible) _Bool verticallyVisible; // @synthesize verticallyVisible=_verticallyVisible;
@property(nonatomic) long long itemTintColor; // @synthesize itemTintColor=_itemTintColor;
@property(nonatomic) long long interfaceStyle; // @synthesize interfaceStyle=_interfaceStyle;
@property(retain, nonatomic) UIView *circleView; // @synthesize circleView=_circleView;
@property(retain, nonatomic) UIImageView *cameraPageImageView; // @synthesize cameraPageImageView=_cameraPageImageView;
@property(retain, nonatomic) UIView *cameraPageView; // @synthesize cameraPageView=_cameraPageView;
@property(retain, nonatomic) UILabel *hintLabel; // @synthesize hintLabel=_hintLabel;
@property(readonly, nonatomic) long long itemType; // @synthesize itemType=_itemType;
- (void).cxx_destruct;
- (unsigned long long)accessibilityTraits;
- (_Bool)isAccessibilityElement;
- (id)_genBadgeCircleViewForImageView:(id)arg1 scaleFactor:(double)arg2;
@property(readonly, nonatomic) double cameraViewWidth;
- (id)fillColor;
- (_Bool)isDarkModeImageViewLoaded;
@property(readonly, nonatomic, getter=isBadged) _Bool badged;
- (void)setVerticallyVisible:(_Bool)arg1;
- (void)setDarkModeImageViewAlpha:(double)arg1;
- (void)setImageViewAlpha:(double)arg1;
- (void)setImageViewTransform:(struct CGAffineTransform)arg1;
- (struct CGSize)imageViewSize;
- (_Bool)isImageViewLoaded;
@property(readonly, nonatomic) UIImageView *imageView;
- (void)showHintLabelWithText:(id)arg1;
- (void)updateImageViewsAndLayout;
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1 itemType:(long long)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

