//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class IMPUserSettings, NSMutableArray, NSString;

@interface IMPListManagedBusinessProfilesResponse : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) _Bool hasUserSettings; // @dynamic hasUserSettings;
@property(nonatomic) _Bool isPopular; // @dynamic isPopular;
@property(copy, nonatomic) NSString *nextPageId; // @dynamic nextPageId;
@property(copy, nonatomic) NSString *pageId; // @dynamic pageId;
@property(retain, nonatomic) NSMutableArray *profilesArray; // @dynamic profilesArray;
@property(readonly, nonatomic) unsigned long long profilesArray_Count; // @dynamic profilesArray_Count;
@property(retain, nonatomic) IMPUserSettings *userSettings; // @dynamic userSettings;

@end

