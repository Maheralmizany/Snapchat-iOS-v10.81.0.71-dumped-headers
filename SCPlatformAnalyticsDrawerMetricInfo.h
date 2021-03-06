//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCoding-Protocol.h"
#import "NSCopying-Protocol.h"

@class SCPlatformAnalyticsDrawerTabMetricInfo;

@interface SCPlatformAnalyticsDrawerMetricInfo : NSObject <NSCopying, NSCoding>
{
    long long _viewMode;
    long long _position;
    SCPlatformAnalyticsDrawerTabMetricInfo *_tabInfo;
}

@property(readonly, copy, nonatomic) SCPlatformAnalyticsDrawerTabMetricInfo *tabInfo; // @synthesize tabInfo=_tabInfo;
@property(readonly, nonatomic) long long position; // @synthesize position=_position;
@property(readonly, nonatomic) long long viewMode; // @synthesize viewMode=_viewMode;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithViewMode:(long long)arg1 position:(long long)arg2 tabInfo:(id)arg3;
- (id)initWithCoder:(id)arg1;

@end

