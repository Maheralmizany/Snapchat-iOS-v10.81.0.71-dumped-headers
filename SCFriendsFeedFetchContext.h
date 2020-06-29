//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@interface SCFriendsFeedFetchContext : NSObject <NSCopying>
{
    long long _triggerType;
    long long _serviceType;
    double _requestTimestamp;
    unsigned long long _fetchPath;
}

@property(readonly, nonatomic) unsigned long long fetchPath; // @synthesize fetchPath=_fetchPath;
@property(readonly, nonatomic) double requestTimestamp; // @synthesize requestTimestamp=_requestTimestamp;
@property(readonly, nonatomic) long long serviceType; // @synthesize serviceType=_serviceType;
@property(readonly, nonatomic) long long triggerType; // @synthesize triggerType=_triggerType;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithTriggerType:(long long)arg1 serviceType:(long long)arg2 requestTimestamp:(double)arg3 fetchPath:(unsigned long long)arg4;

@end

