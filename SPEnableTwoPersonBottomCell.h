//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SPScalableCell.h"

@class NSString, UIButton, UILabel;
@protocol SPEnableTwoPersonBottomCellOutput;

@interface SPEnableTwoPersonBottomCell : SPScalableCell
{
    id <SPEnableTwoPersonBottomCellOutput> _output;
    UIButton *_enableButton;
    UILabel *_captionLabel;
}

@property(retain, nonatomic) UILabel *captionLabel; // @synthesize captionLabel=_captionLabel;
@property(retain, nonatomic) UIButton *enableButton; // @synthesize enableButton=_enableButton;
@property(nonatomic) __weak id <SPEnableTwoPersonBottomCellOutput> output; // @synthesize output=_output;
- (void).cxx_destruct;
- (void)_setupConstraints;
- (void)enableButtonDidTouchUpInside;
- (void)prepareForReuse;
@property(copy, nonatomic) NSString *enableTwoPersonButtonCaption;
@property(copy, nonatomic) NSString *enableTwoPersonButtonTitle;
- (void)exitVisibleState;
- (void)enterVisibleState;
- (id)initWithFrame:(struct CGRect)arg1;

@end

