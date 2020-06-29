//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCSojuMessage.h"

#import "SOJUAdStoryImpressionTrack-Protocol.h"

@class NSArray, NSNumber, NSString, SOJUAdTileImpressionTrack;

@interface SOJUAdStoryImpressionTrack : SCSojuMessage <SOJUAdStoryImpressionTrack>
{
}

+ (void)registerMessageFields:(id)arg1;
- (id)initWithTimeViewedSeconds:(id)arg1 mediaDurationSeconds:(id)arg2 snapCount:(id)arg3 viewedSnapIndex:(id)arg4 exitEvent:(id)arg5 uniqueSwipeUps:(id)arg6 totalSwipeUps:(id)arg7 isAudioOn:(id)arg8 snapImpressions:(id)arg9 tileImpression:(id)arg10 creativeId:(id)arg11;

// Remaining properties
@property(readonly, nonatomic) NSString *creativeId; // @dynamic creativeId;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) NSString *exitEvent; // @dynamic exitEvent;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) NSNumber *isAudioOn; // @dynamic isAudioOn;
@property(readonly, nonatomic) NSNumber *mediaDurationSeconds; // @dynamic mediaDurationSeconds;
@property(readonly, nonatomic) NSNumber *snapCount; // @dynamic snapCount;
@property(readonly, nonatomic) NSArray *snapImpressions; // @dynamic snapImpressions;
@property(readonly) Class superclass;
@property(readonly, nonatomic) SOJUAdTileImpressionTrack *tileImpression; // @dynamic tileImpression;
@property(readonly, nonatomic) NSNumber *timeViewedSeconds; // @dynamic timeViewedSeconds;
@property(readonly, nonatomic) NSNumber *totalSwipeUps; // @dynamic totalSwipeUps;
@property(readonly, nonatomic) NSNumber *uniqueSwipeUps; // @dynamic uniqueSwipeUps;
@property(readonly, nonatomic) NSNumber *viewedSnapIndex; // @dynamic viewedSnapIndex;

@end

