//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class SCSSMLongformVideoTracks, SCSSMPublisher, SCSSMPublisherHNNewsMetadata, SCSSMPublisherShowMetadata, SCSSMPublisherSnaps, SCSSMPublisherStoryAdPlacementMetadata, SCSSMPublisherStoryWatchedState, SCSSMStoryFragmentMetadata, SCSSMStoryPrefetchMetadata;

@interface SCSSMPublisherStoryCard : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) SCSSMPublisherStoryAdPlacementMetadata *adPlacementMetadata; // @dynamic adPlacementMetadata;
@property(nonatomic) long long editionId; // @dynamic editionId;
@property(retain, nonatomic) SCSSMStoryFragmentMetadata *fragmentMetadata; // @dynamic fragmentMetadata;
@property(nonatomic) _Bool hasAdPlacementMetadata; // @dynamic hasAdPlacementMetadata;
@property(nonatomic) _Bool hasCuratedSnaps; // @dynamic hasCuratedSnaps;
@property(nonatomic) _Bool hasFragmentMetadata; // @dynamic hasFragmentMetadata;
@property(nonatomic) _Bool hasHnNewsMetadata; // @dynamic hasHnNewsMetadata;
@property(nonatomic) _Bool hasPrefetchMetadata; // @dynamic hasPrefetchMetadata;
@property(nonatomic) _Bool hasPublisher; // @dynamic hasPublisher;
@property(nonatomic) _Bool hasShowMetadata; // @dynamic hasShowMetadata;
@property(nonatomic) _Bool hasSnaps; // @dynamic hasSnaps;
@property(nonatomic) _Bool hasVideoTracks; // @dynamic hasVideoTracks;
@property(nonatomic) _Bool hasWatchedState; // @dynamic hasWatchedState;
@property(retain, nonatomic) SCSSMPublisherHNNewsMetadata *hnNewsMetadata; // @dynamic hnNewsMetadata;
@property(nonatomic) int indicatorType; // @dynamic indicatorType;
@property(nonatomic) _Bool isLive; // @dynamic isLive;
@property(nonatomic) _Bool isShareable; // @dynamic isShareable;
@property(retain, nonatomic) SCSSMStoryPrefetchMetadata *prefetchMetadata; // @dynamic prefetchMetadata;
@property(nonatomic) long long publishTimestampMsecs; // @dynamic publishTimestampMsecs;
@property(retain, nonatomic) SCSSMPublisher *publisher; // @dynamic publisher;
@property(retain, nonatomic) SCSSMPublisherShowMetadata *showMetadata; // @dynamic showMetadata;
@property(retain, nonatomic) SCSSMPublisherSnaps *snaps; // @dynamic snaps;
@property(retain, nonatomic) SCSSMLongformVideoTracks *videoTracks; // @dynamic videoTracks;
@property(nonatomic) unsigned long long viewCount; // @dynamic viewCount;
@property(retain, nonatomic) SCSSMPublisherStoryWatchedState *watchedState; // @dynamic watchedState;

@end

