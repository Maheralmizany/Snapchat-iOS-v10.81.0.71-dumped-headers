//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCSojuMessage-Protocol.h"

@class NSNumber, NSString, SOJUAdDeepLinkImpressionTrack, SOJUAdRemoteWebpageImpressionTrack;

@protocol SOJUAdCollectionItemImpressionTrack <SCSojuMessage>
@property(readonly, nonatomic) SOJUAdDeepLinkImpressionTrack *deepLink;
@property(readonly, nonatomic) SOJUAdRemoteWebpageImpressionTrack *remoteWebpage;
@property(readonly, nonatomic) NSString *attachmentType;
@property(readonly, nonatomic) NSNumber *positionIndex;
@property(readonly, nonatomic) NSString *productId;
@end

