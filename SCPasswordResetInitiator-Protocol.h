//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class NSString, SCPhoneNumber;

@protocol SCPasswordResetInitiator
- (void)initiatePasswordResetForUser:(NSString *)arg1 sendingVerificationCodeTo:(SCPhoneNumber *)arg2 withDeliveryMechanism:(unsigned long long)arg3 completion:(void (^)(_Bool, NSString *, NSString *))arg4;
@end

