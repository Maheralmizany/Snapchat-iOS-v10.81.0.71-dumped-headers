//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSString, SCCPUUID;

@interface SCCPCharmGraphic_Friendmoji : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) _Bool hasUser1Id; // @dynamic hasUser1Id;
@property(nonatomic) _Bool hasUser2Id; // @dynamic hasUser2Id;
@property(copy, nonatomic) NSString *templateId; // @dynamic templateId;
@property(retain, nonatomic) SCCPUUID *user1Id; // @dynamic user1Id;
@property(retain, nonatomic) SCCPUUID *user2Id; // @dynamic user2Id;

@end

