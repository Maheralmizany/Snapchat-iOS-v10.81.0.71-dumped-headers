//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCLogInCredentialsEntryScreenTextField.h"

@class NSLayoutConstraint, UIButton;

@interface SCLogInCredentialsEntryScreenPasswordTextField : SCLogInCredentialsEntryScreenTextField
{
    NSLayoutConstraint *_showHideButtonTrailingConstraint;
    UIButton *_showHideButton;
}

@property(readonly, nonatomic) UIButton *showHideButton; // @synthesize showHideButton=_showHideButton;
- (void).cxx_destruct;
- (void)showErrorAlert:(_Bool)arg1;
- (void)_setupShowHideButtonConstraints;
- (struct CGRect)rightViewRectForBounds:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end
