//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSDate, NSString;

@interface SCCognacAppInstanceDataModel : NSObject <NSCopying>
{
    _Bool _terminated;
    NSString *_instanceId;
    NSString *_appId;
    NSString *_scopeId;
    unsigned long long _scope;
    unsigned long long _privacy;
    NSDate *_expirationTimestamp;
    double _expirationDuration;
    long long _version;
}

@property(readonly, nonatomic) long long version; // @synthesize version=_version;
@property(readonly, nonatomic) _Bool terminated; // @synthesize terminated=_terminated;
@property(readonly, nonatomic) double expirationDuration; // @synthesize expirationDuration=_expirationDuration;
@property(readonly, copy, nonatomic) NSDate *expirationTimestamp; // @synthesize expirationTimestamp=_expirationTimestamp;
@property(readonly, nonatomic) unsigned long long privacy; // @synthesize privacy=_privacy;
@property(readonly, nonatomic) unsigned long long scope; // @synthesize scope=_scope;
@property(readonly, copy, nonatomic) NSString *scopeId; // @synthesize scopeId=_scopeId;
@property(readonly, copy, nonatomic) NSString *appId; // @synthesize appId=_appId;
@property(readonly, copy, nonatomic) NSString *instanceId; // @synthesize instanceId=_instanceId;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithInstanceId:(id)arg1 appId:(id)arg2 scopeId:(id)arg3 scope:(unsigned long long)arg4 privacy:(unsigned long long)arg5 expirationTimestamp:(id)arg6 expirationDuration:(double)arg7 terminated:(_Bool)arg8 version:(long long)arg9;

@end

