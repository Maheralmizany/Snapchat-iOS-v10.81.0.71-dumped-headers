//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSMutableArray, SCSCOREUUID;

@interface FanoutUserCustomStoryGroupMetadata : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) SCSCOREUUID *groupId; // @dynamic groupId;
@property(nonatomic) _Bool hasGroupId; // @dynamic hasGroupId;
@property(retain, nonatomic) NSMutableArray *userIdsArray; // @dynamic userIdsArray;
@property(readonly, nonatomic) unsigned long long userIdsArray_Count; // @dynamic userIdsArray_Count;

@end
