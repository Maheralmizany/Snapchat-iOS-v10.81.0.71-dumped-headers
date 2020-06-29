//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCEntryPoint.h"

@class SCDiscoverFeedDataServices, SCDiscoverFeedExtensionProviderScope, SCNetworkImageServices, SCUserStorageServices;

@interface SCDiscoverFeedGamesEntryPoint : SCEntryPoint
{
    SCDiscoverFeedExtensionProviderScope *_discoverFeedExtensionProviderScope;
    SCDiscoverFeedDataServices *_discoverFeedDataServices;
    SCNetworkImageServices *_networkImageServices;
    SCUserStorageServices *_userStorageServices;
}

@property(nonatomic) __weak SCUserStorageServices *userStorageServices; // @synthesize userStorageServices=_userStorageServices;
@property(nonatomic) __weak SCNetworkImageServices *networkImageServices; // @synthesize networkImageServices=_networkImageServices;
@property(nonatomic) __weak SCDiscoverFeedDataServices *discoverFeedDataServices; // @synthesize discoverFeedDataServices=_discoverFeedDataServices;
@property(nonatomic) __weak SCDiscoverFeedExtensionProviderScope *discoverFeedExtensionProviderScope; // @synthesize discoverFeedExtensionProviderScope=_discoverFeedExtensionProviderScope;
- (void).cxx_destruct;
- (id)_discoverFeedGamesSectionDataProvider;
- (void)begin;

@end

