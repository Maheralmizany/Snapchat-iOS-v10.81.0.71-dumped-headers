//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class SCS2StorySummaryInfo, SCS2User;

@interface SCS2PopularUser : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) _Bool hasStorySummaryInfo; // @dynamic hasStorySummaryInfo;
@property(nonatomic) _Bool hasUser; // @dynamic hasUser;
@property(retain, nonatomic) SCS2StorySummaryInfo *storySummaryInfo; // @dynamic storySummaryInfo;
@property(retain, nonatomic) SCS2User *user; // @dynamic user;

@end

