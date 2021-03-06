//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCSojuMessage.h"

#import "SOJULocationResponse-Protocol.h"

@class NSArray, NSNumber, NSString, SOJUAdIdentityResponse, SOJUAdOpportunityRequestIds, SOJUCarouselConfig, SOJUUnlockablesPrecacheInfoForLocData, SOJUWeatherResponse;

@interface SOJULocationResponse : SCSojuMessage <SOJULocationResponse>
{
}

+ (void)registerMessageFields:(id)arg1;
- (id)initWithWeather:(id)arg1 filters:(id)arg2 invalidFilterIds:(id)arg3 bitmojiFilters:(id)arg4 preCacheGeofilters:(id)arg5 clearCacheOurStoryAuths:(id)arg6 ourStoryAuths:(id)arg7 lensFilters:(id)arg8 geoStickerPacks:(id)arg9 preCacheGeolenses:(id)arg10 encGeocell:(id)arg11 carousel:(id)arg12 mobStoryAuths:(id)arg13 venueFilters:(id)arg14 adIdentity:(id)arg15 precacheServingInfo:(id)arg16 stickers:(id)arg17 purposes:(id)arg18 opportunityRequestIds:(id)arg19;

// Remaining properties
@property(readonly, nonatomic) SOJUAdIdentityResponse *adIdentity; // @dynamic adIdentity;
@property(readonly, nonatomic) NSArray *bitmojiFilters; // @dynamic bitmojiFilters;
@property(readonly, nonatomic) SOJUCarouselConfig *carousel; // @dynamic carousel;
@property(readonly, nonatomic) NSNumber *clearCacheOurStoryAuths; // @dynamic clearCacheOurStoryAuths;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) NSString *encGeocell; // @dynamic encGeocell;
@property(readonly, nonatomic) NSArray *filters; // @dynamic filters;
@property(readonly, nonatomic) NSArray *geoStickerPacks; // @dynamic geoStickerPacks;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) NSArray *invalidFilterIds; // @dynamic invalidFilterIds;
@property(readonly, nonatomic) NSArray *lensFilters; // @dynamic lensFilters;
@property(readonly, nonatomic) NSArray *mobStoryAuths; // @dynamic mobStoryAuths;
@property(readonly, nonatomic) SOJUAdOpportunityRequestIds *opportunityRequestIds; // @dynamic opportunityRequestIds;
@property(readonly, nonatomic) NSArray *ourStoryAuths; // @dynamic ourStoryAuths;
@property(readonly, nonatomic) NSArray *preCacheGeofilters; // @dynamic preCacheGeofilters;
@property(readonly, nonatomic) NSArray *preCacheGeolenses; // @dynamic preCacheGeolenses;
@property(readonly, nonatomic) SOJUUnlockablesPrecacheInfoForLocData *precacheServingInfo; // @dynamic precacheServingInfo;
@property(readonly, nonatomic) NSArray *purposes; // @dynamic purposes;
@property(readonly, nonatomic) NSArray *stickers; // @dynamic stickers;
@property(readonly) Class superclass;
@property(readonly, nonatomic) NSArray *venueFilters; // @dynamic venueFilters;
@property(readonly, nonatomic) SOJUWeatherResponse *weather; // @dynamic weather;

@end

