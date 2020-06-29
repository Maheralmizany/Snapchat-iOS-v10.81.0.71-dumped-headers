//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCBusinessLogic.h"

#import "SCPhoneEntry-Protocol.h"

@class NSArray, NSString;
@protocol SCPhoneEntryDelegate, SCPhoneNumberFormatter;

@interface SCPhoneEntryBusinessLogic : SCBusinessLogic <SCPhoneEntry>
{
    id <SCPhoneNumberFormatter> _phoneNumberFormatter;
    NSString *_countryCode;
    NSString *_currentPhoneNumber;
    _Bool _canContinue;
    _Bool _isLoading;
    NSString *_formattedCountryCode;
    NSString *_errorMessage;
    NSArray *_countryCodes;
    id <SCPhoneEntryDelegate> _delegate;
}

@property(nonatomic) __weak id <SCPhoneEntryDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_handlePhoneDidChange:(id)arg1 newPhone:(id)arg2 range:(struct _NSRange)arg3;
- (void)_phoneSubmitFailed:(id)arg1;
- (void)_phoneSubmitSucceeded;
- (void)submitPhone;
- (void)handleAction:(id)arg1;
- (id)viewModel;
- (id)initWithPhoneNumber:(id)arg1 phoneNumberFormatter:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

