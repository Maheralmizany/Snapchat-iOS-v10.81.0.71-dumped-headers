//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class SCSCKCentralKitchenUserData, SCSNTFUserOptInNotifications, SCSUPABExperiments, SCSUPBasicAttributes, SCSUPContentEngagement, SCSUPDynamicChannelSet, SCSUPFeedsImpressions, SCSUPFriendScores, SCSUPGeographics, SCSUPInterests, SCSUPNotifications, SCSUPReadReceipt, SCSUPRecommendedPosters, SCSUPRecommendedUsers, SCSUPRegisteredInterests, SCSUPSalientTerms, Subscriptions, UserEngagementFeatures, UserMetadataFeatures;

@interface SCSUPUserProfileResponse : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) SCSUPABExperiments *abExperiments; // @dynamic abExperiments;
@property(retain, nonatomic) SCSUPBasicAttributes *basicAttributes; // @dynamic basicAttributes;
@property(retain, nonatomic) SCSCKCentralKitchenUserData *centralKitchenUserData; // @dynamic centralKitchenUserData;
@property(retain, nonatomic) SCSUPContentEngagement *contentEngagement; // @dynamic contentEngagement;
@property(retain, nonatomic) SCSUPDynamicChannelSet *dynamicChannelSet; // @dynamic dynamicChannelSet;
@property(retain, nonatomic) SCSUPFeedsImpressions *feedsImpressions; // @dynamic feedsImpressions;
@property(retain, nonatomic) UserEngagementFeatures *friendEngagement; // @dynamic friendEngagement;
@property(retain, nonatomic) UserMetadataFeatures *friendMetadata; // @dynamic friendMetadata;
@property(retain, nonatomic) SCSUPFriendScores *friendScores; // @dynamic friendScores;
@property(retain, nonatomic) SCSUPGeographics *geographics; // @dynamic geographics;
@property(nonatomic) _Bool hasAbExperiments; // @dynamic hasAbExperiments;
@property(nonatomic) _Bool hasBasicAttributes; // @dynamic hasBasicAttributes;
@property(nonatomic) _Bool hasCentralKitchenUserData; // @dynamic hasCentralKitchenUserData;
@property(nonatomic) _Bool hasContentEngagement; // @dynamic hasContentEngagement;
@property(nonatomic) _Bool hasDynamicChannelSet; // @dynamic hasDynamicChannelSet;
@property(nonatomic) _Bool hasFeedsImpressions; // @dynamic hasFeedsImpressions;
@property(nonatomic) _Bool hasFriendEngagement; // @dynamic hasFriendEngagement;
@property(nonatomic) _Bool hasFriendMetadata; // @dynamic hasFriendMetadata;
@property(nonatomic) _Bool hasFriendScores; // @dynamic hasFriendScores;
@property(nonatomic) _Bool hasGeographics; // @dynamic hasGeographics;
@property(nonatomic) _Bool hasInterests; // @dynamic hasInterests;
@property(nonatomic) _Bool hasNegativeInterests; // @dynamic hasNegativeInterests;
@property(nonatomic) _Bool hasNotifications; // @dynamic hasNotifications;
@property(nonatomic) _Bool hasReadReceipt; // @dynamic hasReadReceipt;
@property(nonatomic) _Bool hasRecommendedPosters; // @dynamic hasRecommendedPosters;
@property(nonatomic) _Bool hasRecommendedUsers; // @dynamic hasRecommendedUsers;
@property(nonatomic) _Bool hasRegisteredInterests; // @dynamic hasRegisteredInterests;
@property(nonatomic) _Bool hasSalientTerms; // @dynamic hasSalientTerms;
@property(nonatomic) _Bool hasSubscriptions; // @dynamic hasSubscriptions;
@property(nonatomic) _Bool hasUserOptInNotifications; // @dynamic hasUserOptInNotifications;
@property(retain, nonatomic) SCSUPInterests *interests; // @dynamic interests;
@property(retain, nonatomic) SCSUPInterests *negativeInterests; // @dynamic negativeInterests;
@property(retain, nonatomic) SCSUPNotifications *notifications; // @dynamic notifications;
@property(retain, nonatomic) SCSUPReadReceipt *readReceipt; // @dynamic readReceipt;
@property(retain, nonatomic) SCSUPRecommendedPosters *recommendedPosters; // @dynamic recommendedPosters;
@property(retain, nonatomic) SCSUPRecommendedUsers *recommendedUsers; // @dynamic recommendedUsers;
@property(retain, nonatomic) SCSUPRegisteredInterests *registeredInterests; // @dynamic registeredInterests;
@property(retain, nonatomic) SCSUPSalientTerms *salientTerms; // @dynamic salientTerms;
@property(retain, nonatomic) Subscriptions *subscriptions; // @dynamic subscriptions;
@property(retain, nonatomic) SCSNTFUserOptInNotifications *userOptInNotifications; // @dynamic userOptInNotifications;

@end

