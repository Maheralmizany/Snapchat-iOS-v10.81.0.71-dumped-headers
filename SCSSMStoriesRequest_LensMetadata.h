//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class GPBInt64Array, NSString, SCSSMStoriesRequest_LensMetadata_SponsoredLensData;

@interface SCSSMStoriesRequest_LensMetadata : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(copy, nonatomic) NSString *category; // @dynamic category;
@property(copy, nonatomic) NSString *creatorUuid; // @dynamic creatorUuid;
@property(nonatomic) _Bool hasSponsoredLens; // @dynamic hasSponsoredLens;
@property(nonatomic) int lensCategory; // @dynamic lensCategory;
@property(nonatomic) unsigned long long lensChallengeId; // @dynamic lensChallengeId;
@property(retain, nonatomic) GPBInt64Array *lensesInCarouselArray; // @dynamic lensesInCarouselArray;
@property(readonly, nonatomic) unsigned long long lensesInCarouselArray_Count; // @dynamic lensesInCarouselArray_Count;
@property(retain, nonatomic) SCSSMStoriesRequest_LensMetadata_SponsoredLensData *sponsoredLens; // @dynamic sponsoredLens;
@property(nonatomic) int sponsoredLensPosition; // @dynamic sponsoredLensPosition;

@end

