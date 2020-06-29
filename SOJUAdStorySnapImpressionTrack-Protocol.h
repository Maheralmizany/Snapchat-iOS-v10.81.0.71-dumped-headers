//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCSojuMessage-Protocol.h"

@class NSNumber, NSString, SOJUAdAdToLensImpressionTrack, SOJUAdAppInstallImpressionTrack, SOJUAdDeepLinkImpressionTrack, SOJUAdLocalWebpageImpressionTrack, SOJUAdLongformVideoImpressionTrack, SOJUAdRemoteWebpageImpressionTrack, SOJUAdSubscribeImpressionTrack, SOJUAdThreeVImpressionTrack;

@protocol SOJUAdStorySnapImpressionTrack <SCSojuMessage>
@property(readonly, nonatomic) SOJUAdAdToLensImpressionTrack *adToLens;
@property(readonly, nonatomic) SOJUAdSubscribeImpressionTrack *subscribe;
@property(readonly, nonatomic) SOJUAdDeepLinkImpressionTrack *deepLink;
@property(readonly, nonatomic) SOJUAdLocalWebpageImpressionTrack *localWebpage;
@property(readonly, nonatomic) SOJUAdRemoteWebpageImpressionTrack *remoteWebpage;
@property(readonly, nonatomic) SOJUAdLongformVideoImpressionTrack *longformVideo;
@property(readonly, nonatomic) SOJUAdAppInstallImpressionTrack *appInstall;
@property(readonly, nonatomic) SOJUAdThreeVImpressionTrack *threeV;
@property(readonly, nonatomic) NSString *adType;
@property(readonly, nonatomic) NSString *skipEvent;
@property(readonly, nonatomic) NSNumber *swipeUpCount;
@property(readonly, nonatomic) NSNumber *snapIndex;
@end

