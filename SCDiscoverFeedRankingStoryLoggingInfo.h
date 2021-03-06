//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCoding-Protocol.h"
#import "NSCopying-Protocol.h"

@class NSString, SCDiscoverFeedCompositeStoryId;

@interface SCDiscoverFeedRankingStoryLoggingInfo : NSObject <NSCopying, NSCoding>
{
    _Bool _isSubscribed;
    _Bool _isPromoted;
    _Bool _isExplorationStory;
    SCDiscoverFeedCompositeStoryId *_compositeStoryId;
    unsigned long long _storyDedupeFp;
    unsigned long long _storyKey;
    long long _storyType;
    NSString *_streamId;
    NSString *_variantId;
    long long _itemPosInRecommendationResponse;
    NSString *_actionAttachedInfo;
    NSString *_impressionAttachedInfo;
    NSString *_viewingSessionAttachedInfo;
    long long _ihAllowanceType;
}

@property(readonly, nonatomic) long long ihAllowanceType; // @synthesize ihAllowanceType=_ihAllowanceType;
@property(readonly, nonatomic) _Bool isExplorationStory; // @synthesize isExplorationStory=_isExplorationStory;
@property(readonly, nonatomic) _Bool isPromoted; // @synthesize isPromoted=_isPromoted;
@property(readonly, nonatomic) _Bool isSubscribed; // @synthesize isSubscribed=_isSubscribed;
@property(readonly, copy, nonatomic) NSString *viewingSessionAttachedInfo; // @synthesize viewingSessionAttachedInfo=_viewingSessionAttachedInfo;
@property(readonly, copy, nonatomic) NSString *impressionAttachedInfo; // @synthesize impressionAttachedInfo=_impressionAttachedInfo;
@property(readonly, copy, nonatomic) NSString *actionAttachedInfo; // @synthesize actionAttachedInfo=_actionAttachedInfo;
@property(readonly, nonatomic) long long itemPosInRecommendationResponse; // @synthesize itemPosInRecommendationResponse=_itemPosInRecommendationResponse;
@property(readonly, copy, nonatomic) NSString *variantId; // @synthesize variantId=_variantId;
@property(readonly, copy, nonatomic) NSString *streamId; // @synthesize streamId=_streamId;
@property(readonly, nonatomic) long long storyType; // @synthesize storyType=_storyType;
@property(readonly, nonatomic) unsigned long long storyKey; // @synthesize storyKey=_storyKey;
@property(readonly, nonatomic) unsigned long long storyDedupeFp; // @synthesize storyDedupeFp=_storyDedupeFp;
@property(readonly, copy, nonatomic) SCDiscoverFeedCompositeStoryId *compositeStoryId; // @synthesize compositeStoryId=_compositeStoryId;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithCompositeStoryId:(id)arg1 storyDedupeFp:(unsigned long long)arg2 storyKey:(unsigned long long)arg3 storyType:(long long)arg4 streamId:(id)arg5 variantId:(id)arg6 itemPosInRecommendationResponse:(long long)arg7 actionAttachedInfo:(id)arg8 impressionAttachedInfo:(id)arg9 viewingSessionAttachedInfo:(id)arg10 isSubscribed:(_Bool)arg11 isPromoted:(_Bool)arg12 isExplorationStory:(_Bool)arg13 ihAllowanceType:(long long)arg14;
- (id)initWithCoder:(id)arg1;

@end

