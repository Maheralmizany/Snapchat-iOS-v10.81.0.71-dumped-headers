//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCSojuMessage.h"

#import "SOJUBroadcastUserStoryPrecachingUserStoriesPrecacheConfig-Protocol.h"

@class NSArray, NSString, SOJUBroadcastUserStoryPrecachingLookaheadPrecacheConfig, SOJUBroadcastUserStoryPrecachingPrecacheCounts;

@interface SOJUBroadcastUserStoryPrecachingUserStoriesPrecacheConfig : SCSojuMessage <SOJUBroadcastUserStoryPrecachingUserStoriesPrecacheConfig>
{
}

+ (void)registerMessageFields:(id)arg1;
- (id)initWithPrecacheCountsPerStory:(id)arg1 defaultPrecacheCount:(id)arg2 lookaheadPrecache:(id)arg3 lookaheadPrecachePerSection:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, nonatomic) SOJUBroadcastUserStoryPrecachingPrecacheCounts *defaultPrecacheCount; // @dynamic defaultPrecacheCount;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) SOJUBroadcastUserStoryPrecachingLookaheadPrecacheConfig *lookaheadPrecache; // @dynamic lookaheadPrecache;
@property(readonly, nonatomic) NSArray *lookaheadPrecachePerSection; // @dynamic lookaheadPrecachePerSection;
@property(readonly, nonatomic) NSArray *precacheCountsPerStory; // @dynamic precacheCountsPerStory;
@property(readonly) Class superclass;

@end

