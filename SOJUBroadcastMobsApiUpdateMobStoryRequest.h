//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCSojuMessage.h"

#import "SOJUBroadcastMobsApiUpdateMobStoryRequest-Protocol.h"

@class NSArray, NSNumber, NSString, SOJUBroadcastMobsModelLocation;

@interface SOJUBroadcastMobsApiUpdateMobStoryRequest : SCSojuMessage <SOJUBroadcastMobsApiUpdateMobStoryRequest>
{
}

+ (void)registerMessageFields:(id)arg1;
- (id)initWithIdValue:(id)arg1 typeVal:(id)arg2 displayName:(id)arg3 contributors:(id)arg4 geoFenceCenter:(id)arg5 geoSubtext:(id)arg6 privacyType:(id)arg7 viewers:(id)arg8 enableAutosave:(id)arg9 mischiefId:(id)arg10 customMobStorySubtype:(id)arg11;

// Remaining properties
@property(readonly, nonatomic) NSArray *contributors; // @dynamic contributors;
@property(readonly, nonatomic) NSString *customMobStorySubtype; // @dynamic customMobStorySubtype;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) NSString *displayName; // @dynamic displayName;
@property(readonly, nonatomic) NSNumber *enableAutosave; // @dynamic enableAutosave;
@property(readonly, nonatomic) SOJUBroadcastMobsModelLocation *geoFenceCenter; // @dynamic geoFenceCenter;
@property(readonly, nonatomic) NSString *geoSubtext; // @dynamic geoSubtext;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) NSString *idValue; // @dynamic idValue;
@property(readonly, nonatomic) NSString *mischiefId; // @dynamic mischiefId;
@property(readonly, nonatomic) NSString *privacyType; // @dynamic privacyType;
@property(readonly) Class superclass;
@property(readonly, nonatomic) NSString *typeVal; // @dynamic typeVal;
@property(readonly, nonatomic) NSArray *viewers; // @dynamic viewers;

@end

