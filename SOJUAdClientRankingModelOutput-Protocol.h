//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCSojuMessage-Protocol.h"

@class NSNumber, NSString;

@protocol SOJUAdClientRankingModelOutput <SCSojuMessage>
@property(readonly, nonatomic) NSString *error;
@property(readonly, nonatomic) NSNumber *loadingLatency;
@property(readonly, nonatomic) NSNumber *inferenceLatency;
@property(readonly, nonatomic) NSNumber *score;
@property(readonly, nonatomic) NSString *modelId;
@end
