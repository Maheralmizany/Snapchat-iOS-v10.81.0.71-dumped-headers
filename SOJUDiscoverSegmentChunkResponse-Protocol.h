//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCSojuMessage-Protocol.h"

@class NSArray, NSNumber, SOJUDiscoverModerationAudience;

@protocol SOJUDiscoverSegmentChunkResponse <SCSojuMessage>
@property(readonly, nonatomic) SOJUDiscoverModerationAudience *audience;
@property(readonly, nonatomic) NSNumber *categoryEligible;
@property(readonly, nonatomic) NSNumber *isFixed;
@property(readonly, nonatomic) NSArray *tiles;
@property(readonly, nonatomic) NSArray *dsnapIds;
@property(readonly, nonatomic) NSNumber *segmentId;
@end
