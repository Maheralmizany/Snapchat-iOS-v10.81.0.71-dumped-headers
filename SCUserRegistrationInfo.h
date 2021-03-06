//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCoding-Protocol.h"
#import "NSCopying-Protocol.h"

@class NSDate, NSString;

@interface SCUserRegistrationInfo : NSObject <NSCopying, NSCoding>
{
    _Bool _isAffectedByGDPR;
    NSString *_registrationCountryCode;
    NSDate *_accountCreationTimestamp;
}

@property(readonly, copy, nonatomic) NSDate *accountCreationTimestamp; // @synthesize accountCreationTimestamp=_accountCreationTimestamp;
@property(readonly, copy, nonatomic) NSString *registrationCountryCode; // @synthesize registrationCountryCode=_registrationCountryCode;
@property(readonly, nonatomic) _Bool isAffectedByGDPR; // @synthesize isAffectedByGDPR=_isAffectedByGDPR;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithIsAffectedByGDPR:(_Bool)arg1 registrationCountryCode:(id)arg2 accountCreationTimestamp:(id)arg3;
- (id)initWithCoder:(id)arg1;

@end

