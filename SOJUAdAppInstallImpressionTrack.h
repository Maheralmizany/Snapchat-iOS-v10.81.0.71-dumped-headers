//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCSojuMessage.h"

#import "SOJUAdAppInstallImpressionTrack-Protocol.h"

@class NSNumber, NSString, SOJUAdTopsnapVolumes;

@interface SOJUAdAppInstallImpressionTrack : SCSojuMessage <SOJUAdAppInstallImpressionTrack>
{
}

+ (void)registerMessageFields:(id)arg1;
- (id)initWithTopsnapTimeViewedSeconds:(id)arg1 topsnapMediaDurationSeconds:(id)arg2 swiped:(id)arg3 renderedTimestampInMilliSeconds:(id)arg4 deltaBetweenReceiveAndRenderMillis:(id)arg5 swipeCount:(id)arg6 creativeId:(id)arg7 topsnapAudioPlaybackVolume:(id)arg8 longformAudioPlaybackVolume:(id)arg9 topsnapTimeViewedBeforeInteractionSeconds:(id)arg10 topsnapVolumes:(id)arg11 topsnapMaxContinuousTimeViewedSeconds:(id)arg12 topsnapAudibleTimeViewedSeconds:(id)arg13 topsnapMediaType:(id)arg14;

// Remaining properties
@property(readonly, nonatomic) NSString *creativeId; // @dynamic creativeId;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, nonatomic) NSNumber *deltaBetweenReceiveAndRenderMillis; // @dynamic deltaBetweenReceiveAndRenderMillis;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) NSNumber *longformAudioPlaybackVolume; // @dynamic longformAudioPlaybackVolume;
@property(readonly, nonatomic) NSNumber *renderedTimestampInMilliSeconds; // @dynamic renderedTimestampInMilliSeconds;
@property(readonly) Class superclass;
@property(readonly, nonatomic) NSNumber *swipeCount; // @dynamic swipeCount;
@property(readonly, nonatomic) NSNumber *swiped; // @dynamic swiped;
@property(readonly, nonatomic) NSNumber *topsnapAudibleTimeViewedSeconds; // @dynamic topsnapAudibleTimeViewedSeconds;
@property(readonly, nonatomic) NSNumber *topsnapAudioPlaybackVolume; // @dynamic topsnapAudioPlaybackVolume;
@property(readonly, nonatomic) NSNumber *topsnapMaxContinuousTimeViewedSeconds; // @dynamic topsnapMaxContinuousTimeViewedSeconds;
@property(readonly, nonatomic) NSNumber *topsnapMediaDurationSeconds; // @dynamic topsnapMediaDurationSeconds;
@property(readonly, nonatomic) NSString *topsnapMediaType; // @dynamic topsnapMediaType;
@property(readonly, nonatomic) NSNumber *topsnapTimeViewedBeforeInteractionSeconds; // @dynamic topsnapTimeViewedBeforeInteractionSeconds;
@property(readonly, nonatomic) NSNumber *topsnapTimeViewedSeconds; // @dynamic topsnapTimeViewedSeconds;
@property(readonly, nonatomic) SOJUAdTopsnapVolumes *topsnapVolumes; // @dynamic topsnapVolumes;

@end

