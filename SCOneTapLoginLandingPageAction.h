//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@interface SCOneTapLoginLandingPageAction : NSObject <NSCopying>
{
    unsigned long long _subtype;
    unsigned long long _alertDismissed_alertType;
}

+ (id)switchAccount;
+ (id)signUp;
+ (id)removeOneTapLogin;
+ (id)reactivationDeclined;
+ (id)reactivate;
+ (id)authenticateWithOneTapLogin;
+ (id)alertDismissedWithAlertType:(unsigned long long)arg1;
- (void)matchAuthenticateWithOneTapLogin:(CDUnknownBlockType)arg1 removeOneTapLogin:(CDUnknownBlockType)arg2 signUp:(CDUnknownBlockType)arg3 switchAccount:(CDUnknownBlockType)arg4 alertDismissed:(CDUnknownBlockType)arg5 reactivationDeclined:(CDUnknownBlockType)arg6 reactivate:(CDUnknownBlockType)arg7;
- (_Bool)isEqual:(id)arg1;
- (id)internalInit;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

