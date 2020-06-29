//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSString, SCActionModel, SCDiscoverFeedDebugViewModel, SCDiscoverFeedStoryLoggingInfo, SCDiscoverFeedWhiteSpaceImageWithTextViewModel, SCDiscoverFeedWhiteSpaceSubscriptionIconViewModel, SCNetworkVideo, UIColor;
@protocol SCStreamingURLProviding;

@interface SCDiscoverFeedHeroTileV1CellViewModel : NSObject <NSCopying>
{
    SCDiscoverFeedWhiteSpaceImageWithTextViewModel *_imageWithTextViewModel;
    SCDiscoverFeedWhiteSpaceSubscriptionIconViewModel *_subscriptionIconViewModel;
    NSString *_streamingManifestURLString;
    SCNetworkVideo *_heroTileTeaserVideo;
    id <SCStreamingURLProviding> _streamingURLProvider;
    UIColor *_backgroundColor;
    unsigned long long _heroTileVideoMaxLoopCount;
    unsigned long long _stallIntervalTimeoutInSeconds;
    SCActionModel *_thumbnailSingleTapActionModel;
    SCActionModel *_longPressActionModel;
    SCActionModel *_scrollOutOfScreenActionModel;
    SCDiscoverFeedStoryLoggingInfo *_storyLoggingInfo;
    NSString *_accessibilityLabel;
    SCDiscoverFeedDebugViewModel *_debugViewModel;
    SCActionModel *_debugActionModel;
    unsigned long long _storyDedupeFp;
    struct CGSize _preferredSize;
}

@property(readonly, nonatomic) unsigned long long storyDedupeFp; // @synthesize storyDedupeFp=_storyDedupeFp;
@property(readonly, copy, nonatomic) SCActionModel *debugActionModel; // @synthesize debugActionModel=_debugActionModel;
@property(readonly, copy, nonatomic) SCDiscoverFeedDebugViewModel *debugViewModel; // @synthesize debugViewModel=_debugViewModel;
@property(readonly, copy, nonatomic) NSString *accessibilityLabel; // @synthesize accessibilityLabel=_accessibilityLabel;
@property(readonly, copy, nonatomic) SCDiscoverFeedStoryLoggingInfo *storyLoggingInfo; // @synthesize storyLoggingInfo=_storyLoggingInfo;
@property(readonly, copy, nonatomic) SCActionModel *scrollOutOfScreenActionModel; // @synthesize scrollOutOfScreenActionModel=_scrollOutOfScreenActionModel;
@property(readonly, copy, nonatomic) SCActionModel *longPressActionModel; // @synthesize longPressActionModel=_longPressActionModel;
@property(readonly, copy, nonatomic) SCActionModel *thumbnailSingleTapActionModel; // @synthesize thumbnailSingleTapActionModel=_thumbnailSingleTapActionModel;
@property(readonly, nonatomic) unsigned long long stallIntervalTimeoutInSeconds; // @synthesize stallIntervalTimeoutInSeconds=_stallIntervalTimeoutInSeconds;
@property(readonly, nonatomic) unsigned long long heroTileVideoMaxLoopCount; // @synthesize heroTileVideoMaxLoopCount=_heroTileVideoMaxLoopCount;
@property(readonly, copy, nonatomic) UIColor *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
@property(readonly, nonatomic) struct CGSize preferredSize; // @synthesize preferredSize=_preferredSize;
@property(readonly, nonatomic) id <SCStreamingURLProviding> streamingURLProvider; // @synthesize streamingURLProvider=_streamingURLProvider;
@property(readonly, copy, nonatomic) SCNetworkVideo *heroTileTeaserVideo; // @synthesize heroTileTeaserVideo=_heroTileTeaserVideo;
@property(readonly, copy, nonatomic) NSString *streamingManifestURLString; // @synthesize streamingManifestURLString=_streamingManifestURLString;
@property(readonly, copy, nonatomic) SCDiscoverFeedWhiteSpaceSubscriptionIconViewModel *subscriptionIconViewModel; // @synthesize subscriptionIconViewModel=_subscriptionIconViewModel;
@property(readonly, copy, nonatomic) SCDiscoverFeedWhiteSpaceImageWithTextViewModel *imageWithTextViewModel; // @synthesize imageWithTextViewModel=_imageWithTextViewModel;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithImageWithTextViewModel:(id)arg1 subscriptionIconViewModel:(id)arg2 streamingManifestURLString:(id)arg3 heroTileTeaserVideo:(id)arg4 streamingURLProvider:(id)arg5 preferredSize:(struct CGSize)arg6 backgroundColor:(id)arg7 heroTileVideoMaxLoopCount:(unsigned long long)arg8 stallIntervalTimeoutInSeconds:(unsigned long long)arg9 thumbnailSingleTapActionModel:(id)arg10 longPressActionModel:(id)arg11 scrollOutOfScreenActionModel:(id)arg12 storyLoggingInfo:(id)arg13 accessibilityLabel:(id)arg14 debugViewModel:(id)arg15 debugActionModel:(id)arg16 storyDedupeFp:(unsigned long long)arg17;

@end
