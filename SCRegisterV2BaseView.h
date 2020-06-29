//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "SCRegisterViewProtocol-Protocol.h"

@class NSString, SCGradientView, SCRegisterV2BackButton, SCRegisterV2EnterButton;
@protocol SCRegisterV2ViewDelegate;

@interface SCRegisterV2BaseView : UIView <SCRegisterViewProtocol>
{
    unsigned long long _baseColorPalette;
    id <SCRegisterV2ViewDelegate> _delegate;
    SCRegisterV2BackButton *_backButton;
    SCRegisterV2EnterButton *_continueButton;
    SCGradientView *_gradientView;
}

@property(retain, nonatomic) SCGradientView *gradientView; // @synthesize gradientView=_gradientView;
@property(retain, nonatomic) SCRegisterV2EnterButton *continueButton; // @synthesize continueButton=_continueButton;
@property(retain, nonatomic) SCRegisterV2BackButton *backButton; // @synthesize backButton=_backButton;
@property(nonatomic) __weak id <SCRegisterV2ViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)hideBackButtonWithAnimating:(_Bool)arg1;
- (void)setFieldsEnabled:(_Bool)arg1;
- (void)setActivityAnimating:(_Bool)arg1;
- (void)keyboardWillHide:(id)arg1;
- (void)keyboardWillShow:(id)arg1;
- (void)showOrHideEnterButton;
- (_Bool)isInputIncomplete;
- (double)continueButtonWidth;
- (double)continueButtonBottomPadding;
- (double)descriptionBottomPadding;
- (double)titleBottomPadding;
- (double)titleTopPaddingLarge;
- (double)loginTitleTopPadding;
- (double)titleTopPadding;
- (double)extraTopPadding;
- (double)descHorizontalInset;
- (double)buttonHorizontalInset;
- (double)horizontalInset;
- (void)setupGradient;
- (void)setupContinueButtonWithTitle:(id)arg1;
- (void)setupBackButton;
- (id)initWithFrame:(struct CGRect)arg1 delegate:(id)arg2 baseColorPalette:(unsigned long long)arg3;
- (id)initWithFrame:(struct CGRect)arg1 delegate:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

