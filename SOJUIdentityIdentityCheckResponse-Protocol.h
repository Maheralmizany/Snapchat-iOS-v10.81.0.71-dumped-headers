//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCSojuMessage-Protocol.h"

@class NSNumber, NSString, SOJUIdentityTrophyCase, SOJUIdentityUserSegmentsResponse;

@protocol SOJUIdentityIdentityCheckResponse <SCSojuMessage>
@property(readonly, nonatomic) NSNumber *isContactSyncEnabled;
@property(readonly, nonatomic) NSNumber *shouldShowQuickAddUnit;
@property(readonly, nonatomic) NSNumber *wasSnapchatContactPermissionNeverGranted;
@property(readonly, nonatomic) NSNumber *maxSuggestionsInFullPage;
@property(readonly, nonatomic) NSNumber *isUserSearchabilityPromptEnabled;
@property(readonly, nonatomic) NSNumber *maxSuggestionsInSearchResult;
@property(readonly, nonatomic) NSNumber *maxSuggestionsInQuickAdd;
@property(readonly, nonatomic) NSNumber *isSnapchatContactPermissionIosV2Enabled;
@property(readonly, nonatomic) NSNumber *displayNamePopUpCount;
@property(readonly, nonatomic) NSNumber *forceAddressbookFullSync;
@property(readonly, nonatomic) SOJUIdentityUserSegmentsResponse *userSegmentsResponse;
@property(readonly, nonatomic) NSNumber *lastCheckedTrophiesTimestamp;
@property(readonly, nonatomic) SOJUIdentityTrophyCase *trophyCase;
@property(readonly, nonatomic) NSNumber *isHighAccuracyRequiredForNearby;
@property(readonly, nonatomic) NSNumber *isAddNearbyEnabled;
@property(readonly, nonatomic) NSNumber *suggestedFriendFetchThresholdHours;
@property(readonly, nonatomic) NSNumber *suggestedFriendSyncVersion;
@property(readonly, nonatomic) NSNumber *redGearDurationMillis;
@property(readonly, nonatomic) NSNumber *requirePhonePasswordConfirmed;
@property(readonly, nonatomic) NSString *emailPendingVerification;
@property(readonly, nonatomic) NSNumber *isEmailVerified;
@end

