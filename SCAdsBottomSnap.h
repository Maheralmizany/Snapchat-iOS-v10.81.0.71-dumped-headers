//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class SCAdsAdToCall, SCAdsAdToLens, SCAdsAdToMessage, SCAdsAppInstall, SCAdsCollection, SCAdsDeeplink, SCAdsLongformVideo, SCAdsWebViewAttachment;

@interface SCAdsBottomSnap : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) SCAdsAdToCall *adToCall; // @dynamic adToCall;
@property(retain, nonatomic) SCAdsAdToLens *adToLens; // @dynamic adToLens;
@property(retain, nonatomic) SCAdsAdToMessage *adToMessage; // @dynamic adToMessage;
@property(retain, nonatomic) SCAdsAppInstall *appInstall; // @dynamic appInstall;
@property(readonly, nonatomic) int bottomSnapTypeOneOfCase; // @dynamic bottomSnapTypeOneOfCase;
@property(retain, nonatomic) SCAdsCollection *collection; // @dynamic collection;
@property(retain, nonatomic) SCAdsDeeplink *deepLink; // @dynamic deepLink;
@property(retain, nonatomic) SCAdsLongformVideo *longformVideo; // @dynamic longformVideo;
@property(retain, nonatomic) SCAdsWebViewAttachment *webView; // @dynamic webView;

@end

