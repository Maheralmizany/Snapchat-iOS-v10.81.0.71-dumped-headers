//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCSojuMessage-Protocol.h"

@class NSArray, NSNumber, NSString, SOJUAdsStoryAdMetadata, SOJUBroadcastOfficialStoriesMetadata, SOJUBroadcastTileMetadata, SOJUStoryThumbnails;

@protocol SOJUFriendStories <SCSojuMessage>
@property(readonly, nonatomic) NSString *mobType;
@property(readonly, nonatomic) NSString *userId;
@property(readonly, nonatomic) NSNumber *sojuNewStoryCount;
@property(readonly, nonatomic) SOJUBroadcastOfficialStoriesMetadata *officialStoriesMetadata;
@property(readonly, nonatomic) NSString *publisherId;
@property(readonly, nonatomic) NSString *type;
@property(readonly, nonatomic) NSNumber *isManifestStory;
@property(readonly, nonatomic) SOJUBroadcastTileMetadata *featuredStory;
@property(readonly, nonatomic) NSNumber *showViewingJit;
@property(readonly, nonatomic) NSNumber *hasCustomDescription;
@property(readonly, nonatomic) NSNumber *allowStoryExplorer;
@property(readonly, nonatomic) SOJUStoryThumbnails *thumbnails;
@property(readonly, nonatomic) SOJUAdsStoryAdMetadata *adPlacementMetadata;
@property(readonly, nonatomic) NSNumber *matureContent;
@property(readonly, nonatomic) NSString *sharedId;
@property(readonly, nonatomic) NSString *deepLinkUrl;
@property(readonly, nonatomic) NSString *profileDescription;
@property(readonly, nonatomic) NSNumber *isLocal;
@property(readonly, nonatomic) NSString *displayName;
@property(readonly, nonatomic) NSArray *stories;
@property(readonly, nonatomic) NSString *username;
@end

