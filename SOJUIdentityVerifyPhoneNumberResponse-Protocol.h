//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCSojuMessage-Protocol.h"

@class NSArray, NSNumber, NSString, SOJUIdentityDeepLinkResponse, SOJUIdentityVerificationNeeded;

@protocol SOJUIdentityVerifyPhoneNumberResponse <SCSojuMessage>
@property(readonly, nonatomic) NSString *twoFaRecoveryCode;
@property(readonly, nonatomic) NSNumber *noTentativePhoneNumber;
@property(readonly, nonatomic) NSNumber *reauthRequired;
@property(readonly, nonatomic) SOJUIdentityDeepLinkResponse *deepLinkResponse;
@property(readonly, nonatomic) NSArray *twoFaVerifiedDevices;
@property(readonly, nonatomic) SOJUIdentityVerificationNeeded *verificationNeeded;
@property(readonly, nonatomic) NSString *allowedToUseCash;
@property(readonly, nonatomic) NSNumber *isTwoFaEnabled;
@property(readonly, nonatomic) NSString *message;
@property(readonly, nonatomic) NSNumber *logged;
@end

