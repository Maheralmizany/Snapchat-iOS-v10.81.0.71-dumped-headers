//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCSojuMessage.h"

#import "SOJUBroadcastMobsModelLocation-Protocol.h"

@class NSNumber, NSString;

@interface SOJUBroadcastMobsModelLocation : SCSojuMessage <SOJUBroadcastMobsModelLocation>
{
}

+ (void)registerMessageFields:(id)arg1;
- (id)initWithLat:(id)arg1 lng:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) NSNumber *lat; // @dynamic lat;
@property(readonly, nonatomic) NSNumber *lng; // @dynamic lng;
@property(readonly) Class superclass;

@end

