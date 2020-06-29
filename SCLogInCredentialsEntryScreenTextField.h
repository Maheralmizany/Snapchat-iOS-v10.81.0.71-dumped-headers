//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SIGTextField.h"

@class NSLayoutConstraint, UIButton, UIView;

@interface SCLogInCredentialsEntryScreenTextField : SIGTextField
{
    UIButton *_countryCodeButton;
    NSLayoutConstraint *_errorAlertIconTrailingConstraint;
    UIView *_rightViewContainer;
    UIView *_errorAlertIcon;
}

@property(readonly, nonatomic) UIView *errorAlertIcon; // @synthesize errorAlertIcon=_errorAlertIcon;
@property(readonly, nonatomic) UIView *rightViewContainer; // @synthesize rightViewContainer=_rightViewContainer;
- (void).cxx_destruct;
- (id)createExclamationPoint;
- (void)showErrorAlert:(_Bool)arg1;
- (void)_setupConstraints;
- (id)initWithFrame:(struct CGRect)arg1;

@end

