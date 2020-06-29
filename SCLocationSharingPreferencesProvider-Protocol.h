//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSObject, SCLocationSharingPreferences, SCObservable;
@protocol OS_dispatch_queue;

@protocol SCLocationSharingPreferencesProvider <NSObject>
@property(readonly, nonatomic) SCLocationSharingPreferences *preferences;
@property(readonly, nonatomic) SCObservable *preferencesSyncObservable;
@property(readonly, nonatomic) SCObservable *preferencesChangeObservable;
- (void)revalidateCachedPreferencesWithSource:(long long)arg1;
- (void)ensureHasPreferencesWithSource:(long long)arg1 completionQueue:(NSObject<OS_dispatch_queue> *)arg2 completion:(void (^)(_Bool, NSError *))arg3;
- (_Bool)hasEverSetPreferences;
- (_Bool)hasFetchedLocationPreferences;
- (_Bool)isBeingMutated;
@end

