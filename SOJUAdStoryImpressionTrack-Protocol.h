//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCSojuMessage-Protocol.h"

@class NSArray, NSNumber, NSString, SOJUAdTileImpressionTrack;

@protocol SOJUAdStoryImpressionTrack <SCSojuMessage>
@property(readonly, nonatomic) NSString *creativeId;
@property(readonly, nonatomic) SOJUAdTileImpressionTrack *tileImpression;
@property(readonly, nonatomic) NSArray *snapImpressions;
@property(readonly, nonatomic) NSNumber *isAudioOn;
@property(readonly, nonatomic) NSNumber *totalSwipeUps;
@property(readonly, nonatomic) NSNumber *uniqueSwipeUps;
@property(readonly, nonatomic) NSString *exitEvent;
@property(readonly, nonatomic) NSNumber *viewedSnapIndex;
@property(readonly, nonatomic) NSNumber *snapCount;
@property(readonly, nonatomic) NSNumber *mediaDurationSeconds;
@property(readonly, nonatomic) NSNumber *timeViewedSeconds;
@end

