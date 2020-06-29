//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCPhoneCodeVerifier-Protocol.h"

@class SCPhoneNumber;
@protocol SCAuthenticatedPhoneService, SCPhoneRegistrationPhoneCodeVerifierDelegate, SCUserVerificationPhoneCodeVerifyEventLogger;

@interface SCPhoneRegistrationPhoneCodeVerifier : NSObject <SCPhoneCodeVerifier>
{
    id <SCAuthenticatedPhoneService> _phoneService;
    SCPhoneNumber *_phoneNumber;
    id <SCPhoneRegistrationPhoneCodeVerifierDelegate> _delegate;
    id <SCUserVerificationPhoneCodeVerifyEventLogger> _logger;
}

- (void).cxx_destruct;
- (void)requestPhoneCodeWithDeliveryMechanism:(unsigned long long)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_phoneVerificationFailed:(id)arg1 connectionFailure:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_phoneVerificationSucceeded:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)verifyPhoneCode:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)initWithPhoneNumber:(id)arg1 authenticatedPhoneService:(id)arg2 logger:(id)arg3 delegate:(id)arg4;

@end
