//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCSojuMessage.h"

#import "SOJUGeoGeoLocation-Protocol.h"

@class NSNumber, NSString;

@interface SOJUGeoGeoLocation : SCSojuMessage <SOJUGeoGeoLocation>
{
}

+ (void)registerMessageFields:(id)arg1;
- (id)initWithTimestamp:(id)arg1 lat:(id)arg2 lon:(id)arg3 altitude:(id)arg4 horizontalAccuracy:(id)arg5 speed:(id)arg6;

// Remaining properties
@property(readonly, nonatomic) NSNumber *altitude; // @dynamic altitude;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) NSNumber *horizontalAccuracy; // @dynamic horizontalAccuracy;
@property(readonly, nonatomic) NSNumber *lat; // @dynamic lat;
@property(readonly, nonatomic) NSNumber *lon; // @dynamic lon;
@property(readonly, nonatomic) NSNumber *speed; // @dynamic speed;
@property(readonly) Class superclass;
@property(readonly, nonatomic) NSNumber *timestamp; // @dynamic timestamp;

@end

