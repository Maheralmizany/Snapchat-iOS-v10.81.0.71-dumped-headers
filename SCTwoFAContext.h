//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class SCLoginTwoFAChallenge;

@interface SCTwoFAContext : NSObject <NSCopying>
{
    unsigned long long _subtype;
    SCLoginTwoFAChallenge *_otpTwoFARequired_challenge;
    _Bool _otpTwoFARequired_smsEnabled;
    SCLoginTwoFAChallenge *_smsTwoFARequired_challenge;
}

+ (id)smsTwoFARequiredWithChallenge:(id)arg1;
+ (id)otpTwoFARequiredWithChallenge:(id)arg1 smsEnabled:(_Bool)arg2;
- (void).cxx_destruct;
- (void)matchOtpTwoFARequired:(CDUnknownBlockType)arg1 smsTwoFARequired:(CDUnknownBlockType)arg2;
- (_Bool)isEqual:(id)arg1;
- (id)internalInit;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

