//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSString, SCPNFLModel, SCPNFLTrainingMetrics;

@interface SCPNFLModelCheckpoint : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) SCPNFLTrainingMetrics *aggregatedTrainingMetrics; // @dynamic aggregatedTrainingMetrics;
@property(copy, nonatomic) NSString *checkpointId; // @dynamic checkpointId;
@property(copy, nonatomic) NSString *experimentId; // @dynamic experimentId;
@property(nonatomic) _Bool hasAggregatedTrainingMetrics; // @dynamic hasAggregatedTrainingMetrics;
@property(nonatomic) _Bool hasModel; // @dynamic hasModel;
@property(retain, nonatomic) SCPNFLModel *model; // @dynamic model;
@property(nonatomic) int roundNumber; // @dynamic roundNumber;
@property(nonatomic) long long timestampMs; // @dynamic timestampMs;

@end

