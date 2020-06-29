//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSDictionary, NSString, SCDiscoverFeedSectionLayoutType;

@interface SCDiscoverFeedStoryBuildingInfo : NSObject <NSCopying>
{
    NSString *_requestId;
    unsigned long long _feedType;
    SCDiscoverFeedSectionLayoutType *_sectionLayoutType;
    NSDictionary *_watchedStatesByEditionId;
}

@property(readonly, copy, nonatomic) NSDictionary *watchedStatesByEditionId; // @synthesize watchedStatesByEditionId=_watchedStatesByEditionId;
@property(readonly, copy, nonatomic) SCDiscoverFeedSectionLayoutType *sectionLayoutType; // @synthesize sectionLayoutType=_sectionLayoutType;
@property(readonly, nonatomic) unsigned long long feedType; // @synthesize feedType=_feedType;
@property(readonly, copy, nonatomic) NSString *requestId; // @synthesize requestId=_requestId;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithRequestId:(id)arg1 feedType:(unsigned long long)arg2 sectionLayoutType:(id)arg3 watchedStatesByEditionId:(id)arg4;

@end

