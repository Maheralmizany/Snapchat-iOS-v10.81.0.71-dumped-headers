//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class NSString;

@protocol SCIdentityUserAdaptor
@property(readonly, nonatomic) NSString *phoneNumber;
@property(readonly, nonatomic) NSString *email;
@property(retain, nonatomic) NSString *pendingEmail;
@property(nonatomic) _Bool needsCaptchaVerification;
- (_Bool)hasVerifiedEmail;
- (_Bool)needsContactSync;
@end

