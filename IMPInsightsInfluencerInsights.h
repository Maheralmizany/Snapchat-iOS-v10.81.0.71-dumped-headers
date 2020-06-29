//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class IMPInsightsAudienceInsights, IMPInsightsInfluencerBasicProfile, IMPInsightsLensCreatorInsights, IMPInsightsLensInsights, IMPInsightsStoryInsights, IMPInsightsStoryViewInsights, IMPInsightsSubscribeInsights, NSMutableArray, NSString;

@interface IMPInsightsInfluencerInsights : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) long long aggregationTimestampMsecs; // @dynamic aggregationTimestampMsecs;
@property(retain, nonatomic) IMPInsightsInfluencerBasicProfile *basicProfile; // @dynamic basicProfile;
@property(retain, nonatomic) NSMutableArray *dailyLensMetricsArray; // @dynamic dailyLensMetricsArray;
@property(readonly, nonatomic) unsigned long long dailyLensMetricsArray_Count; // @dynamic dailyLensMetricsArray_Count;
@property(retain, nonatomic) NSMutableArray *dailyStoryViewsArray; // @dynamic dailyStoryViewsArray;
@property(readonly, nonatomic) unsigned long long dailyStoryViewsArray_Count; // @dynamic dailyStoryViewsArray_Count;
@property(nonatomic) _Bool hasBasicProfile; // @dynamic hasBasicProfile;
@property(nonatomic) _Bool hasLensCreatorInsights; // @dynamic hasLensCreatorInsights;
@property(nonatomic) _Bool hasLensInsights; // @dynamic hasLensInsights;
@property(nonatomic) _Bool hasStoryInsights; // @dynamic hasStoryInsights;
@property(nonatomic) _Bool hasStoryViewInsights; // @dynamic hasStoryViewInsights;
@property(nonatomic) _Bool hasSubscribeInsights; // @dynamic hasSubscribeInsights;
@property(nonatomic) _Bool hasSubscriberAudienceInsights; // @dynamic hasSubscriberAudienceInsights;
@property(retain, nonatomic) IMPInsightsLensCreatorInsights *lensCreatorInsights; // @dynamic lensCreatorInsights;
@property(retain, nonatomic) IMPInsightsLensInsights *lensInsights; // @dynamic lensInsights;
@property(retain, nonatomic) NSMutableArray *snapInsightsArray; // @dynamic snapInsightsArray;
@property(readonly, nonatomic) unsigned long long snapInsightsArray_Count; // @dynamic snapInsightsArray_Count;
@property(retain, nonatomic) IMPInsightsStoryInsights *storyInsights; // @dynamic storyInsights;
@property(retain, nonatomic) IMPInsightsStoryViewInsights *storyViewInsights; // @dynamic storyViewInsights;
@property(retain, nonatomic) IMPInsightsSubscribeInsights *subscribeInsights; // @dynamic subscribeInsights;
@property(retain, nonatomic) IMPInsightsAudienceInsights *subscriberAudienceInsights; // @dynamic subscriberAudienceInsights;
@property(copy, nonatomic) NSString *userId; // @dynamic userId;

@end

