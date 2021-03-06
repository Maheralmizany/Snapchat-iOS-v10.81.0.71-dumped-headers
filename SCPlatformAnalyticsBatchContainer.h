//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSString, SCPlatformAnalyticsDataModel;

@interface SCPlatformAnalyticsBatchContainer : NSObject <NSCopying>
{
    unsigned long long _subtype;
    SCPlatformAnalyticsDataModel *_singleTask_platformAnalytics;
    NSString *_batchTask_uUID;
    SCPlatformAnalyticsDataModel *_batchTask_platformAnalytics;
}

+ (id)singleTaskWithPlatformAnalytics:(id)arg1;
+ (id)batchTaskWithUUID:(id)arg1 platformAnalytics:(id)arg2;
- (void).cxx_destruct;
- (void)matchSingleTask:(CDUnknownBlockType)arg1 batchTask:(CDUnknownBlockType)arg2;
- (_Bool)isEqual:(id)arg1;
- (id)internalInit;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

