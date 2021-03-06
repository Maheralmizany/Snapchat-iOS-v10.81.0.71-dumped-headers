//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSData, NSString, SCPCNImageV2, SCPCNLensRecommendationRequest, SCPCNScanBarAffordanceRequest, SCPCNScanCardRequest, SCPCNScanContext, SCPCNSnapcodeRequest, SCPCNUtilityLensDataRequest, SCPCNUtilityLensMetadataRequest;

@interface SCPCNScanRequest : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(copy, nonatomic) NSData *audio; // @dynamic audio;
@property(nonatomic) _Bool hasImage; // @dynamic hasImage;
@property(nonatomic) _Bool hasLensRecommendationRequest; // @dynamic hasLensRecommendationRequest;
@property(nonatomic) _Bool hasMetadata; // @dynamic hasMetadata;
@property(nonatomic) _Bool hasScanBarAffordanceRequest; // @dynamic hasScanBarAffordanceRequest;
@property(nonatomic) _Bool hasScanCardsResultsRequest; // @dynamic hasScanCardsResultsRequest;
@property(nonatomic) _Bool hasSnapcodeRequest; // @dynamic hasSnapcodeRequest;
@property(nonatomic) _Bool hasUtilityLensMetadataRequest; // @dynamic hasUtilityLensMetadataRequest;
@property(nonatomic) _Bool hasUtilityLensResultsRequest; // @dynamic hasUtilityLensResultsRequest;
@property(copy, nonatomic) NSString *id_p; // @dynamic id_p;
@property(retain, nonatomic) SCPCNImageV2 *image; // @dynamic image;
@property(retain, nonatomic) SCPCNLensRecommendationRequest *lensRecommendationRequest; // @dynamic lensRecommendationRequest;
@property(retain, nonatomic) SCPCNScanContext *metadata; // @dynamic metadata;
@property(retain, nonatomic) SCPCNScanBarAffordanceRequest *scanBarAffordanceRequest; // @dynamic scanBarAffordanceRequest;
@property(retain, nonatomic) SCPCNScanCardRequest *scanCardsResultsRequest; // @dynamic scanCardsResultsRequest;
@property(retain, nonatomic) SCPCNSnapcodeRequest *snapcodeRequest; // @dynamic snapcodeRequest;
@property(copy, nonatomic) NSString *text; // @dynamic text;
@property(retain, nonatomic) SCPCNUtilityLensMetadataRequest *utilityLensMetadataRequest; // @dynamic utilityLensMetadataRequest;
@property(retain, nonatomic) SCPCNUtilityLensDataRequest *utilityLensResultsRequest; // @dynamic utilityLensResultsRequest;

@end

