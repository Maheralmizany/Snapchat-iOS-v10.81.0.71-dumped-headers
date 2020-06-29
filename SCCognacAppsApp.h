//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class GPBTimestamp, NSString, SCCognacAppsContentUpdateAlert, SCCognacAppsDeviceCompatibility, SCCognacAppsImageResources, SCCognacAppsLeaderboardInfo, SCCognacAppsPlayerLimits, SCCognacAppsPublisher, SCCognacAppsRankingSignal, SCCognacAppsSnapCanvasSDKInfo;

@interface SCCognacAppsApp : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(copy, nonatomic) NSString *buildId; // @dynamic buildId;
@property(copy, nonatomic) NSString *buildVersion; // @dynamic buildVersion;
@property(copy, nonatomic) NSString *contentURL; // @dynamic contentURL;
@property(retain, nonatomic) SCCognacAppsContentUpdateAlert *contentUpdateAlert; // @dynamic contentUpdateAlert;
@property(retain, nonatomic) GPBTimestamp *creationTimestamp; // @dynamic creationTimestamp;
@property(copy, nonatomic) NSString *description_p; // @dynamic description_p;
@property(retain, nonatomic) SCCognacAppsDeviceCompatibility *deviceCompatibility; // @dynamic deviceCompatibility;
@property(nonatomic) _Bool hasContentUpdateAlert; // @dynamic hasContentUpdateAlert;
@property(nonatomic) _Bool hasCreationTimestamp; // @dynamic hasCreationTimestamp;
@property(nonatomic) _Bool hasDeviceCompatibility; // @dynamic hasDeviceCompatibility;
@property(nonatomic) _Bool hasImageResources; // @dynamic hasImageResources;
@property(nonatomic) _Bool hasLastUpdateTimestamp; // @dynamic hasLastUpdateTimestamp;
@property(nonatomic) _Bool hasLeaderboardInfo; // @dynamic hasLeaderboardInfo;
@property(nonatomic) _Bool hasPlayerLimits; // @dynamic hasPlayerLimits;
@property(nonatomic) _Bool hasPublisher; // @dynamic hasPublisher;
@property(nonatomic) _Bool hasRankingSignal; // @dynamic hasRankingSignal;
@property(nonatomic) _Bool hasSnapCanvasSdkInfo; // @dynamic hasSnapCanvasSdkInfo;
@property(copy, nonatomic) NSString *id_p; // @dynamic id_p;
@property(retain, nonatomic) SCCognacAppsImageResources *imageResources; // @dynamic imageResources;
@property(retain, nonatomic) GPBTimestamp *lastUpdateTimestamp; // @dynamic lastUpdateTimestamp;
@property(retain, nonatomic) SCCognacAppsLeaderboardInfo *leaderboardInfo; // @dynamic leaderboardInfo;
@property(retain, nonatomic) SCCognacAppsPlayerLimits *playerLimits; // @dynamic playerLimits;
@property(copy, nonatomic) NSString *preloadConfig; // @dynamic preloadConfig;
@property(copy, nonatomic) NSString *privacyPolicyURL; // @dynamic privacyPolicyURL;
@property(retain, nonatomic) SCCognacAppsPublisher *publisher; // @dynamic publisher;
@property(retain, nonatomic) SCCognacAppsRankingSignal *rankingSignal; // @dynamic rankingSignal;
@property(retain, nonatomic) SCCognacAppsSnapCanvasSDKInfo *snapCanvasSdkInfo; // @dynamic snapCanvasSdkInfo;
@property(copy, nonatomic) NSString *termsOfServiceURL; // @dynamic termsOfServiceURL;
@property(copy, nonatomic) NSString *title; // @dynamic title;
@property(nonatomic) int type; // @dynamic type;

@end
