//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class SOJULoginResponse;

@interface SCUserSessionContext : NSObject
{
    unsigned long long _underlyingEnum;
    _Bool _fromResumed_didLaunchWithDataUnavailable;
    SOJULoginResponse *_fromLogIn_logInResponse;
    SOJULoginResponse *_fromRegistration_registrationResponse;
}

+ (id)fromRegistrationWithResponse:(id)arg1;
+ (id)fromLogInWithResponse:(id)arg1;
+ (id)resumedWithDidLaunchWithDataUnavailable:(_Bool)arg1;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (_Bool)isEqualToContext:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (void)matchResumed:(CDUnknownBlockType)arg1 fromLogIn:(CDUnknownBlockType)arg2 fromRegistration:(CDUnknownBlockType)arg3;
- (void)matchFromRegistration:(CDUnknownBlockType)arg1;
@property(readonly, nonatomic) _Bool isFromRegistration;
- (void)matchFromLogIn:(CDUnknownBlockType)arg1;
@property(readonly, nonatomic) _Bool isFromLogIn;
- (void)matchResumed:(CDUnknownBlockType)arg1;
@property(readonly, nonatomic) _Bool isResumed;
- (id)initWithUnderlyingEnum:(unsigned long long)arg1 didLaunchWithDataUnavailable:(_Bool)arg2 logInResponse:(id)arg3 registrationResponse:(id)arg4;

@end
