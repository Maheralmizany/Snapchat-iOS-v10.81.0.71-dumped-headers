//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSString, SCCORECompositeStoryId, SCSLIFeedBaseInfo;

@interface SCSLIStoryFeedBaseInfo : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) SCSLIFeedBaseInfo *feedBaseInfo; // @dynamic feedBaseInfo;
@property(nonatomic) _Bool hasFeedBaseInfo; // @dynamic hasFeedBaseInfo;
@property(nonatomic) _Bool hasItemId; // @dynamic hasItemId;
@property(nonatomic) _Bool isExplorationStory; // @dynamic isExplorationStory;
@property(nonatomic) _Bool isPromoted; // @dynamic isPromoted;
@property(nonatomic) _Bool isSubscribed; // @dynamic isSubscribed;
@property(retain, nonatomic) SCCORECompositeStoryId *itemId; // @dynamic itemId;
@property(nonatomic) int itemLayout; // @dynamic itemLayout;
@property(nonatomic) int itemPosition; // @dynamic itemPosition;
@property(nonatomic) int itemType; // @dynamic itemType;
@property(copy, nonatomic) NSString *itemTypeSpecific; // @dynamic itemTypeSpecific;
@property(nonatomic) int rerankingId; // @dynamic rerankingId;
@property(nonatomic) int storyFeedItemSource; // @dynamic storyFeedItemSource;
@property(copy, nonatomic) NSString *streamId; // @dynamic streamId;

@end

