//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCStreamingLocationSharingPreferencesProviding-Protocol.h"

@class NSString, SCLazy, SCLocationSharingPreferences, SCObservable, SCPublishSubject;

@interface SCStreamingLocationSharingPreferencesProvider : NSObject <SCStreamingLocationSharingPreferencesProviding>
{
    SCPublishSubject *_preferencesChangePublisher;
    SCPublishSubject *_preferencesSyncPublisher;
    _Bool _hasEverSetPreferences;
    SCLazy *_rpcProvider;
    SCLazy *_userPreferences;
    SCLocationSharingPreferences *_preferences;
    SCObservable *_preferencesSyncObservable;
    SCObservable *_preferencesChangeObservable;
}

@property(readonly, nonatomic) SCLocationSharingPreferences *preferences; // @synthesize preferences=_preferences;
- (void).cxx_destruct;
- (void)didReceiveSetPreferencesResponse:(id)arg1;
- (void)didReceiveGetPreferencesResponse:(id)arg1;
@property(readonly, nonatomic) SCObservable *preferencesSyncObservable; // @synthesize preferencesSyncObservable=_preferencesSyncObservable;
@property(readonly, nonatomic) SCObservable *preferencesChangeObservable; // @synthesize preferencesChangeObservable=_preferencesChangeObservable;
- (void)updateLocationSharingPreferences:(id)arg1 source:(long long)arg2 updateType:(long long)arg3 completionQueue:(id)arg4 completion:(CDUnknownBlockType)arg5;
- (void)setDidOnboard;
- (void)revalidateCachedPreferencesWithSource:(long long)arg1;
- (_Bool)isBeingMutated;
- (_Bool)hasFetchedLocationPreferences;
- (_Bool)hasEverSetPreferences;
- (void)ensureHasPreferencesWithSource:(long long)arg1 completionQueue:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)initWithUserPreferences:(id)arg1 rpcProvider:(id)arg2;
- (void)setPreferences:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

