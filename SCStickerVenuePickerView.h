//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class CAGradientLayer, CALayer, UIButton, UITableView;

@interface SCStickerVenuePickerView : UIView
{
    _Bool _shouldResetScrollOffset;
    _Bool _supportsReporting;
    UITableView *_tableView;
    UIButton *_reportButton;
    UIView *_highlightView;
    CAGradientLayer *_topFadeGradient;
    CAGradientLayer *_bottomFadeGradient;
    CALayer *_centerLayer;
    CALayer *_maskLayer;
    long long _highlightedRow;
    double _lastCheckedYOffsetForHaptics;
}

@property(nonatomic) double lastCheckedYOffsetForHaptics; // @synthesize lastCheckedYOffsetForHaptics=_lastCheckedYOffsetForHaptics;
@property(nonatomic) long long highlightedRow; // @synthesize highlightedRow=_highlightedRow;
@property(retain, nonatomic) CALayer *maskLayer; // @synthesize maskLayer=_maskLayer;
@property(retain, nonatomic) CALayer *centerLayer; // @synthesize centerLayer=_centerLayer;
@property(retain, nonatomic) CAGradientLayer *bottomFadeGradient; // @synthesize bottomFadeGradient=_bottomFadeGradient;
@property(retain, nonatomic) CAGradientLayer *topFadeGradient; // @synthesize topFadeGradient=_topFadeGradient;
@property(retain, nonatomic) UIView *highlightView; // @synthesize highlightView=_highlightView;
@property(nonatomic) _Bool supportsReporting; // @synthesize supportsReporting=_supportsReporting;
@property(nonatomic) _Bool shouldResetScrollOffset; // @synthesize shouldResetScrollOffset=_shouldResetScrollOffset;
@property(retain, nonatomic) UIButton *reportButton; // @synthesize reportButton=_reportButton;
@property(readonly, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
- (void).cxx_destruct;
- (void)_layoutMaskLayers;
- (double)_offsetForCenteringCell;
- (void)layoutSubviews;
- (id)_createGradientIsTop:(_Bool)arg1;
- (void)_setupSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

