//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCoding-Protocol.h"
#import "NSCopying-Protocol.h"

@class NSString, SCBloopsChatMediaContentProviderAnalytics;

@interface SCPlatformAnalyticsBloopsGeneratedResultInfo : NSObject <NSCopying, NSCoding>
{
    _Bool _bloopsHasCustomText;
    long long _genderType;
    NSString *_bloopsConfigUrl;
    NSString *_bloopsCoreApiVersion;
    long long _generateResultType;
    long long _bloopsGridIndex;
    NSString *_bloopsId;
    NSString *_bloopsSearchConfigurationName;
    SCBloopsChatMediaContentProviderAnalytics *_bloopsChatMediaContentProviderAnalytics;
}

@property(readonly, copy, nonatomic) SCBloopsChatMediaContentProviderAnalytics *bloopsChatMediaContentProviderAnalytics; // @synthesize bloopsChatMediaContentProviderAnalytics=_bloopsChatMediaContentProviderAnalytics;
@property(readonly, copy, nonatomic) NSString *bloopsSearchConfigurationName; // @synthesize bloopsSearchConfigurationName=_bloopsSearchConfigurationName;
@property(readonly, copy, nonatomic) NSString *bloopsId; // @synthesize bloopsId=_bloopsId;
@property(readonly, nonatomic) _Bool bloopsHasCustomText; // @synthesize bloopsHasCustomText=_bloopsHasCustomText;
@property(readonly, nonatomic) long long bloopsGridIndex; // @synthesize bloopsGridIndex=_bloopsGridIndex;
@property(readonly, nonatomic) long long generateResultType; // @synthesize generateResultType=_generateResultType;
@property(readonly, copy, nonatomic) NSString *bloopsCoreApiVersion; // @synthesize bloopsCoreApiVersion=_bloopsCoreApiVersion;
@property(readonly, copy, nonatomic) NSString *bloopsConfigUrl; // @synthesize bloopsConfigUrl=_bloopsConfigUrl;
@property(readonly, nonatomic) long long genderType; // @synthesize genderType=_genderType;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithGenderType:(long long)arg1 bloopsConfigUrl:(id)arg2 bloopsCoreApiVersion:(id)arg3 generateResultType:(long long)arg4 bloopsGridIndex:(long long)arg5 bloopsHasCustomText:(_Bool)arg6 bloopsId:(id)arg7 bloopsSearchConfigurationName:(id)arg8 bloopsChatMediaContentProviderAnalytics:(id)arg9;
- (id)initWithCoder:(id)arg1;

@end
