//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SOJUAllUpdatesResponse-Protocol.h"

@class NSArray, NSNumber, NSString, SOJUCofResponse, SOJUIdentityVerificationNeeded, SOJUSecurityInAppWarningResponse, SOJUUserSessionInit;

@protocol SOJULoginResponse <SOJUAllUpdatesResponse>
@property(readonly, nonatomic) SOJUUserSessionInit *userSessionInit;
@property(readonly, nonatomic) SOJUSecurityInAppWarningResponse *inAppWarning;
@property(readonly, nonatomic) NSArray *snapAccessTokens;
@property(readonly, nonatomic) NSString *snapSessionRefreshToken;
@property(readonly, nonatomic) NSString *safetynetNonce;
@property(readonly, nonatomic) SOJUCofResponse *cofResponse;
@property(readonly, nonatomic) NSString *obfuscatedEmail;
@property(readonly, nonatomic) NSString *obfuscatedPhone;
@property(readonly, nonatomic) NSString *odlvPreAuthToken;
@property(readonly, nonatomic) NSNumber *odlvRequired;
@property(readonly, nonatomic) NSString *hashedOutBeta;
@property(readonly, nonatomic) NSString *preferredVerificationMethod;
@property(readonly, nonatomic) NSNumber *forcePhoneVerify;
@property(readonly, nonatomic) NSString *iwek;
@property(readonly, nonatomic) NSNumber *quickLoginResponse;
@property(readonly, nonatomic) NSNumber *powNumofzeros;
@property(readonly, nonatomic) NSString *reactivationStatus;
@property(readonly, nonatomic) NSString *latestBackupOutBeta;
@property(readonly, nonatomic) NSString *latestOutAlpha;
@property(readonly, nonatomic) SOJUIdentityVerificationNeeded *verificationNeeded;
@property(readonly, nonatomic) NSNumber *isOtpTwoFaEnabled;
@property(readonly, nonatomic) NSNumber *isSmsTwoFaEnabled;
@property(readonly, nonatomic) NSNumber *recoveryCodeUsed;
@property(readonly, nonatomic) NSString *preAuthToken;
@property(readonly, nonatomic) NSString *phoneNumber;
@property(readonly, nonatomic) NSString *messageFormat;
@property(readonly, nonatomic) NSString *username;
@property(readonly, nonatomic) NSNumber *twoFaNeeded;
@property(readonly, nonatomic) NSString *dtoken1v;
@property(readonly, nonatomic) NSString *dtoken1i;
@property(readonly, nonatomic) NSNumber *status;
@property(readonly, nonatomic) NSString *message;
@property(readonly, nonatomic) NSString *errorField;
@end
