//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, SCPreferences, SCTimeProvider;

@interface SCLensDownloadTracker : NSObject
{
    SCPreferences *_preferencesStorage;
    _Bool _preferencesDirty;
    NSMutableDictionary *_lensCooldownExpirationDatesMap;
    NSMutableDictionary *_lensFetchDatesMap;
    SCTimeProvider *_currentDateProvider;
    double _cooldownTimeInterval;
}

- (void).cxx_destruct;
- (void)_didEnterBackground:(id)arg1;
- (void)_saveCooldownExpirationDate:(id)arg1 forLensResource:(id)arg2 withExpirationDate:(id)arg3;
- (void)_cleanupOldLensContentDownloadData;
- (void)_loadFromPreferencesIfNeeded;
- (void)saveToPreferences;
- (void)removeAllDownloadRecords;
- (_Bool)wasContentRecentlyDownloadedForLens:(id)arg1;
- (void)_setLastDownloadDate:(id)arg1 forLensResource:(id)arg2 withExpirationDate:(id)arg3;
- (void)saveLastDownloadDateForLens:(id)arg1;
- (id)initWithPreferencesStorage:(id)arg1 currentDateProvider:(id)arg2 cooldownTimeInterval:(double)arg3;
- (id)initWithPreferencesStorage:(id)arg1 currentDateProvider:(id)arg2;

@end

