//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCSojuMessage-Protocol.h"

@class NSNumber, NSString;

@protocol SOJUAdLensSlotImpressionTrack <SCSojuMessage>
@property(readonly, nonatomic) NSString *lensSessionId;
@property(readonly, nonatomic) NSString *mediaType;
@property(readonly, nonatomic) NSNumber *isAudioOn;
@property(readonly, nonatomic) NSNumber *camera;
@property(readonly, nonatomic) NSNumber *withMemoriesSave;
@property(readonly, nonatomic) NSNumber *withStoryPost;
@property(readonly, nonatomic) NSNumber *withSnapSend;
@property(readonly, nonatomic) NSNumber *swipedOverCount;
@property(readonly, nonatomic) NSString *lensOptionId;
@property(readonly, nonatomic) NSString *filterGeolensId;
@property(readonly, nonatomic) NSNumber *snapPreviewMillis;
@property(readonly, nonatomic) NSNumber *snapTimeMillis;
@property(readonly, nonatomic) NSNumber *totalSwipedViewMillis;
@end
