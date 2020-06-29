//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class RawEngagementFeatures;

@interface StoryFeatures_AffinityFeatures : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) float cohortEngagement; // @dynamic cohortEngagement;
@property(retain, nonatomic) RawEngagementFeatures *cohortEngagementFeatures; // @dynamic cohortEngagementFeatures;
@property(nonatomic) float corpusEngagement; // @dynamic corpusEngagement;
@property(retain, nonatomic) RawEngagementFeatures *corpusEngagementFeatures; // @dynamic corpusEngagementFeatures;
@property(nonatomic) float cotapScore; // @dynamic cotapScore;
@property(nonatomic) float deepInteractionScore; // @dynamic deepInteractionScore;
@property(nonatomic) float globalEngagement; // @dynamic globalEngagement;
@property(retain, nonatomic) RawEngagementFeatures *globalEngagementFeatures; // @dynamic globalEngagementFeatures;
@property(nonatomic) _Bool hasCohortEngagementFeatures; // @dynamic hasCohortEngagementFeatures;
@property(nonatomic) _Bool hasCorpusEngagementFeatures; // @dynamic hasCorpusEngagementFeatures;
@property(nonatomic) _Bool hasGlobalEngagementFeatures; // @dynamic hasGlobalEngagementFeatures;
@property(nonatomic) _Bool hasPersonalEngagementFeatures; // @dynamic hasPersonalEngagementFeatures;
@property(nonatomic) float interestBoost; // @dynamic interestBoost;
@property(nonatomic) float interestDemotion; // @dynamic interestDemotion;
@property(nonatomic) float languageMatchScore; // @dynamic languageMatchScore;
@property(nonatomic) float latentBoost; // @dynamic latentBoost;
@property(nonatomic) float personalEngagement; // @dynamic personalEngagement;
@property(retain, nonatomic) RawEngagementFeatures *personalEngagementFeatures; // @dynamic personalEngagementFeatures;
@property(nonatomic) float proximityScore; // @dynamic proximityScore;
@property(nonatomic) float salientTermBoost; // @dynamic salientTermBoost;
@property(nonatomic) float subscribedInfluencerBoost; // @dynamic subscribedInfluencerBoost;

@end
