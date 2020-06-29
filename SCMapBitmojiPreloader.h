//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCMapPersonLocationsListener-Protocol.h"

@class NSString, SCFeatureSettingsService, SCLazy, SCMapBitmojiAvatarGenerator;
@protocol SCMapPeopleFriendsProvider, SCMapPersonLocationsProviding;

@interface SCMapBitmojiPreloader : NSObject <SCMapPersonLocationsListener>
{
    NSString *_currentUserId;
    SCFeatureSettingsService *_featureSettingsService;
    SCMapBitmojiAvatarGenerator *_mapBitmojiAvatarGenerator;
    id <SCMapPeopleFriendsProvider> _mapPeopleFriendsProvider;
    id <SCMapPersonLocationsProviding> _mapPersonLocationsProvider;
    SCLazy *_sharingPreferencesProvider;
}

- (void).cxx_destruct;
- (void)_preloadStickerForCurrentUserLocation:(id)arg1;
- (void)personLocationsProviderDidUpdate:(id)arg1;
- (id)initWithCurrentUserId:(id)arg1 featureSettingsService:(id)arg2 mapBitmojiAvatarGenerator:(id)arg3 mapPeopleFriendsProvider:(id)arg4 mapPersonLocationsProvider:(id)arg5 sharingPreferencesProvider:(id)arg6;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
