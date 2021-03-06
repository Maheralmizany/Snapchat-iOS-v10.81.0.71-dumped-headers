//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSString;

@interface SCLogInCredentialsEntryAction : NSObject <NSCopying>
{
    unsigned long long _subtype;
    NSString *_updatedUsernameOrEmail_usernameOrEmail;
    NSString *_updatedMobileNumber_mobileNumber;
    NSString *_updatedPassword_password;
}

+ (id)updatedUsernameOrEmailWithUsernameOrEmail:(id)arg1;
+ (id)updatedPasswordWithPassword:(id)arg1;
+ (id)updatedMobileNumberWithMobileNumber:(id)arg1;
+ (id)togglePhoneNumberFieldVisibility;
+ (id)togglePasswordVisiblity;
+ (id)recoverPassword;
+ (id)reactivationDeclined;
+ (id)reactivate;
+ (id)logIn;
+ (id)exited;
- (void).cxx_destruct;
- (void)matchExited:(CDUnknownBlockType)arg1 updatedUsernameOrEmail:(CDUnknownBlockType)arg2 updatedMobileNumber:(CDUnknownBlockType)arg3 updatedPassword:(CDUnknownBlockType)arg4 recoverPassword:(CDUnknownBlockType)arg5 togglePasswordVisiblity:(CDUnknownBlockType)arg6 togglePhoneNumberFieldVisibility:(CDUnknownBlockType)arg7 logIn:(CDUnknownBlockType)arg8 reactivationDeclined:(CDUnknownBlockType)arg9 reactivate:(CDUnknownBlockType)arg10;
- (_Bool)isEqual:(id)arg1;
- (id)internalInit;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

