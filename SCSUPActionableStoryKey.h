//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class SCSUPCategoryKey, SCSUPHNNewsStoryKey, SCSUPLensObjectStoryKey, SCSUPLiveStreamingStoryKey, SCSUPMapTileStoryKey, SCSUPOurStoryKey, SCSUPPublicUserStoryKey, SCSUPPublisherStoryKey, SCSUPRegisteredInterestKey;

@interface SCSUPActionableStoryKey : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) SCSUPCategoryKey *categoryKey; // @dynamic categoryKey;
@property(retain, nonatomic) SCSUPHNNewsStoryKey *hnNewsStoryKey; // @dynamic hnNewsStoryKey;
@property(readonly, nonatomic) int keyOneOfCase; // @dynamic keyOneOfCase;
@property(retain, nonatomic) SCSUPLensObjectStoryKey *lensObjectStoryKey; // @dynamic lensObjectStoryKey;
@property(retain, nonatomic) SCSUPLiveStreamingStoryKey *liveStreamingStoryKey; // @dynamic liveStreamingStoryKey;
@property(retain, nonatomic) SCSUPMapTileStoryKey *mapTileStoryKey; // @dynamic mapTileStoryKey;
@property(retain, nonatomic) SCSUPOurStoryKey *ourStoryKey; // @dynamic ourStoryKey;
@property(retain, nonatomic) SCSUPPublicUserStoryKey *publicUserStoryKey; // @dynamic publicUserStoryKey;
@property(retain, nonatomic) SCSUPPublisherStoryKey *publisherStoryKey; // @dynamic publisherStoryKey;
@property(retain, nonatomic) SCSUPRegisteredInterestKey *registeredInterestKey; // @dynamic registeredInterestKey;

@end

