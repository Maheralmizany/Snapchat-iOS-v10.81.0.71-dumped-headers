//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCSojuMessage-Protocol.h"

@class NSNumber, NSString, SOJUAdAdFlagData;

@protocol SOJUAdTileViewImpressionTrack <SCSojuMessage>
@property(readonly, nonatomic) NSNumber *tileMaxViewedPercentage;
@property(readonly, nonatomic) NSNumber *tileIndexPos;
@property(readonly, nonatomic) NSNumber *launchedSelfie;
@property(readonly, nonatomic) NSNumber *tileTapped;
@property(readonly, nonatomic) NSNumber *tileTimeMillis;
@property(readonly, nonatomic) SOJUAdAdFlagData *adFlagData;
@property(readonly, nonatomic) NSString *lensCreativeId;
@property(readonly, nonatomic) NSString *encGeoData;
@property(readonly, nonatomic) NSString *rankingData;
@property(readonly, nonatomic) NSString *rankingId;
@property(readonly, nonatomic) NSString *encryptedSponsoredUnlockableTargetingInfoData;
@property(readonly, nonatomic) NSString *rawAdData;
@property(readonly, nonatomic) NSString *lensId;
@end

