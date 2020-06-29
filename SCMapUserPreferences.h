//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSDate, NSDictionary, NSNumber, NSSet, NSString, SCPreferences;

@interface SCMapUserPreferences : NSObject
{
    SCPreferences *_preferences;
    NSNumber *_inlineReplyScreenshotAttachmentSwitchLastValue;
}

@property(retain, nonatomic) NSNumber *inlineReplyScreenshotAttachmentSwitchLastValue; // @synthesize inlineReplyScreenshotAttachmentSwitchLastValue=_inlineReplyScreenshotAttachmentSwitchLastValue;
- (void).cxx_destruct;
@property(copy, nonatomic) NSArray *friendFinderUserIds;
@property(copy, nonatomic) NSDate *lastFriendFinderLoadDate;
- (void)resetConsecutiveIgnoredLocationRequestCountForUserId:(id)arg1;
- (void)incrementConsecutiveIgnoredLocationRequestCountForUserId:(id)arg1;
- (long long)consecutiveIgnoredLocationRequestCountForUserId:(id)arg1;
- (void)tweaks_clearSeenWarningsAndTooltips;
- (void)markSeenGameTooltipOnCamera;
- (_Bool)hasSeenGameTooltipOnCamera;
- (void)markSeenLeaderboardTooltip;
- (_Bool)hasSeenLeaderboardTooltip;
- (void)markSeenWarningForGame:(id)arg1;
- (_Bool)hasSeenWarningForGame:(id)arg1;
- (void)resetLastStatusButtonTooltipState;
@property(nonatomic) long long numberOfOnboardingAppearancesForStatusButtonTooltip;
@property(copy, nonatomic) NSString *lastStatusButtonTooltipTitle;
@property(retain, nonatomic) NSDate *lastStatusButtonTooltipDisplayDate;
@property(nonatomic) double newestExploreTimestampInLastTrayOpen;
- (void)resetExploreSettingsTooltipDisplayDate;
@property(retain, nonatomic) NSDate *lastManageMyExploreUpdatesTooltipDisplayDate;
- (void)clearViewedExploreTimestamps;
- (void)markViewedExploreTimestamp:(double)arg1 uniqueId:(id)arg2;
- (_Bool)isViewedExploreTimestamp:(double)arg1 uniqueId:(id)arg2;
@property(readonly, nonatomic) NSDictionary *viewedExploreTimestampSecsByUniqueId;
@property(nonatomic) double durationOfGhostMode;
@property(nonatomic) double timeIntervalSinceBootWhenGhostModeWasEntered;
@property(nonatomic) _Bool ghostModeEnabledBecauseOfInsufficientLocationPermissions;
@property(retain, nonatomic) NSDate *dateWhenLocationSharingUpsellServiceWasChecked;
@property(retain, nonatomic) NSSet *userIdListToNotShowLocationCarouselPrompt;
@property(nonatomic) double lastLocationSharingNotificationDisplayTimeIntervalSince1970;
@property(nonatomic) unsigned long long locationSharingNotificationDisplayCount;
@property(nonatomic) unsigned long long numberOfTimesUserHasSeenNotSharingLocationTooltip;
@property(retain, nonatomic) NSDate *lastNotSharingLocationTooltipDisplayDate;
@property(nonatomic) _Bool alertRequiredBeforeLeavingGhostMode;
- (id)initWithPreferences:(id)arg1;

@end

