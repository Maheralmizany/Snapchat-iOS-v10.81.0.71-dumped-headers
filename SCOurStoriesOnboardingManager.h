//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCOurStoriesOnboardingManaging-Protocol.h"

@class NSString, SCFeatureSettingsService, SCLazy;

@interface SCOurStoriesOnboardingManager : NSObject <SCOurStoriesOnboardingManaging>
{
    SCFeatureSettingsService *_featureSettingsService;
    SCLazy *_userPreferences;
    SCLazy *_userTooltipsProvider;
    SCLazy *_migrationTracker;
}

- (void).cxx_destruct;
- (_Bool)isCommunitySnapsOnboardingComplete;
- (void)_updateCommunitySnapsOnboardingComplete:(_Bool)arg1;
- (void)setCommunitySnapsOnboardingComplete:(_Bool)arg1;
- (_Bool)isOurStoriesOnboardingComplete;
- (void)setOurStoriesOnboardingComplete:(_Bool)arg1;
@property(nonatomic) _Bool displayedBestOfSpectaclesSendToIntro;
- (void)migrateFromUser;
- (id)initWithFeatureSettingsService:(id)arg1 userPreferences:(id)arg2 userTooltipsProvider:(id)arg3 userMigrationTracker:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

