//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SPScalableCell.h"

@class NSString, UIButton, UIControl, UIImage, UIImageView, UILabel;
@protocol SPRetakeSelfieCellOutput;

@interface SPRetakeSelfieCell : SPScalableCell
{
    id <SPRetakeSelfieCellOutput> _output;
    UIControl *_panelView;
    UIImageView *_panelImageView;
    UILabel *_panelTitleLabel;
    UIButton *_closeButton;
}

@property(retain, nonatomic) UIButton *closeButton; // @synthesize closeButton=_closeButton;
@property(retain, nonatomic) UILabel *panelTitleLabel; // @synthesize panelTitleLabel=_panelTitleLabel;
@property(retain, nonatomic) UIImageView *panelImageView; // @synthesize panelImageView=_panelImageView;
@property(retain, nonatomic) UIControl *panelView; // @synthesize panelView=_panelView;
@property(nonatomic) __weak id <SPRetakeSelfieCellOutput> output; // @synthesize output=_output;
- (void).cxx_destruct;
- (void)_hideContentWithAnimation:(CDUnknownBlockType)arg1;
- (void)_setupConstraints;
- (void)closeButtonDidTouchUpInside;
- (void)retakeSelfirButtonDidTouchUpInside;
- (void)prepareForReuse;
@property(copy, nonatomic) NSString *retakeSelfieTitle;
@property(retain, nonatomic) UIImage *retakeSelfieImage;
- (void)exitVisibleState;
- (void)enterVisibleState;
- (id)initWithFrame:(struct CGRect)arg1;

@end

