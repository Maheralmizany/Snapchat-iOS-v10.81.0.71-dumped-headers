//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSString, SCOrganicStoryPetraRelatedInfo;

@interface SCAdOrganicSnapLogParameters : NSObject <NSCopying>
{
    NSString *_snapId;
    SCOrganicStoryPetraRelatedInfo *_storyInfo;
}

@property(readonly, copy, nonatomic) SCOrganicStoryPetraRelatedInfo *storyInfo; // @synthesize storyInfo=_storyInfo;
@property(readonly, copy, nonatomic) NSString *snapId; // @synthesize snapId=_snapId;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithSnapId:(id)arg1 storyInfo:(id)arg2;

@end

