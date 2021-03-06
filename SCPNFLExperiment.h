//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSString, SCPNFLModel, SCPNFLRoundParameters, SCPNFLTrainingParameters;

@interface SCPNFLExperiment : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) SCPNFLModel *baseModel; // @dynamic baseModel;
@property(nonatomic) int executionState; // @dynamic executionState;
@property(copy, nonatomic) NSString *experimentId; // @dynamic experimentId;
@property(nonatomic) _Bool hasBaseModel; // @dynamic hasBaseModel;
@property(nonatomic) _Bool hasRoundParameters; // @dynamic hasRoundParameters;
@property(nonatomic) _Bool hasTrainingParameters; // @dynamic hasTrainingParameters;
@property(retain, nonatomic) SCPNFLRoundParameters *roundParameters; // @dynamic roundParameters;
@property(retain, nonatomic) SCPNFLTrainingParameters *trainingParameters; // @dynamic trainingParameters;

@end

