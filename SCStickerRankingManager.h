//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSDictionary, SCContextMetaFeatureManager, SCStickerCaptionRecommendationRanker, SCStickerMetadataRecommendationRanker, SCStickerRecentRecommendationRanker, SCUserSession;
@protocol SCPerforming;

@interface SCStickerRankingManager : NSObject
{
    SCContextMetaFeatureManager *_contextFeatureManager;
    SCStickerMetadataRecommendationRanker *_metaRanker;
    SCStickerCaptionRecommendationRanker *_captionRanker;
    SCStickerRecentRecommendationRanker *_recentRanker;
    NSArray *_metaRecommendedStickers;
    NSArray *_captionRecommendedStickers;
    NSDictionary *_metaTags;
    NSDictionary *_captionTags;
    NSDictionary *_recentStickerTags;
    id <SCPerforming> _performer;
    SCUserSession *_userSession;
}

- (void).cxx_destruct;
- (id)debugDescription;
- (id)_dedupArray:(id)arg1 filterArray:(id)arg2;
- (void)clearStickerRecommendation;
- (id)_selectStickersFrom:(id)arg1 length:(long long)arg2;
- (id)_mergeResultsByRatio:(id)arg1 maxNumResult:(long long)arg2;
- (void)_aggregateSuggestKeyword:(id)arg1 toOrderedSet:(id)arg2;
- (id)recommendationTagListWithPopularTags:(id)arg1;
- (id)recommendedStickers;
- (void)addRecentlyUsedStickerRecommendations:(id)arg1;
- (void)addMetaStickerRecommendations;
- (id)initWithStickerSearch:(id)arg1 userSession:(id)arg2;

@end

