//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCoding-Protocol.h"
#import "NSCopying-Protocol.h"

@class NSData, NSDictionary, NSString;

@interface SCSnapDocAppInstallAppInfo : NSObject <NSCopying, NSCoding>
{
    NSString *_appId;
    NSDictionary *_storeParams;
    NSString *_appIcon;
    NSData *_contentObject;
}

@property(readonly, copy, nonatomic) NSData *contentObject; // @synthesize contentObject=_contentObject;
@property(readonly, copy, nonatomic) NSString *appIcon; // @synthesize appIcon=_appIcon;
@property(readonly, copy, nonatomic) NSDictionary *storeParams; // @synthesize storeParams=_storeParams;
@property(readonly, copy, nonatomic) NSString *appId; // @synthesize appId=_appId;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithAppId:(id)arg1 storeParams:(id)arg2 appIcon:(id)arg3 contentObject:(id)arg4;

@end

