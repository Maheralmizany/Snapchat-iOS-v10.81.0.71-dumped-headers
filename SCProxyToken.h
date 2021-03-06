//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCoding-Protocol.h"

@class NSDate, NSString;

@interface SCProxyToken : NSObject <NSCoding>
{
    NSString *_token;
    NSDate *_expiry;
}

@property(retain, nonatomic) NSDate *expiry; // @synthesize expiry=_expiry;
@property(retain, nonatomic) NSString *token; // @synthesize token=_token;
- (void).cxx_destruct;
- (_Bool)isValid;
- (id)initWithToken:(id)arg1 expiry:(id)arg2;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

