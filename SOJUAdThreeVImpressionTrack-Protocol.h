//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCSojuMessage-Protocol.h"

@class NSNumber, NSString, SOJUAdTopsnapVolumes;

@protocol SOJUAdThreeVImpressionTrack <SCSojuMessage>
@property(readonly, nonatomic) NSString *topsnapMediaType;
@property(readonly, nonatomic) NSNumber *topsnapAudibleTimeViewedSeconds;
@property(readonly, nonatomic) NSNumber *topsnapMaxContinuousTimeViewedSeconds;
@property(readonly, nonatomic) SOJUAdTopsnapVolumes *topsnapVolumes;
@property(readonly, nonatomic) NSNumber *topsnapTimeViewedBeforeInteractionSeconds;
@property(readonly, nonatomic) NSNumber *topsnapAudioPlaybackVolume;
@property(readonly, nonatomic) NSString *creativeId;
@property(readonly, nonatomic) NSNumber *deltaBetweenReceiveAndRenderMillis;
@property(readonly, nonatomic) NSNumber *renderedTimestampInMilliSeconds;
@property(readonly, nonatomic) NSNumber *topsnapMediaDurationSeconds;
@property(readonly, nonatomic) NSNumber *topsnapTimeViewedSeconds;
@end

