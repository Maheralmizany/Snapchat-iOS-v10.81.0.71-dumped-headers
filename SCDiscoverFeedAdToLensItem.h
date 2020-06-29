//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCoding-Protocol.h"
#import "NSCopying-Protocol.h"

@class NSString;

@interface SCDiscoverFeedAdToLensItem : NSObject <NSCopying, NSCoding>
{
    NSString *_scancodeId;
    NSString *_scancodeVersion;
}

@property(readonly, copy, nonatomic) NSString *scancodeVersion; // @synthesize scancodeVersion=_scancodeVersion;
@property(readonly, copy, nonatomic) NSString *scancodeId; // @synthesize scancodeId=_scancodeId;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithScancodeId:(id)arg1 scancodeVersion:(id)arg2;
- (id)initWithCoder:(id)arg1;

@end

