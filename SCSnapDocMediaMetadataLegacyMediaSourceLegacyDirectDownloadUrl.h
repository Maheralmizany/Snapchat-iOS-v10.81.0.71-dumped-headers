//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCoding-Protocol.h"
#import "NSCopying-Protocol.h"

@class NSNumber, NSString;

@interface SCSnapDocMediaMetadataLegacyMediaSourceLegacyDirectDownloadUrl : NSObject <NSCopying, NSCoding>
{
    NSString *_URL;
    NSNumber *_expirySeconds;
    long long _type;
    NSString *_region;
}

@property(readonly, copy, nonatomic) NSString *region; // @synthesize region=_region;
@property(readonly, nonatomic) long long type; // @synthesize type=_type;
@property(readonly, copy, nonatomic) NSNumber *expirySeconds; // @synthesize expirySeconds=_expirySeconds;
@property(readonly, copy, nonatomic) NSString *URL; // @synthesize URL=_URL;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithURL:(id)arg1 expirySeconds:(id)arg2 type:(long long)arg3 region:(id)arg4;
- (id)initWithCoder:(id)arg1;

@end
