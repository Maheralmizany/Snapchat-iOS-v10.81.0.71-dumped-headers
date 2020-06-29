//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSData, SCAdsApplication, SCAdsDevice, SCAdsNetwork, SCAdsPreferences;

@interface SCAdsInitRequest : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) SCAdsApplication *application; // @dynamic application;
@property(retain, nonatomic) SCAdsDevice *device; // @dynamic device;
@property(copy, nonatomic) NSData *encryptedUserData; // @dynamic encryptedUserData;
@property(copy, nonatomic) NSData *fsnEncryptedUserData; // @dynamic fsnEncryptedUserData;
@property(nonatomic) _Bool hasApplication; // @dynamic hasApplication;
@property(nonatomic) _Bool hasDevice; // @dynamic hasDevice;
@property(nonatomic) _Bool hasNetwork; // @dynamic hasNetwork;
@property(nonatomic) _Bool hasPreferences; // @dynamic hasPreferences;
@property(copy, nonatomic) NSData *idfa; // @dynamic idfa;
@property(nonatomic) _Bool isDebug; // @dynamic isDebug;
@property(nonatomic) _Bool isRerouteRequest; // @dynamic isRerouteRequest;
@property(retain, nonatomic) SCAdsNetwork *network; // @dynamic network;
@property(retain, nonatomic) SCAdsPreferences *preferences; // @dynamic preferences;
@property(copy, nonatomic) NSData *said; // @dynamic said;

@end

