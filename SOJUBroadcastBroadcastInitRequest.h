//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCSojuMessage.h"

#import "SOJUBroadcastBroadcastInitRequest-Protocol.h"

@class NSNumber, NSString;

@interface SOJUBroadcastBroadcastInitRequest : SCSojuMessage <SOJUBroadcastBroadcastInitRequest>
{
}

+ (void)registerMessageFields:(id)arg1;
- (id)initWithTimestamp:(id)arg1 reqToken:(id)arg2 username:(id)arg3 lastUpdatedTimestamp:(id)arg4 lastUpdatedHashcode:(id)arg5 height:(id)arg6 width:(id)arg7 maxVideoHeight:(id)arg8 maxVideoWidth:(id)arg9 region:(id)arg10 country:(id)arg11 getSubscriptionList:(id)arg12 overrideRulefile:(id)arg13 channelHashCodes:(id)arg14 getCollectionV2:(id)arg15 tilesV2Enabled:(id)arg16 connectionClass:(id)arg17 reachability:(id)arg18 sponsoredCollectionEnabled:(id)arg19 cheetahEnabled:(id)arg20;

// Remaining properties
@property(readonly, nonatomic) NSString *channelHashCodes; // @dynamic channelHashCodes;
@property(readonly, nonatomic) NSNumber *cheetahEnabled; // @dynamic cheetahEnabled;
@property(readonly, nonatomic) NSNumber *connectionClass; // @dynamic connectionClass;
@property(readonly, nonatomic) NSString *country; // @dynamic country;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) NSNumber *getCollectionV2; // @dynamic getCollectionV2;
@property(readonly, nonatomic) NSNumber *getSubscriptionList; // @dynamic getSubscriptionList;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) NSNumber *height; // @dynamic height;
@property(readonly, nonatomic) NSString *lastUpdatedHashcode; // @dynamic lastUpdatedHashcode;
@property(readonly, nonatomic) NSNumber *lastUpdatedTimestamp; // @dynamic lastUpdatedTimestamp;
@property(readonly, nonatomic) NSNumber *maxVideoHeight; // @dynamic maxVideoHeight;
@property(readonly, nonatomic) NSNumber *maxVideoWidth; // @dynamic maxVideoWidth;
@property(readonly, nonatomic) NSString *overrideRulefile; // @dynamic overrideRulefile;
@property(readonly, nonatomic) NSString *reachability; // @dynamic reachability;
@property(readonly, nonatomic) NSString *region; // @dynamic region;
@property(readonly, nonatomic) NSString *reqToken; // @dynamic reqToken;
@property(readonly, nonatomic) NSNumber *sponsoredCollectionEnabled; // @dynamic sponsoredCollectionEnabled;
@property(readonly) Class superclass;
@property(readonly, nonatomic) NSNumber *tilesV2Enabled; // @dynamic tilesV2Enabled;
@property(readonly, nonatomic) NSString *timestamp; // @dynamic timestamp;
@property(readonly, nonatomic) NSString *username; // @dynamic username;
@property(readonly, nonatomic) NSNumber *width; // @dynamic width;

@end
