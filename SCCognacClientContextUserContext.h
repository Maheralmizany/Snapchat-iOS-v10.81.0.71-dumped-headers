//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSString, SCCognacClientContextDevice;

@interface SCCognacClientContextUserContext : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) int appBuildFlavor; // @dynamic appBuildFlavor;
@property(copy, nonatomic) NSString *countryCode; // @dynamic countryCode;
@property(retain, nonatomic) SCCognacClientContextDevice *device; // @dynamic device;
@property(nonatomic) _Bool hasDevice; // @dynamic hasDevice;
@property(copy, nonatomic) NSString *localeCode; // @dynamic localeCode;
@property(copy, nonatomic) NSString *userId; // @dynamic userId;
@property(nonatomic) int xtmlLocaleCode; // @dynamic xtmlLocaleCode;

@end
