//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCSojuMessage-Protocol.h"

@class NSNumber;

@protocol SOJUAdTopsnapVolumes <SCSojuMessage>
@property(readonly, nonatomic) NSNumber *maxVolumeAt100PercentMediaDuration;
@property(readonly, nonatomic) NSNumber *maxVolumeAt97PercentMediaDuration;
@property(readonly, nonatomic) NSNumber *maxVolumeAt75PercentMediaDuration;
@property(readonly, nonatomic) NSNumber *maxVolumeAt50PercentMediaDuration;
@property(readonly, nonatomic) NSNumber *maxVolumeAt25PercentMediaDuration;
@property(readonly, nonatomic) NSNumber *maxVolumeAtStart;
@end
