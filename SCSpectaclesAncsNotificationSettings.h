//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCoding-Protocol.h"
#import "NSCopying-Protocol.h"

@class NSArray;

@interface SCSpectaclesAncsNotificationSettings : NSObject <NSCopying, NSCoding>
{
    unsigned long long _ruleType;
    NSArray *_rules;
}

@property(readonly, copy, nonatomic) NSArray *rules; // @synthesize rules=_rules;
@property(readonly, nonatomic) unsigned long long ruleType; // @synthesize ruleType=_ruleType;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithRuleType:(unsigned long long)arg1 rules:(id)arg2;
- (id)initWithCoder:(id)arg1;

@end
