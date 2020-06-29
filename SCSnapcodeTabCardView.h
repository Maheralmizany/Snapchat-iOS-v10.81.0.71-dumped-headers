//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSString, SCLoadingIndicatorView, SCScannableInfo, UIButton;
@protocol SCSnapcodeTabCardViewViewDelegate;

@interface SCSnapcodeTabCardView : UIView
{
    NSString *_continueBarTitle;
    _Bool _continueBarActive;
    id <SCSnapcodeTabCardViewViewDelegate> _delegate;
    SCScannableInfo *_scannableInfo;
    UIButton *_continueBar;
    SCLoadingIndicatorView *_continueBarActivity;
}

@property(retain, nonatomic) SCLoadingIndicatorView *continueBarActivity; // @synthesize continueBarActivity=_continueBarActivity;
@property(retain, nonatomic) UIButton *continueBar; // @synthesize continueBar=_continueBar;
@property(retain, nonatomic) SCScannableInfo *scannableInfo; // @synthesize scannableInfo=_scannableInfo;
@property(nonatomic) __weak id <SCSnapcodeTabCardViewViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)updateViewKeyboardWillChangeFrame:(id)arg1 showing:(_Bool)arg2;
- (void)inputKeyboardWillShow:(id)arg1;
- (void)inputKeyboardWillHide:(id)arg1;
- (void)updateScannableInfo:(id)arg1;
- (void)stopContinueBarAnimation:(_Bool)arg1;
- (void)startContinueBarAnimation;
- (void)continueButtonPressed;
- (void)_setContinueBarTitle:(id)arg1;
@property(nonatomic) _Bool continueBarActive;
- (void)_createContinueBar;
- (void)continueButtonPressedAction;
- (void)viewDidUnSelect;
- (void)viewDidSelect;
- (void)resetInput;
- (id)initWithFrame:(struct CGRect)arg1 buttonTitle:(id)arg2 snapcodeViewOffset:(double)arg3;

@end

