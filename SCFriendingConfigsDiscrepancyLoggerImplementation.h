//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCFriendingConfigsDiscrepancyLogger-Protocol.h"

@class NSString, SCLazy;

@interface SCFriendingConfigsDiscrepancyLoggerImplementation : NSObject <SCFriendingConfigsDiscrepancyLogger>
{
    SCLazy *_graphene;
    _Bool _searchableByPhoneNumberDismatched;
    _Bool _isContactSyncEnabledDismatched;
    _Bool _shouldShowQuickAddUnitDismatched;
    _Bool _addedFriendsTimestampDismatched;
    _Bool _contactBookSyncVersionDismatched;
    _Bool _searchableByPhoneNumberFromAllUpdates;
    _Bool _isContactSyncEnabledFromAllUpdates;
    _Bool _shouldShowQuickAddUnitFromAllUpdates;
    long long _addedFriendsTimestampFromAllUpdates;
    long long _contactBookSyncVersionFromAllUpdates;
}

- (void).cxx_destruct;
- (void)contactBookSyncVersionFromFeatureSetting:(long long)arg1;
- (void)addedFriendsTimestampFromFeatureSetting:(long long)arg1;
- (void)shouldShowQuickAddUnitFromFeatureSetting:(_Bool)arg1;
- (void)isContactSyncEnabledFromFeatureSetting:(_Bool)arg1;
- (void)searchableByPhoneNumberFromFeatureSetting:(_Bool)arg1;
- (void)_logInconsistentEventWithDimension:(id)arg1 value:(id)arg2 featureSettingAvailable:(_Bool)arg3;
- (void)compareUpdatesResponse:(id)arg1 withContactBookSyncVersion:(long long)arg2 featureSettingAvailable:(_Bool)arg3;
- (void)compareUpdatesResponse:(id)arg1 withAddedFriendsTimestamp:(long long)arg2 featureSettingAvailable:(_Bool)arg3;
- (void)compareIdentityCheckResponse:(id)arg1 withShouldShowQuickAddUnit:(_Bool)arg2 featureSettingAvailable:(_Bool)arg3;
- (void)compareIdentityCheckResponse:(id)arg1 withIsContactSyncEnabledInFeatureSetting:(_Bool)arg2 featureSettingAvailable:(_Bool)arg3;
- (void)compareUpdatesResponse:(id)arg1 withSearchableByPhoneNumberInFeatureSetting:(_Bool)arg2 featureSettingAvailable:(_Bool)arg3;
- (id)initWithGraphene:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
