//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCStoriesOnboardingManaging-Protocol.h"

@class NSString, SCLazy;

@interface SCStoriesOnboardingManager : NSObject <SCStoriesOnboardingManaging>
{
    SCLazy *_userPreferences;
    SCLazy *_userTooltipsProvider;
    SCLazy *_migrationTracker;
}

- (void).cxx_destruct;
- (void)setSaveEntireStoryOnboardingComplete:(_Bool)arg1;
- (_Bool)saveEntireStoryOnboardingComplete;
- (void)migrateFromUser;
- (id)initWithUserPreferences:(id)arg1 userTooltipsProvider:(id)arg2 userMigrationTracker:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

