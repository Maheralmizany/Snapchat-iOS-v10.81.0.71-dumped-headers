//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, SCDiscoverFeedInteractionEventBooleanType, SCDiscoverFeedInteractionEventFloatType, SCDiscoverFeedInteractionEventIntegerType;

@interface SCDiscoverFeedStoryInteractionHistoryBuilder : NSObject
{
    unsigned long long _storyDedupeFp;
    SCDiscoverFeedInteractionEventBooleanType *_isSubscribed;
    SCDiscoverFeedInteractionEventBooleanType *_isHidden;
    SCDiscoverFeedInteractionEventFloatType *_shortImpressionScore;
    SCDiscoverFeedInteractionEventFloatType *_longImpressionScore;
    SCDiscoverFeedInteractionEventFloatType *_qualifiedLongImpressionScore;
    SCDiscoverFeedInteractionEventFloatType *_shortViewScore;
    SCDiscoverFeedInteractionEventFloatType *_longViewScore;
    NSString *_longImpressionThumbnailId;
    NSString *_longViewThumbnailId;
    unsigned long long _latestVersion;
    unsigned long long _latestWatchedVersion;
    unsigned long long _tapStoryKey;
    SCDiscoverFeedInteractionEventIntegerType *_numberOfWatches;
    SCDiscoverFeedInteractionEventIntegerType *_snapCompletionPercent;
    unsigned int _storyDurationSec;
    unsigned int _entranceIntent;
    unsigned int _exitIntent;
    unsigned int _longImpressionCount;
    unsigned int _qualifiedLongImpressionCount;
    unsigned int _numSnapsViewedFromLatestVersion;
    unsigned int _totalWatchTimeOnLatestVersion;
    unsigned int _totalImpressionTimeOnLatestVersion;
    unsigned int _totalQualifiedImpressionTimeOnLatestVersion;
    unsigned int _numSnapsInLatestVersion;
    SCDiscoverFeedInteractionEventFloatType *_decayedNumSnapsViewed;
    SCDiscoverFeedInteractionEventFloatType *_decayedTotalWatchTime;
    SCDiscoverFeedInteractionEventFloatType *_decayedTotalImpressionTime;
    SCDiscoverFeedInteractionEventFloatType *_decayedTotalQualifiedImpressionTime;
    long long _storyType;
    long long _allowanceType;
}

+ (id)discoverFeedStoryInteractionHistoryFromExistingDiscoverFeedStoryInteractionHistory:(id)arg1;
+ (id)discoverFeedStoryInteractionHistory;
- (void).cxx_destruct;
- (id)withAllowanceType:(long long)arg1;
- (id)withStoryType:(long long)arg1;
- (id)withDecayedTotalQualifiedImpressionTime:(id)arg1;
- (id)withDecayedTotalImpressionTime:(id)arg1;
- (id)withDecayedTotalWatchTime:(id)arg1;
- (id)withDecayedNumSnapsViewed:(id)arg1;
- (id)withNumSnapsInLatestVersion:(unsigned int)arg1;
- (id)withTotalQualifiedImpressionTimeOnLatestVersion:(unsigned int)arg1;
- (id)withTotalImpressionTimeOnLatestVersion:(unsigned int)arg1;
- (id)withTotalWatchTimeOnLatestVersion:(unsigned int)arg1;
- (id)withNumSnapsViewedFromLatestVersion:(unsigned int)arg1;
- (id)withQualifiedLongImpressionCount:(unsigned int)arg1;
- (id)withLongImpressionCount:(unsigned int)arg1;
- (id)withExitIntent:(unsigned int)arg1;
- (id)withEntranceIntent:(unsigned int)arg1;
- (id)withStoryDurationSec:(unsigned int)arg1;
- (id)withSnapCompletionPercent:(id)arg1;
- (id)withNumberOfWatches:(id)arg1;
- (id)withTapStoryKey:(unsigned long long)arg1;
- (id)withLatestWatchedVersion:(unsigned long long)arg1;
- (id)withLatestVersion:(unsigned long long)arg1;
- (id)withLongViewThumbnailId:(id)arg1;
- (id)withLongImpressionThumbnailId:(id)arg1;
- (id)withLongViewScore:(id)arg1;
- (id)withShortViewScore:(id)arg1;
- (id)withQualifiedLongImpressionScore:(id)arg1;
- (id)withLongImpressionScore:(id)arg1;
- (id)withShortImpressionScore:(id)arg1;
- (id)withIsHidden:(id)arg1;
- (id)withIsSubscribed:(id)arg1;
- (id)withStoryDedupeFp:(unsigned long long)arg1;
- (id)build;

@end

