//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCEntryPoint.h"

@class SCActiveUserSessionScope, SCDiscoverFeedBaseServices, SCDiscoverFeedExtensionProviderScope, SCLegacySnapchatterServices, SCNetworkImageServices, SCSnapchatterServices, SCStoriesPreferencesServices;

@interface SCDiscoverFeedQuickAddCarouselSectionEntryPoint : SCEntryPoint
{
    SCActiveUserSessionScope *_activeUserSessionScope;
    SCDiscoverFeedExtensionProviderScope *_discoverFeedExtensionProviderScope;
    SCDiscoverFeedBaseServices *_discoverFeedBaseServices;
    SCNetworkImageServices *_networkImageServices;
    SCSnapchatterServices *_snapchatterServices;
    SCLegacySnapchatterServices *_legacySnapchatterServices;
    SCStoriesPreferencesServices *_storiesPreferencesServices;
}

@property(nonatomic) __weak SCStoriesPreferencesServices *storiesPreferencesServices; // @synthesize storiesPreferencesServices=_storiesPreferencesServices;
@property(nonatomic) __weak SCLegacySnapchatterServices *legacySnapchatterServices; // @synthesize legacySnapchatterServices=_legacySnapchatterServices;
@property(nonatomic) __weak SCSnapchatterServices *snapchatterServices; // @synthesize snapchatterServices=_snapchatterServices;
@property(nonatomic) __weak SCNetworkImageServices *networkImageServices; // @synthesize networkImageServices=_networkImageServices;
@property(nonatomic) __weak SCDiscoverFeedBaseServices *discoverFeedBaseServices; // @synthesize discoverFeedBaseServices=_discoverFeedBaseServices;
@property(nonatomic) __weak SCDiscoverFeedExtensionProviderScope *discoverFeedExtensionProviderScope; // @synthesize discoverFeedExtensionProviderScope=_discoverFeedExtensionProviderScope;
@property(nonatomic) __weak SCActiveUserSessionScope *activeUserSessionScope; // @synthesize activeUserSessionScope=_activeUserSessionScope;
- (void).cxx_destruct;
- (void)begin;

@end

