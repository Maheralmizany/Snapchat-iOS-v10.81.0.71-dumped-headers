//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCoding-Protocol.h"
#import "NSCopying-Protocol.h"

@class NSNumber, NSString, SCSnapCommonLoggingParameters;

@interface SCPlatformAnalyticsMemoriesSnapMetricInfo : NSObject <NSCopying, NSCoding>
{
    unsigned long long _source;
    NSString *_galleryMediaId;
    NSNumber *_galleryMediaSync;
    SCSnapCommonLoggingParameters *_commonLoggingParameters;
}

@property(readonly, copy, nonatomic) SCSnapCommonLoggingParameters *commonLoggingParameters; // @synthesize commonLoggingParameters=_commonLoggingParameters;
@property(readonly, copy, nonatomic) NSNumber *galleryMediaSync; // @synthesize galleryMediaSync=_galleryMediaSync;
@property(readonly, copy, nonatomic) NSString *galleryMediaId; // @synthesize galleryMediaId=_galleryMediaId;
@property(readonly, nonatomic) unsigned long long source; // @synthesize source=_source;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithSource:(unsigned long long)arg1 galleryMediaId:(id)arg2 galleryMediaSync:(id)arg3 commonLoggingParameters:(id)arg4;
- (id)initWithCoder:(id)arg1;

@end
