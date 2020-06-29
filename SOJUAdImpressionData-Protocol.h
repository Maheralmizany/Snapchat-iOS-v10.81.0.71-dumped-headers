//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCSojuMessage-Protocol.h"

@class NSArray, NSDictionary, NSNumber, NSString, SOJUAdAdFlagData, SOJUAdAdToLensImpressionTrack, SOJUAdAppInstallImpressionTrack, SOJUAdCognacMetadata, SOJUAdCollectionImpressionTrack, SOJUAdDeepLinkImpressionTrack, SOJUAdFilterCarouselImpressionTrack, SOJUAdFilterImpressionTrack, SOJUAdLensCarouselImpressionTrack, SOJUAdLensExplorerImpressionTrack, SOJUAdLensImpressionTrack, SOJUAdLensSlotImpressionTrack, SOJUAdLocalWebpageImpressionTrack, SOJUAdLongformVideoImpressionTrack, SOJUAdRemoteWebpageImpressionTrack, SOJUAdStoryImpressionTrack, SOJUAdSubscribeImpressionTrack, SOJUAdThreeVImpressionTrack, SOJUAdUnlockableViewImpressionTrack;

@protocol SOJUAdImpressionData <SCSojuMessage>
@property(readonly, nonatomic) SOJUAdLensExplorerImpressionTrack *lensExplorer;
@property(readonly, nonatomic) SOJUAdCognacMetadata *cognac;
@property(readonly, nonatomic) SOJUAdCollectionImpressionTrack *collection;
@property(readonly, nonatomic) NSNumber *isUnskippableAd;
@property(readonly, nonatomic) SOJUAdAdToLensImpressionTrack *adToLens;
@property(readonly, nonatomic) NSNumber *creativeWidth;
@property(readonly, nonatomic) NSNumber *creativeHeight;
@property(readonly, nonatomic) NSNumber *screenHeight;
@property(readonly, nonatomic) NSNumber *screenWidth;
@property(readonly, nonatomic) SOJUAdSubscribeImpressionTrack *subscribe;
@property(readonly, nonatomic) SOJUAdLensImpressionTrack *lens;
@property(readonly, nonatomic) SOJUAdUnlockableViewImpressionTrack *unlockableView;
@property(readonly, nonatomic) SOJUAdFilterImpressionTrack *filter;
@property(readonly, nonatomic) SOJUAdAdFlagData *adFlagData;
@property(readonly, nonatomic) SOJUAdDeepLinkImpressionTrack *deepLink;
@property(readonly, nonatomic) SOJUAdFilterCarouselImpressionTrack *filterCarousel;
@property(readonly, nonatomic) SOJUAdLensCarouselImpressionTrack *lensCarousel;
@property(readonly, nonatomic) SOJUAdLensSlotImpressionTrack *lensSlot;
@property(readonly, nonatomic) NSDictionary *viewContext;
@property(readonly, nonatomic) NSArray *thirdPartyUrls;
@property(readonly, nonatomic) SOJUAdStoryImpressionTrack *story;
@property(readonly, nonatomic) SOJUAdLocalWebpageImpressionTrack *localWebpage;
@property(readonly, nonatomic) SOJUAdRemoteWebpageImpressionTrack *remoteWebpage;
@property(readonly, nonatomic) SOJUAdLongformVideoImpressionTrack *longformVideo;
@property(readonly, nonatomic) SOJUAdAppInstallImpressionTrack *appInstall;
@property(readonly, nonatomic) SOJUAdThreeVImpressionTrack *threeV;
@property(readonly, nonatomic) NSString *adType;
@end

