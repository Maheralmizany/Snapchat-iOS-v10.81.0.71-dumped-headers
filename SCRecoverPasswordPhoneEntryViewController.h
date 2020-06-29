//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "SCPhoneEntryViewDelegate-Protocol.h"

@class SCAlertViewCoordinator, SCPhoneEntryView, SCScreen, SCUnauthenticatedBaseView, UILabel;
@protocol SCUnauthenticatedStyleHelper;

@interface SCRecoverPasswordPhoneEntryViewController : UIViewController <SCPhoneEntryViewDelegate>
{
    SCScreen *_phoneEntryScreen;
    SCScreen *_recoverPasswordPhoneEntryScreen;
    SCAlertViewCoordinator *_alertViewCoordinator;
    id <SCUnauthenticatedStyleHelper> _styleHelper;
    SCUnauthenticatedBaseView *_baseView;
    SCPhoneEntryView *_phoneEntryView;
    UILabel *_titleLabel;
    _Bool _canSubmitPhoneNumber;
}

- (void).cxx_destruct;
- (void)_backButtonTapped;
- (void)_continueButtonTapped;
- (void)attributedLabel:(id)arg1 didSelectLinkWithURL:(id)arg2;
- (void)selectCountryCodeButtonPressed;
- (_Bool)shouldSubmitPhoneNumber;
- (_Bool)phoneNumberString:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;
- (void)_countryPickerExited;
- (void)_countrySelected:(id)arg1;
- (void)_sendViaSms;
- (void)_callByPhone;
- (void)_cancel;
- (void)_showOptionsAlert:(id)arg1;
- (void)_showOptionsAlert;
- (void)_presentCountryPicker:(id)arg1;
- (void)_initPhoneEntryView;
- (void)_initTitle;
- (void)_initContainerView;
- (void)_initSubviews;
- (void)_updateUIWithPhoneEntryViewModel:(id)arg1;
- (void)_startRenderingViewModels;
- (void)viewDidLoad;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (id)initWithPhoneEntryScreen:(id)arg1 recoverPasswordPhoneEntryScreen:(id)arg2 styleHelper:(id)arg3 window:(id)arg4;

@end

