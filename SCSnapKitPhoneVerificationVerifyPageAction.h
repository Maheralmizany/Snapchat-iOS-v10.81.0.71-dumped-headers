//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@interface SCSnapKitPhoneVerificationVerifyPageAction : NSObject <NSCopying>
{
    unsigned long long _subtype;
}

+ (id)verifySMS;
+ (id)verifyCall;
+ (id)decline;
+ (id)beginVerify;
- (void)matchBeginVerify:(CDUnknownBlockType)arg1 verifySMS:(CDUnknownBlockType)arg2 verifyCall:(CDUnknownBlockType)arg3 decline:(CDUnknownBlockType)arg4;
- (_Bool)isEqual:(id)arg1;
- (id)internalInit;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

