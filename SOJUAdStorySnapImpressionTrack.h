//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCSojuMessage.h"

#import "SOJUAdStorySnapImpressionTrack-Protocol.h"

@class NSNumber, NSString, SOJUAdAdToLensImpressionTrack, SOJUAdAppInstallImpressionTrack, SOJUAdDeepLinkImpressionTrack, SOJUAdLocalWebpageImpressionTrack, SOJUAdLongformVideoImpressionTrack, SOJUAdRemoteWebpageImpressionTrack, SOJUAdSubscribeImpressionTrack, SOJUAdThreeVImpressionTrack;

@interface SOJUAdStorySnapImpressionTrack : SCSojuMessage <SOJUAdStorySnapImpressionTrack>
{
}

+ (void)registerMessageFields:(id)arg1;
- (id)initWithSnapIndex:(id)arg1 swipeUpCount:(id)arg2 skipEvent:(id)arg3 adType:(id)arg4 threeV:(id)arg5 appInstall:(id)arg6 longformVideo:(id)arg7 remoteWebpage:(id)arg8 localWebpage:(id)arg9 deepLink:(id)arg10 subscribe:(id)arg11 adToLens:(id)arg12;

// Remaining properties
@property(readonly, nonatomic) SOJUAdAdToLensImpressionTrack *adToLens; // @dynamic adToLens;
@property(readonly, nonatomic) NSString *adType; // @dynamic adType;
@property(readonly, nonatomic) SOJUAdAppInstallImpressionTrack *appInstall; // @dynamic appInstall;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, nonatomic) SOJUAdDeepLinkImpressionTrack *deepLink; // @dynamic deepLink;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) SOJUAdLocalWebpageImpressionTrack *localWebpage; // @dynamic localWebpage;
@property(readonly, nonatomic) SOJUAdLongformVideoImpressionTrack *longformVideo; // @dynamic longformVideo;
@property(readonly, nonatomic) SOJUAdRemoteWebpageImpressionTrack *remoteWebpage; // @dynamic remoteWebpage;
@property(readonly, nonatomic) NSString *skipEvent; // @dynamic skipEvent;
@property(readonly, nonatomic) NSNumber *snapIndex; // @dynamic snapIndex;
@property(readonly, nonatomic) SOJUAdSubscribeImpressionTrack *subscribe; // @dynamic subscribe;
@property(readonly) Class superclass;
@property(readonly, nonatomic) NSNumber *swipeUpCount; // @dynamic swipeUpCount;
@property(readonly, nonatomic) SOJUAdThreeVImpressionTrack *threeV; // @dynamic threeV;

@end

