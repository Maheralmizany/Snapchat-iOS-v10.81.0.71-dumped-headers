//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSNumber, NSString, SCDiscoverFeedRankingStoryLoggingInfo;

@interface SCDiscoverFeedStoryLoggingInfoBuilder : NSObject
{
    NSString *_itemId;
    long long _itemType;
    NSString *_itemTypeSpecific;
    long long _storyTypeSpecific;
    long long _itemLayout;
    _Bool _isFullyViewed;
    NSString *_tileId;
    NSArray *_snapInfo;
    long long _totalNumSnaps;
    NSNumber *_itemPos;
    SCDiscoverFeedRankingStoryLoggingInfo *_rankingStoryInfo;
    _Bool _isUpNextRecommendedStory;
    NSString *_triggeringItemId;
}

+ (id)discoverFeedStoryLoggingInfoFromExistingDiscoverFeedStoryLoggingInfo:(id)arg1;
+ (id)discoverFeedStoryLoggingInfo;
- (void).cxx_destruct;
- (id)withTriggeringItemId:(id)arg1;
- (id)withIsUpNextRecommendedStory:(_Bool)arg1;
- (id)withRankingStoryInfo:(id)arg1;
- (id)withItemPos:(id)arg1;
- (id)withTotalNumSnaps:(long long)arg1;
- (id)withSnapInfo:(id)arg1;
- (id)withTileId:(id)arg1;
- (id)withIsFullyViewed:(_Bool)arg1;
- (id)withItemLayout:(long long)arg1;
- (id)withStoryTypeSpecific:(long long)arg1;
- (id)withItemTypeSpecific:(id)arg1;
- (id)withItemType:(long long)arg1;
- (id)withItemId:(id)arg1;
- (id)build;

@end

