//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCoding-Protocol.h"
#import "NSCopying-Protocol.h"

@class NSString;

@interface SCSnapDocNotificationSettings : NSObject <NSCopying, NSCoding>
{
    NSString *_namespace_p;
    NSString *_identifier;
}

@property(readonly, copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(readonly, copy, nonatomic) NSString *namespace_p; // @synthesize namespace_p=_namespace_p;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithNamespace_p:(id)arg1 identifier:(id)arg2;
- (id)initWithCoder:(id)arg1;

@end

